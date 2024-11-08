   #include <stdio.h>
   int main (){
       int num = 5000;
       int *ptr = &num;
       printf("Address of num = %u\n",&num);
       printf("Value of pointer = %u\n",ptr);
       return 0;
   }

output:

Address of num = 1854458084
Value of pointer = 1854458084

Address of num = 11167828
Value of pointer = 11167828
