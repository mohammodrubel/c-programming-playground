
#include <stdio.h>
#include <string.h>
    int main(){
        char a[101],b[101];
        scanf("%s %s ",&a,&b);
        int length = strlen(b);
        int alength = strlen(a);
        for (int i=0;i<length; i++)
        {
            a[length] = b[i];
        }

        printf("%s",a);
        
    }