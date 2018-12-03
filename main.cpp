#include <iostream>

#include "a.h"
#include "b.h"

int one();

int main(){
    std::cout << "main, value is " << one() << "\n";
    print_from_a();
    print_from_b();
}
