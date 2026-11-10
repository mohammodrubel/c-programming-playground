
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Row Matrix
    if (r == 1) {
        printf("This is Row Matrix\n");
    } else {
        printf("This is not a Row Matrix\n");
    }

    // Column Matrix
    if (c == 1) {
        printf("This is Column Matrix\n");
    } else {
        printf("This is not a Column Matrix\n");
    }

    // Square Matrix
    if (r == c) {
        printf("This is Square Matrix\n");
    } else {
        printf("This is not a Square Matrix\n");
    }

    return 0;
}
