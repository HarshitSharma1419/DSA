#include<stdio.h>
void arrayread(int a[100],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void display(int a[100], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}




int main(){
    int a[100],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    arrayread(a,n);
    display(a,n);
    bubblesort(a,n);
    printf("Sorted array: ");
    display(a,n);

    return 0;}