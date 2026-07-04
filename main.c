#include <stdio.h>
#include  <stdbool.h>
int main(void) {
    /*
     *          *
     *         *
     *        *
     *  *    *
     *   *  *
     *     *
     */
    // Print Spaces
    for (int j = 6; j >= 0; j--) {
        printf("%*c", j, ' ');
        if (j <= 3) {
            printf("%*c", 3 - j, ' ');
            printf("*");
            printf("%*c", j * 5, ' ');
            printf("*\n");
        }
        else {
            printf("%*c", j * 5, ' ');
            printf("*\n");
        }

    }
    return 0;
}