#include <stdio.h>
   int main (){
       int num = 143 ;
       int *ptr = &num;
        printf("Address of num = %u\n",&num);
        printf("Value of pointer = %u\n",ptr);
        printf("Address of ptr = %u\n",&ptr);
        printf("value of num = %d\n",*ptr);
        printf("value of num = %d\n",num);
        printf("value of num = %d\n",**(&ptr));
        printf("value of num = %d\n",*(&num)); //num value represents the value
        printf("value of num = %d\n",*(ptr));
        
       
       return 0;
   }

output:
Address of num = 4052853244
Value of pointer = 4052853244
Address of ptr = 4052853232
value of num = 143
value of num = 143
value of num = 143
value of num = 143
value of num = 143


=== Code Execution Successful ===
