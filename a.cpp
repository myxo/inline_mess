#include <iostream>

inline int one(){
    return 1;
}

void print_from_a(){
    std::cout << "from a, value is " << one() << "\n";
}