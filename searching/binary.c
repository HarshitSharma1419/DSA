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
sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int binarysearch(int arr[],int n, int element){
    int low = 0;
    int high = n-1;
    while (low <=high){
        int mid = (high+low)/2;
        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid]<element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
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
    sort(a,n);
    printf("Enter the element to be searched: ");
    scanf("%d",&e);
    int result = binarysearch(a,n,e);
    if(result == -1){
        printf("Element %d not found\n", e);
    }
    else{
        printf("Element %d found at index %d\n", e, result);
    }
}