#include<stdio.h>

int main() {
    int n;
    printf("Enter the no. of terms for fibonacci series : ");
    scanf("%d", &n);
    
    int a = 0;
    int b = 1;
    int c = 1;
    printf("%d, %d, ", a, b);
    
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }
    
    return 0;
}
output:
Enter the no. of terms for fibonacci series : 5
0, 1, 1, 2, 3, 

Enter the no. of terms for fibonacci series : 10
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 

=== Code Execution Successful ===
