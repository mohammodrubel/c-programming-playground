
// #include <stdio.h>

// int addition (int a,int b){
//     int ans = a + b;
//     return ans; 
// }
// int sub (int a,int b){
//     int ans = a - b;
//     return ans; 
// }

// int multiple (int a,int b){
//     int ans = a * b;
//     return ans; 
// }

// int devide (int a,int b){
//     int ans = a / b;
//     return ans; 
// }


// int main(){
//     int value1 = addition(10,5);
//     int value2 = sub(5,10);
//     int value3 = multiple(10,5);
//     int value4 = devide(10,5);
//     printf("%d %d %d %d ",value1,value2,value3,value4);
//     return 0;
// }

#include <stdio.h>

int addition (int a,int b){
    int ans = a + b;
    return ans; 
}
int sub (int a,int b){
    int ans = a - b;
    return ans; 
}

int multiple (int a,int b){
    int ans = a * b;
    return ans; 
}

int devide (int a,int b){
    int ans = a / b;
    return ans; 
}


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int value1 = addition(a,b);
    int value2 = sub(a,b);
    int value3 = multiple(a,b);
    int value4 = devide(a,b);
    printf("%d %d %d %d ",value1,value2,value3,value4);
    return 0;
}