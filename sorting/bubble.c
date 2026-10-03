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
void bubblesort(int a[100], int n){
    for(int i=0;i<n-1;i++){
         int count=1;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count =0;
            }
        }
        if(count == 1){
            break;
        }
    }
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
