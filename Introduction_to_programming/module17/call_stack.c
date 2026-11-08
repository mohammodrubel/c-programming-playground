
#include <stdio.h>

    int number3 (){
        printf("all in all/n");
    }
    int number2(){
        printf("information\n");
        number3();
    }

    int number1 (){
        printf("Hello\n");
        number2();
    }
    int main(){
        printf("Hi\n");
        number1();
    }
