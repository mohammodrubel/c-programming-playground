
#include <stdio.h>

int rec(char s[], int i){
    if(s[i] == '\0'){
        return 0;
    }

    int count = rec(s, i + 1);

   if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
   s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
    count = count + 1;
}

    return count;
}

int main(){
    char s[2001];
    fgets(s, 2001, stdin);

    int totalcount = rec(s, 0);
    printf("%d", totalcount);

    return 0;
}
