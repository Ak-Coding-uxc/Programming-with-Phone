#include <stdio.h>

int main() {
    int n, ctr;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf("Multiplication table of %d:\n", n);
    ctr = 1;
    multiplication_table:
    if (ctr <= 10) {
        printf("%d x %d = %d\n", n, ctr, n * ctr);
        ctr = ctr + 1; 
        goto multiplication_table;
    }
    
    return 0;
}