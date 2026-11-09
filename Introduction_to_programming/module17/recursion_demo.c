// Normal way 
#include <stdio.h>

    void hello (int i){
        if(i == 6){
            return;
        }
        hello(i  + 1);
        printf("%d \n",i);
    }

    int main(){
        int i = 1;
        hello(i);
        return 0;
    }

    // Reverse Way 

    #include <stdio.h>

    void hello (int i){
        if(i == 6){
            return;
        }
        printf("%d \n",i);
        hello(i  + 1);
        
    }

    int main(){
        int i = 1;
        hello(i);
        return 0;
    }
