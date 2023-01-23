#include <stdio.h>
#include <stdlib.h>
int power(int num)
{
    if (num == 0)
        return 0;
    while (num != 1)
    {
        if (num % 2 != 0)
            return 0;
        num = num / 2;
    }
    return 1;
}
int main()
{
    int size;
    char dir;
    printf("Enter the size:\n");
    scanf("%d", &size);
    int *arr, num;
    arr = malloc(size * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }
    printf("Enter num..\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf(" %c", &dir);
        if (dir == 'd' || dir == 'D')
        {
            for (int i = 0; i < size - 1; i++)
            {
                if ((arr[i] == arr[i + 1]) && power(arr[i]))
                {
                    size -= 1;
                    arr[i] = arr[i] + arr[i + 1];
                    for(int j=i+1;j<size;j++){
                        arr[j] = arr[j+1];
                    }
                }
            }
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
        }
        else if (dir == 'a' || dir == 'A')
        {
            for (int i = size - 1; i > 0; i--)
            {
                if ((arr[i] == arr[i - 1]) && power(arr[i]))
                {
                    size -= 1;
                    arr[i-1] = arr[i] + arr[i-1];
                    for(int k=i;k<size;k++){
                        arr[k] = arr[k+1];
                    }
                }
            }
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    printf("\nAfter operation:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}