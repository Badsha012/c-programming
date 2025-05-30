#include<stdio.h>
int main(){
    int a[5][5],b[5][5],result[5][5];
    int i,j,r,c;
    printf("Enter No of Rows:");
    scanf("%d",&r);
    printf("Enter No of  Column:");
    scanf("%d",&c);
    printf("Enter A matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter B matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Result:\n");
    for(i=0;i<r;i++){ 
        for(j=0;j<c;j++){
        int t=0,k;
        for(k=0;k<c;k++){
            t+=(a[k][i]*a[k][j]);

        }
        result[i][j]=t;
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",result[i][j]);

        }
        printf("\n");
    }
    
}