#include<stdio.h>
int main(){
    int i,j;
    int a[10][10],transpose[10][10],r,c;
    printf("Enter R,C:");
    scanf("%d%d",&r,&c);
    printf("\nEnter Elements:");
    for (i=0;i<r;i++)
    for (j=0;j<c;j++){
        printf("Enter Element A%d%d",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("Enterd Matrix\n");
    for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
	printf("\n");
	}
    //transpose
    for (i=0;i<r;i++)
    for (j=0;j<c;j++){
        transpose[j][i]=a[i][j];
    }
    printf("Transpose of Matrix\n");
    for (i=0;i<c;i++)
    for (j=0;j<r;j++){
        printf("%d ",transpose[i][j]);
        if (j==r-1){
        printf("\n");
        }
    }
}
