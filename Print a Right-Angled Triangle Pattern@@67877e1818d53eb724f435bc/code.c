#include<stdio.h>
int main(){
    int n,m,j;
    printf("Enter the number of Rows : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}