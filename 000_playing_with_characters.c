/**
 * @author Ronald Tavarez
 * @brief Hacker Rank - Playing With Characters solution.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch = '\0';
    char s [100];
    char sen [100];
    
    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}