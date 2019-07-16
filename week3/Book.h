//
// Created by matt on 27/06/19.
//

#ifndef COMP6771_BOOK_H
#define COMP6771_BOOK_H

#include <string>

class Book {

    public:
    int GetIsbn() const { return isbn_; }
    double GetPrice() const  { return price_; }
    friend bool operator==(const Book& b, const Book& a);
    friend bool operator!=(const Book& b, const Book& a);
    friend std::ostream& operator<<(std::ostream& o, const Book& b);

    operator std::string () const;
    private:
    std::string name_;
    std::string author_;
    int isbn_;
    double price_;
};



#endif //COMP6771_BOOK_H
