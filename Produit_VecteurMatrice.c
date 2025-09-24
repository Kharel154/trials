#include <stdio.h>

int main(){
    int m,n,j,i,T[100][100],V[100],R[100];
    do{
        printf("Enter the number of lines of the matrice\n");
        scanf("%d",&m);
        printf("Enter the number of column of the matrice\n");
        scanf("%d",&n);
    }while (n>100 || m>100 || n<2 || m<2);

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf("Enter the number at position T[%d][%d]\n",i,j);
            scanf("%d",&T[i][j]);
        }
    }
    
    printf("The size of the vector is %dx1 \n",n);
    for(i=1;i<=n;i++){
        printf("Enter the number at position V[%d]\n",i);
        scanf("%d",&V[i]);
    }

    for(i=1;i<=m;i++){
        R[i]=0;
        for(j=1;j<=n;j++){
            R[i]+=T[i][j]*V[j];
        }
    }

    printf("The product of the vector and the matrice gives the vector : \n");
    for(i=1;i<=m;i++){
        printf("%d, ",R[i]);
    }

    return 0;
}