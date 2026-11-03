

#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", s);

    int length = strlen(s);
    int frequently[26] = {0};

    for (int i = 0; i < length; i++)
    {
        frequently[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (frequently[i] > 0)
        {
            printf("%c - %d\n", i + 'a', frequently[i]);
        }
    }

    return 0;
}
