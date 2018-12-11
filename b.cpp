#include <iostream>

inline int one(){
    return 2;
}

void print_from_b(){
    std::cout << "from b, value is " << one() << "\n";
}