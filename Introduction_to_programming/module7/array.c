

#include<stdio.h>
    int main(){
        int arr[10];
        int myValue= arr[1]=10;
        arr[3]=100;
        printf("%d",myValue);
        printf("%d",arr[3]);
        printf(arr);
        return 0;
    }