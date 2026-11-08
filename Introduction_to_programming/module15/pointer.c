
#include <stdio.h>
    int main(){
        int x = 10;
        printf("%d \n",x);
        // printf("%p \n",&x);
        int * ptr;
        ptr = &x;
        *ptr = 200;
        // printf("%p\n",ptr);
        // printf("%p\n",&ptr);
         printf("%d\n",*ptr);
    }

    //output
    // 10 
    // 0x7ffff3c1fbdc 
    // 0x7ffff3c1fbe0