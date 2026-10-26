// একটা এরে থেকে একটা ইন্ডেক্স রিমুভ করতে হবে ।
// লাইক
// [10 20 30 40 50]
// user index dibe jemon
// 2
// [10 20 40 50]

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int index;
    scanf("%d", &index);

    for (int i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
