#include <iostream>
#include <cstdarg>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int add_nums(int count, ...) {
    int hasil = 0;
    std::va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        hasil += va_arg(args, int);
    }
    
    va_end(args);
    return hasil;
}

int main() {
    std::cout << add_nums(4, 25, 25, 50, 50) << '\n';
    _getch();
    return 0;
}