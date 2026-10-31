// 1
// 12
// 123
// 1234
// 12345

//          1 
//         1 2 
//        1 2 3 
//       1 2 3 4 
//      1 2 3 4 5 
//     1 2 3 4 5 6 
//    1 2 3 4 5 6 7 
//   1 2 3 4 5 6 7 8 
//  1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 9 10 

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= value; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        value++;
        space--;
    }
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= value; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        value++;
        space--;
    }
}