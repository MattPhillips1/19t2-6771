#include <iostream>

// Example 3: The Dimov/Abrahams Example
//
template<class T>
void f( T ){
  std::cout << "T\n";
}

void f(int*){
  std::cout << "int*\n";
}

template<class T>
void f( T* ){
  std::cout << "T*\n";
}


// ...

int main(){
  int *p = nullptr;
  f( p );
}
