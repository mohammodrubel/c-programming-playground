#include <stdio.h>
    int main(){
        for(int i = 1; i<=10; i++){
            if(i == 6){
                continue;
            }
            printf("%d \n",i);
        }
    }

    // #include <stdio.h>

    //     int main(){
    //         for(int i = 1; i <= 10; i++){
    //             if(i == 3 || i == 6 || i == 8){
    //                 continue;
    //             }

    //             printf("%d\n", i);
    //         }

    //         return 0;
    //     }