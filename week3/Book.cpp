//
// Created by matt on 27/06/19.
//

#include "Book.h"

bool operator==(const Book& b, const Book& a){
    return b.author_ == a.author_ && b.isbn_ == a.isbn_;
}

bool operator!=(const Book& b, const Book& a){
    return !(b == a);
}

std::ostream& operator<<(std::ostream& o, const Book& b){
    return o << b.name_ << " " << b.isbn_
}

std::cout << b;



