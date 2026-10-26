


// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int myArray[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &myArray[i]);
//     }

//     for (int i = 0; i < n; i++) {
//         if (myArray[i] > 0) {
//             myArray[i] = 1;
//         } else if (myArray[i] < 0) {
//             myArray[i] = 2;
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ", myArray[i]);
//     }

//     printf("\n");

//     return 0;
// }



#include<stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int myArray[n];

        for( int i = 0; i<n; i++){
            scanf("%d",&myArray[i]);
        }

        for(int i = 0; i<n; i++){
            if(myArray[i] > 0){
                myArray[i] = 1;
            }else if(myArray[i] < 0){
                myArray[i] = 2;
            }
        }

        for(int i = 0; i<n; i++){
            printf("%d ",myArray[i]);
        }

        return 0;
    }