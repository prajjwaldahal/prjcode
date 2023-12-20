#include<stdio.h>
int main(){
    int n;
    printf(" Enter a Limit Number : ");
    scanf("%d",&n);

    
    for(int i=0 ; i<=n ; i++){
        printf("\n\n");
        printf("Table of %d : ",i);
        printf("\n");
        for(int j=1;j<=100;j++){
            printf("\n%d x %d = %d",i,j,i*j);
        }
    }
    printf("\n");
return 0;
}
