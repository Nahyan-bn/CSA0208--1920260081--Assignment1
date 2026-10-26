#include <stdio.h>

/* Safe macros using full parentheses */
#define RUPEES_TO_PAISE(r) ((long)((r) * 100L))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

/* Static inline function alternative */
static inline long safe_max(long a, long b) {
    return (a > b) ? a : b;
}

int main(void)
{
    int a = 5;
    printf("SQUARE(a + 1) = %d\n", SQUARE(a + 1));

    int x = 10, y = 20;
    printf("MAX(x, y) = %d\n", MAX(x, y));

    long i = 15, j = 8;
    printf("safe_max(i, j) = %ld\n", safe_max(i, j));

    return 0;
}