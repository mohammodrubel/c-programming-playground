// input 
//     [10 20 30 40 50]
// output 
//     [50 40 30 20 10]

#include<stdio.h>
    int main(){
        int n ;
        scanf("%d",&n);
        int a[n];
            for(int i = 0; i<n; i++){
                scanf("%d",&a[i]);
            }
        int i  = 0;
        int j = n-1;

        while (i < j)
        {
            int temporary = a[i];
            a[i] = a[j];
            a[j] = temporary;
            i++;
            j--;
        }
        for(int i = 0; i<n;i++){
            printf("%d ",a[i]);
        }
        return 0;
    }


