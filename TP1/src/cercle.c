#include <stdio.h>

int main() {
    float rayon = 5.0;
    float pi = 3.14159;

    float aire = pi * rayon * rayon;
    float perimetre = 2 * pi * rayon;

    printf("Rayon : %.2f\n", rayon);
    printf("Aire : %.2f\n", aire);
    printf("Perimetre : %.2f\n", perimetre);

    return 0;
}
