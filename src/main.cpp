#include <iostream>

int add(int a, int b);
int sub(int c, int d);

int main(){
    std::cout << add(2, 3) << std::endl;
    std::cout << sub(10, 2) << std::endl;
    std::cout << mul(2, 5) << std::endl;
    std::cout << div(12, 6) << std::endl;
}