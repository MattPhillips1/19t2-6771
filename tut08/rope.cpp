#include "rope.h"
#include <algorithm>

// Iterator Functions
Rope::iterator::reference Rope::iterator::operator*() const {
  return *inner_;
}

Rope::iterator& Rope::iterator::operator++(){
  ++inner_;
  if (inner_ == outer_->end()){
    do {
      ++outer_;
    } while (outer_ != sentinel_ && outer_->empty());
    if (outer_ != sentinel_){
      inner_ = outer_->begin();
    }
  }
  return *this;
}


bool operator==(const Rope::iterator& lhs, const Rope::iterator& rhs){
  return lhs.outer_ == rhs.outer_ && (lhs.outer_ == lhs.sentinel_ || lhs.inner_ == rhs.inner_);
}



// Rope functions
Rope::iterator Rope::begin(){
  const auto not_empty = [](const std::string& s){
    return !s.empty();
  };
  if (auto beg = std::find_if(rope_.begin(), rope_.end(), not_empty); beg != rope_.end()){
    return {beg, rope_.end(), beg->begin()};
  }
  return end();
}

Rope::iterator Rope::end(){
  return {rope_.end(), rope_.end(), {}};
}
