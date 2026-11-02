#include <stdio.h>
    int sum(){

        int a ;
        int b ;
        scanf("%d %d",&a,&b);
        int ans = a + b ;
        return ans;
    }

    int main(){
        int total = sum();
        printf("%d",total);
        return 0;
    }
