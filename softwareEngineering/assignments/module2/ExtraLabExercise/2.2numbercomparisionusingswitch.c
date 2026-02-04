#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Switch statements hamesha yaha function body (main) ma lakhva
    switch(a >= b) {
        case 0:
            switch(b >= c) {
                case 0: largest = c; break;
                case 1: largest = b; break;
            }
            break;
        case 1:
            switch(a >= c) {
                case 0: largest = c; break;
                case 1: largest = a; break;
            }
            break;
    }

    switch(a <= b) {
        case 0:
            switch(b <= c) {
                case 0: smallest = c; break;
                case 1: smallest = b; break;
            }
            break;
        case 1:
            switch(a <= c) {
                case 0: smallest = c; break;
                case 1: smallest = a; break;
            }
            break;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
