#include<stdio.h>
void read(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n){
    for( int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
 void selectionsort(int a[],int n){
    int min,temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp = a[i];
        a[i]= a[min];
        a[min]=temp;
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
    selectionsort(a,n);
    display(a,n);
    return 0;
}