
// #include <stdio.h>
//     int main(){
//         int n;
//         scanf("%d",&n);

//             for(int i =1; i<=n; i++){ // for printing line
//                 for(int j =1; j<=i; j++){// for printing line
//                     printf("*"); 
//                 }
//                 printf("\n");
//             }
//     }
    // #include <stdio.h>
    // int main(){
    //     int n,star=1;
    //     scanf("%d",&n);

    //         for(int i =1; i<=n; i++){ // for printing line
    //             for(int j =1; j<=star; j++){// for printing line
    //                 printf("*"); 
    //             }
    //             printf("\n");
    //             star++;
    //         }
    // }
    // #include <stdio.h>
    //     int main(){
    //         int n,star=1;
    //         scanf("%d",&n);
    //             for(int i = 1; i<=n;i++){
    //                 for(int j  = 1; j<=star;j++){
    //                     printf("*");
    //                 }
    //                 printf("\n");
    //                 star++;
    //             }
    //     }

    #include <stdio.h>
        int main(){
            int n,star;
           
            scanf("%d",&n);
             star = n;
                for(int i =1; i<=n; i++){
                    for(int j = 1; j<=star;j++){
                        printf("*");
                    }
                    printf("\n");
                    star -- ;
                }
        }