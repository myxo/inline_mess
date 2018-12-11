#include <iostream>

void print_from_b();
void print_from_a();
int one();

int main(){
    std::cout << "main, value is " << one() << "\n";
    print_from_a();
    print_from_b();
}
