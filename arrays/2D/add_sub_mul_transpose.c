#include<stdio.h>
int array2dread(int a[100][100],int m, int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    return 0;
}
int array2dprint(int a[100][100],int m, int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int add(int a[100][100],int b[100][100],int c[100][100],int m, int n,int p,int q){
    if(n!=p || m!=q){
        printf("The two matrices are not of same order, addition is not possible\n");
        return -1;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    return 0;
}
int sub(int a[100][100],int b[100][100],int c[100][100],int m, int n,int p,int q){
    if(n!=p || m!=q){
        printf("The two matrices are not of same order, subtraction is not possible\n");
        return -1;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    return 0;
}
int mul(int a[100][100],int b[100][100],int c[100][100],int m, int n,int p,int q){
    if(n!=p){
        printf("The two matrices are not compatible for multiplication\n");
        return -1;
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=q;j++){
            c[i][j]=0;
            for(int k=0;k<=n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return 0;
}
int transpose(int a[100][100],int m, int n){
    for (int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main(){
    int a[100][100],b[100][100],c[100][100];
    int m,n,p,q;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d",&m,&n);
    array2dread(a,m,n);
    printf("The first matrix is: \n");
    array2dprint(a,m,n);
    scanf("%d %d",&p,&q);
    array2dread(b,p,q);
    printf("The second matrix is: \n"); 
    array2dprint(b,p,q);
    add(a,b,c,m,n,p,q);
    printf("The addition of two matrices is: \n");
    array2dprint(c,m,n);
    sub(a,b,c,m,n,p,q);
    printf("The subtraction of two matrices is: \n");
    array2dprint(c,m,n);
    mul(a,b,c,m,n,p,q);
    printf("The multiplication of two matrices is: \n");
    array2dprint(c,m,n);
    transpose(a,m,n);
    printf("The transpose of the first matrix is: \n");
}