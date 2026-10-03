#include <stdio.h>

void arrayread(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void arraydisplay(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int n, int pos, int val, int capacity)
{
    if (n >= capacity)
    {
        return -1;
    }

    if (pos < 0 || pos > n)
    {
        return -1;
    }

    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = val;

    return n + 1;
}

int deletion(int arr[], int n, int pos)
{
    if (pos < 0 || pos >= n)
    {
        return -1;
    }

    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int main()
{
    int arr[199];
    int n;
    int pos;
    int val;
    int dpos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    arrayread(arr, n);

    printf("Original array: ");
    arraydisplay(arr, n);

    printf("Enter insertion position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &val);

    n = insertion(arr, n, pos, val, 199);

    if (n == -1)
    {
        printf("Insertion not possible\n");
    }
    else
    {
        printf("After insertion: ");
        arraydisplay(arr, n);
    }

    printf("Enter deletion position: ");
    scanf("%d", &dpos);

    n = deletion(arr, n, dpos);

    if (n == -1)
    {
        printf("Deletion not possible\n");
    }
    else
    {
        printf("After deletion: ");
        arraydisplay(arr, n);
    }

    return 0;
}
