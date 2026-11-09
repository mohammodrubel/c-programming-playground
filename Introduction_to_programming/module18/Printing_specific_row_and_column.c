// 3 3 row 3 column
// 1 2 3 
// 4 5 6
// 7 8 9
// 2 row index 2 print korte hobe



// #include <stdio.h>
//     int main(){
//         int r,c;
//         scanf("%d %d",&r,&c);
//         int a[r][c];

//             for(int i = 0; i<r; i++){
//                 for(int j = 0; j<c;j++){
//                     scanf("%d",&a[i][j]);
//                 }
//             }
//             int spacificRow;
//             scanf("%d",&spacificRow);

//             for(int i = 0; i<c; i++){
//                 printf("%d ",a[spacificRow][i]);
//             }
//     }


// 3 3 row 3 column
// 1 2 3 
// 4 5 6
// 7 8 9
// 2 number  column index 2 print korte hobe
// output 3 6 9



#include <stdio.h>
    int main(){
        int r,c;
        scanf("%d %d",&r,&c);
        int a[r][c];

            for(int i = 0; i<r; i++){
                for(int j = 0; j<c;j++){
                    scanf("%d",&a[i][j]);
                }
            }
            int spacificRow;
            scanf("%d",&spacificRow);

            for(int i = 0; i<r; i++){
                printf("%d ",a[i][spacificRow]);
            }
    }



