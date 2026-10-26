
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int myArray[n];
    int findingValue;
    int found = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &myArray[i]);
    }

    scanf("%d", &findingValue);

    for (int i = 0; i < n; i++) {
        if (myArray[i] == findingValue) {
            printf("%d", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("-1");
    }

    return 0;
}


