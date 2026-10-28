// Question:
// Given two strings A and B, compare them lexicographically.
// Print "Strings are equal" if both strings are equal.
// Print "String A is smaller than String B" if A is lexicographically smaller than B.
// Print "String B is smaller than String A" if B is lexicographically smaller than A.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
    int main(){
        char a[101],b[101];
        scanf("%s %s",&a,&b);
        
        int i=0;
        while(true){
            if(a[i] == '\0' && b[i] == '\0'){
                printf("they are equal");
                break;
            }else if(a[i] == '\0'){
                printf("a is smaller");
                break;
            }else if(b[i] == '\0'){
                printf("b is smaller");
                break;
            }else if(a[i] < b[i]){
                printf("a is smaller");
                break;
            }else if(a[i] > b[i]){
                printf("b is smaller");
                break;
            }else if(a[i] == b[i]){
                i++;
            }
        }


        return 0;
    }