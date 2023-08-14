/**
 * @author Ronald Tavarez
 * @brief Hacker Rank - Bitwise Operators Solution
 */
#include <stdio.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k);

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}

void calculate_the_maximum(int n , int k) {
    int maximum_and = 0, maximum_or = 0, maximum_xor = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int and_result = 0, or_result = 0, xor_result = 0;

            // AND
            and_result = a & b;
            if (and_result > maximum_and && and_result < k)
                maximum_and = and_result;
            
            // OR
            or_result = a | b;
            if (or_result > maximum_or && or_result < k)
                maximum_or = or_result;

            // XOR
            xor_result = a ^ b;
            if (xor_result > maximum_xor && xor_result < k)
                maximum_xor = xor_result;
        }
    }

    printf("%d\n", maximum_and);
    printf("%d\n", maximum_or);
    printf("%d\n", maximum_xor);
}