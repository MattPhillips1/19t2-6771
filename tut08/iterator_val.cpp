// Type your code here, or load an example.
#include <iostream>
#include <vector>
#include <string>
int main(){
    std::cout << typeid(std::vector<std::string>::const_iterator::value_type::value_type).name() << '\n';
    std::cout << typeid(std::vector<std::string>::const_iterator::value_type::reference).name() << '\n';
    std::cout << typeid(std::vector<std::string>::const_iterator::value_type::pointer).name() << '\n';
}
