/**
 * @author Ronald Tavarez
 * @brief Hacker Rank - Sum of digits of a five digit number solution
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void update(int * n, int * sum) {
    *sum += (*n % 10);
    *n /= 10;
}

int main() {
	
    int n = 0, sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while (n != 0)
        update(&n, &sum);
    printf("%d\n", sum);
    return 0;
}