#include<stdio.h>
int main(){
    int m,n;
    int **arr1,**arr2;
    printf("Matrix-1:\n");
    printf("Enter the numbers of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    arr1=malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        arr1[i]=malloc(n*sizeof(int));
    }
    printf("Enter the elements: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    arr2=malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        arr2[i]=malloc(n*sizeof(int));
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr2[i][j]=arr1[j][i];
        }
    }

    printf("________________________\n");
    printf("Resultant Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}

