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
int merge(int Aarr[], int n, int Barr[], int m, int Carr[]){
    int n;int m;
    scanf("%d",&n);
    int Aarr[100];
    printf("Enter the elements of the  A array:\n");
    arrayread(Aarr,n);
    printf("The A array is:\n");
    arraydisplay(Aarr,n);
    scanf("%d",&m); int Barr[100];
    printf("Enter the elements of the B array:\n");
    arrayread(Barr,m);
    printf("The B array is:\n");
    arraydisplay(Barr,m);
    printf("The merged array is:\n");
    int Carr[200];
    int k = 0;
    for(int i=0;i<n;i++){
        Carr[i]=Aarr[i];
    }
    for(int j=0;j<m;j++){
        Carr[j+n]=Barr[j];
    }
    arraydisplay(Carr,n+m);
    return 0;
}
int main()
{
    int Aarr[100], Barr[100], Carr[200];
    int n, m;
    merge(Aarr, n, Barr, m, Carr);
    return 0;
}