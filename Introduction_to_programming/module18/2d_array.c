
// #include <stdio.h>
//     int main(){
//         int a [3][4];
//         a[1][2] = 10;
//         printf("%d\n",a[1][2]);
//     }


// 3 3 
// 1 2 3 4 5 6 7 8 9 
// #include <stdio.h>
//     int main(){
//         int r,c ;
//         scanf("%d %d",&r,&c);
//         int a[r][c];

//        scanf("%d",&a[0][0]);
//        scanf("%d",&a[0][1]);
//        scanf("%d",&a[0][2]);
//        scanf("%d",&a[1][0]);
//        scanf("%d",&a[1][1]);
//        scanf("%d",&a[1][2]);
//        scanf("%d",&a[2][0]);
//        scanf("%d",&a[2][1]);
//        scanf("%d",&a[2][2]);

//        printf("%d\n",a[0][0]);
//        printf("%d\n",a[0][1]);
//        printf("%d\n",a[0][2]);
//        printf("%d\n",a[1][0]);
//        printf("%d\n",a[1][1]);
//        printf("%d\n",a[1][2]);
//        printf("%d\n",a[2][0]);
//        printf("%d\n",a[2][1]);
//        printf("%d\n",a[2][2]);
      

//         return 0;
//     }


#include <stdio.h>
    int main(){
        int r,c ;
        scanf("%d %d",&r,&c);
        int a[r][c];

            for(int i = 0; i < r ; i++ ){
                for(int j = 0; j < c; j++){
                    scanf("%d",&a[i][j]);
                }
            }

             for(int i = 0; i < r ; i++ ){
                for(int j = 0; j < c; j++){
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }
      
      

        return 0;
    }