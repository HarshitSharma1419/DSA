#include <stdio.h>
void read(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int partition(int a[],int low, int high)
{
    int pivot=a[low],temp;
    int i=low+1;
    int j=high;
    do{
        while(i<=high && a[i]<pivot){
            i++;
        }
        while(j>=low && a[j]>pivot){
            j--;
        }
        if( i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    temp= a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void quicksort(int a[], int low, int high)
{
    int index;
    if (low<high) // element nahi hai to ruk jayo
    {
        index = partition(a, low, high);
        quicksort(a, low, index - 1);
        quicksort(a,index + 1, high);
    }
}
int main()
{
    int a[100], n;
    printf("Enter the no of elements:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    read(a, n);
    printf("The array is:\n");
    display(a, n);
    printf("Array after the sorting:\n");
    quicksort(a, 0, n - 1);
    display(a, n);
    return 0;
}