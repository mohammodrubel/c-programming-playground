
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

    int flag = 100;

    if(r == c) {

        for(int i = 0; i < r; i++){

            for(int j = 0; j < c; j++){

                if(i != j){
                    if(a[i][j] != 0){
                        flag = 200;
                    }
                }

            }

        }

        if(flag == 100){
            printf("This is a primary diagonal matrix");
        }else{
            printf("This is not a primary diagonal matrix");
        }

    }else{
        printf("This is not a diagonal matrix\n");
    }

    return 0;
}
