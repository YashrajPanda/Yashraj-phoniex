#include<stdio.h>
//       * 
//     * * * 
//   * * * * * 
// * * * * * * * 
//   * * * * * 
//     * * *
//       *
int main() {
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int A=1;A<=n;A++){
        for(int B=1;B<=A;B++){
            printf("  ");
        }
        for(int c=1;c<=2*((n-1)-A)+1;c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}