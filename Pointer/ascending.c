#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter the number");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", a + i); // &a[i] ra a+i same ho
    }
    for (int i = 0; i < 5; i++) // yo loop le 5 otai lai check garna lagauxa
    {
        for (int j = i + 1; j < 5; j++)
        // Yo loop le chai a[0] le a[5] samma smaller check garxa

        {
            if (*(a + i) > *(a + j))
            {
                int temp = *(a + i); // temp ma *(a+i) ko value store hunxa
                *(a + i) = *(a + j); // *(a+i) vaneko chai a+i vitra Fko value ho
                *(a + j) = temp;
            }
        }
    }
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", *(a + k));
    }

    return 0;
}