#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 10;

    short s = -100;
    signed short ss = -200;
    unsigned short us = 200;

    int i = -1000;
    signed int si = -2000;
    unsigned int ui = 2000;

    long int l = -10000;
    signed long int sl = -20000;
    unsigned long int ul = 20000;

    long long int ll = -100000;
    signed long long int sll = -200000;
    unsigned long long int ull = 200000;

    float f = 3.14f;
    double d = 3.14159;
    long double ld = 3.1415926535L;

    printf("char : %c\n", c);
    printf("signed char : %hhd\n", sc);
    printf("unsigned char : %hhu\n", uc);

    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", l);
    printf("signed long int : %ld\n", sl);
    printf("unsigned long int : %lu\n", ul);

    printf("long long int : %lld\n", ll);
    printf("signed long long int : %lld\n", sll);
    printf("unsigned long long int : %llu\n", ull);

    printf("float : %.2f\n", f);
    printf("double : %.5f\n", d);
    printf("long double : %.10Lf\n", ld);

    return 0;
}
