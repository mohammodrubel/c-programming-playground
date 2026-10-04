
#include <stdio.h>

int main()
{
    int Taka;

    scanf("%d", &Taka);

    if (Taka >= 5000)
    {
        printf("We will go to Cox's Bazar.\n");

        if (Taka >= 10000)
        {
            printf("and also go to Saint Martin.\n");
        }
        else
        {
            printf("We will visit Cox's Bazar and then go back home.\n");
        }
    }
    else
    {
        printf("We don't have enough money, so we will not go anywhere.\n");
    }

    return 0;
}

