// Problem: Find a Pair with a Given Sum
// Problem: You are given an array of N integers and a target value X. Check whether any two distinct elements in the array have a sum equal to X.

// Input:
// - First line: Integer N.
// - Second line: N array elements.
// - Third line: Target integer X.
// Output:
// - Print Yes if any two elements sum to X.
// - Otherwise, print No.
// C Code:
#include <stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int a[n];

            for(int i = 0; i<n; i++){
                scanf("%d",&a[i]);
            }
            int x;
            int flag = 0;
            scanf("%d",&x);
            for(int i = 0; i<=n-1; i++){
                for(int j=i+1;j<n;j++){
                    if(a[i] + a[j] == x){
                        flag = 1;
                        printf("Yes\n");
                    }
                }
            }
            if(flag == 0){
                printf("No\n");
            }
        return 0;
    }