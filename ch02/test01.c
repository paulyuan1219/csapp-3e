#include <stdio.h>

void func_page_52() {
    int x = -1;
    unsigned u = 2147483648; /* 2 to the 31st*/

    printf("x = %u = %d\n", x, x);
    printf("u = %u = %d\n", u, u);
}

void func_test_unsigned() {
    unsigned x = 0;
    printf("x = %u\n", x);
    printf("x-1 = %u\n", x-1);

    unsigned a = 1;
    unsigned b = 2;

    printf(" a-b = %u\n", a - b);
    printf(" b-a = %u\n", b - a);


}

void main() {
    func_test_unsigned();
}