//     *
//    **
//   ***
//  ****
// *****
#include <stdio.h>
    int main(){
        int n,star,space;
        scanf("%d",&n);
        star = 1;
        space = n-1;


            for(int i = 0; i<n; i++){
                for(int k=1; k<=space;k++){
                    printf(" ");
                }
                for(int j = 1; j<=star; j++){
                    printf("*");
                }
                printf("\n");
                star ++;
                space --;
            }

    }