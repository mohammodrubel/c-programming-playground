#include <stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int star = 1;
        int space = n-1;
            for(int i = 1; i <= n; i++){ // for printing line 
                for(int k = 1; k <space; k++){ // for printing space 
                    printf(" ");
                }
                for(int j = 0; j<star; j++){ // for printing star
                    printf("*");
                }
                printf("\n");
                star = star + 2;
                space -- ;
            }
    }
