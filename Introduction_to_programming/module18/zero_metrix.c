#include <stdio.h>
    int main(){
        int r,c;
        scanf("%d %d",&r,&c);
        int a[r][c];

            for(int i = 0; i < r; i++){
                
                for(int j = 0; j < c; j++){
                    scanf("%d",&a[i][j]);
                }

            }
        int total_vlaue = r * c ;
        int isZero = 0;

        for(int i  = 0; i < r; i++){

            for(int j = 0; j < c ; j++){
                if(a[i][j] == 0){
                    isZero ++ ;
                }
            }
        }

        if(total_vlaue == isZero){
            printf("this is Zero Metrix");
        }else {
            printf("This is not a Zero Metrix");
        }
      

    }