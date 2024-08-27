#include <stdio.h>
#include <stdarg.h>

void dynamic(int s, ...) {
    va_list args;
    va_start(args, s);

    printf("%d ", s);
    for (int i = 1; i < s; i++) {
        int val = va_arg(args, int);
        printf("%d ", val);
    }
    
    va_end(args);
    printf("\n");
}

int main() {
    dynamic(4, 2, 4, 6, 8); // prints 2 4 6 8
    dynamic(3, 3, 6, 9);    // prints 3 6 9
    return 0;
}
