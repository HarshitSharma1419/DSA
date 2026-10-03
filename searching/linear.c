#include<stdio.h>
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
int linearsearch(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]== element){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[200],n,e;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    arrayread(a,n);
    printf(" The array is\n");
    arraydisplay(a,n);
    printf("Enter the element to search: ");
    scanf("%d",&e);
    int result = linearsearch(a,n,e);
    if(result == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n", result);
    }
}