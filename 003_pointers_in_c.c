/**
 * @author Ronald Tavarez
 * @brief Hacker Rank - Pointers in C solution
 */

#include <stdio.h>
#include <stdlib.h>

void update(int * a, int * b);

int main() {
    int a, b;
    int * pa = &a, * pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d %d", a, b);
    return 0;
}

void update(int * a, int * b) {
    int buffer = *a;
    *a = (*a + *b);
    *b = abs(buffer - *b);
}
