#include<stdio.h>
void read(int arr[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
 void insertionsort(int a[], int n){
     int key,j;
    for( int i=1;i<=n-1;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]> key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main(){
    int a[100],n;
    printf("Enter the no of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    read(a,n);
    printf("The array is:\n");
    display(a,n);
    printf("Array after the sorting:\n");
    insertionsort(a,n);
    display(a,n);
    return 0;
}