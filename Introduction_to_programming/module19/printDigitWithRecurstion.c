#include <stdio.h>

    void digits(int n){
        if(n == 0){
            return;
        }
         digits(n/10);
        int lastDegit = n % 10;
        
        printf("%d ",lastDegit);
    }

    int main(){
        int t;
        scanf("%d",&t);
            for(int i = 0; i<t; i++){
                int n;
                scanf("%d",&n);
                if(n == 0){
                    printf("0");
                }
                digits(n);
                printf("\n");
            }
        
      

        return 0;
    }