/**
 * @author Ronald Tavarez
 * @brief Hacker Rank - For Loop Solution
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const char * number_to_string(int n) {
    switch (n) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default:
            return "invalid";
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", number_to_string(i));
        } else if (i > 9 && i % 2 == 0) {
            printf("even\n");
        } else if (i > 9 && i % 2 != 0) {
            printf("odd\n");
        }
    }
    return 0;
}