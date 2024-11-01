// program to check whether a +ve integer is palindrome or  not

#include <stdio.h>

int main() {
   int a,b,c,sum=0;
   printf("Enter any number to check whether it is Palindrome Number or not: ");
   scanf("%d",&c);
   a=c;
   
   
   while(a>=1){
       b=a%10;
       a=a/10;
       sum=sum*10+b;
   }
    if(sum==c){
       printf("\nEntered number is A Palindrome Number");
   }
   else{
       printf("\nEntered number is NOT a Palindrome Number");
   }
       return 0;
}
output:
Enter any number to check whether it is Palindrome Number or not: 153

Entered number is NOT a Palindrome Number
Enter any number to check whether it is Palindrome Number or not: 12121

Entered number is A Palindrome Number
