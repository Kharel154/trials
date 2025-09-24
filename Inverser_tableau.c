#include <stdio.h>

int main(){
    int i,n,T[1000];
    do{
        printf("Enter the size of the array \n");
        scanf("%d",&n);
    }while(n>=1000 || n<2);

    for(i=0;i<n;i++){
        printf("Enter the number at position T[%d] of the array\n",i);
        scanf("%d",&T[i]);
    }

    printf("The  array is : \n");
    for(i=0;i<n;i++){
        printf("%d, ",T[i]);
    }
    printf("\n");

    for(i=0;i<n/2;i++){
        int temp=T[i];
        T[i]=T[n-i-1];
        T[n-i-1]=temp;
    }

    printf("The reversed array is : \n");
    for(i=0;i<n;i++){
        printf("%d, ",T[i]);
    }

    return 0;
}