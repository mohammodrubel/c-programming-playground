#include <stdio.h>

    int fun (int a[]){
        a[1] = 100;
    }

    int main (){
        int a[5] = {10,20,30,40,50};
        
        fun(a);
        for(int i = 0; i < 5; i++){
            printf("%d\n",a[i]);
        }
        return 0;
    }

    //5.30