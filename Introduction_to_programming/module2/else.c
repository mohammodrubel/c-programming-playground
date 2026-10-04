#include <stdio.h>

int main()
{
    int Taka;

    scanf("%d", &Taka);

    if (Taka >= 100)
    {
        printf("We will eat a burger.\n");
    }
    else if (Taka >= 50)
    {
        printf("We will eat fuchka.\n");
    }
    else if (Taka >= 20)
    {
        printf("We will eat chocolate.\n");
    }
    else
    {
        printf("We will eat nothing.\n");
    }

    return 0;
}

