 #include <stdio.h>
   int main (){
       int num = 143 ;
       int *ptr = &num;
       int **ptr1 = &ptr;
        printf("Address of num = %u\n",&num);
        printf("Value of pointer = %u\n",ptr);
        printf("Address of ptr = %u\n",&ptr);
        printf("value of num = %d\n",*ptr);
        printf("value of num = %d\n",num);
        printf("value of num = %d\n",**(&ptr));
        printf("value of num = %d\n",*(&num)); //num value represents the value
        printf("value of num = %d\n",*(ptr));
        
        
        printf("Address of num = %u\n",&ptr);
        printf("Value of pointer = %u\n",ptr1);
        printf("Address of ptr = %u\n",&ptr1);
        printf("value of num = %u\n",*ptr1);
        printf("value of num = %d\n",**ptr1);
        printf("value of num = %d\n",***(&ptr1));
       return 0;
   }

output:

Address of num = 3381656348
Value of pointer = 3381656348
Address of ptr = 3381656336
value of num = 143
value of num = 143
value of num = 143
value of num = 143
value of num = 143
Address of num = 3381656336
Value of pointer = 3381656336
Address of ptr = 3381656328
value of num = 3381656348
value of num = 143
value of num = 143


=== Code Execution Successful ===
