#ifndef TUTORIALS_WEEK8_ROPE_H_
#define TUTORIALS_WEEK8_ROPE_H_

#include <string>
#include <utility>
#include <vector>

class Rope {
 public:
  explicit Rope(std::vector<std::string> rope): rope_{std::move(rope)} {}

  template<typename It>
  class BaseIterator{
   public:
     using outer_iterator = It;
     using inner_iterator = decltype(It()->begin());

    using iterator_category = std::forward_iterator_tag;
    using value_type = typename inner_iterator::value_type;
    using reference = typename inner_iterator::reference;
    using pointer = typename inner_iterator::pointer;
    using difference_type = int;

    reference operator*() const;
    BaseIterator& operator++();
    BaseIterator operator++(int) {
      auto copy{*this};
      ++(*this);
      return copy;
    }

    // This one isn't strictly required, but it's nice to have.
    pointer operator->() const { return &(operator*()); }

    friend bool operator==(const BaseIterator& lhs, const BaseIterator& rhs) {
      // We need to check the sentinel because comparison of default constructed iterators is undefined.
      return lhs.outer_ == rhs.outer_ && (lhs.outer_ == lhs.sentinel_ || lhs.inner_ == rhs.inner_);
    }

    friend bool operator!=(const BaseIterator& lhs, const BaseIterator& rhs) { return !(lhs == rhs); }
   private:
    // typename std::conditional<std::is_const<T>::value, std::vector<std::string>::const_iterator, std::vector<std::string>::iterator>::type outer_;
    outer_iterator outer_;
    // const typename std::conditional<std::is_const<T>::value, std::vector<std::string>::const_iterator, std::vector<std::string>::iterator>::type sentinel_;
    const outer_iterator sentinel_;
    // typename std::conditional<std::is_const<T>::value, std::string::const_iterator, std::string::iterator>::type inner_;
    inner_iterator inner_;


    friend class Rope;
    BaseIterator(const decltype(outer_)& outer, const decltype(sentinel_)& sentinel, const decltype(inner_)& inner): outer_{outer}, sentinel_{sentinel}, inner_{inner} {}

  };
  using iterator = BaseIterator<std::vector<std::string>::iterator>;
  using const_iterator = BaseIterator<std::vector<std::string>::const_iterator>;

  iterator begin();
  const_iterator cbegin() const;
  const_iterator begin() const { return cbegin(); }
  iterator end();
  const_iterator cend() const;
  const_iterator end() const { return cend(); }

 private:
  std::vector<std::string> rope_;
};

#include "rope_const.cpp"

#endif  // TUTORIALS_WEEK8_ROPE_H_
