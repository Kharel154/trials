#include <stdio.h>

int main(){
    
    int i,u[3],v[3],uv[3];
    
    for(i=0;i<3;i++){
        printf("Enter the number at position u[%d] : ",i+1);
        scanf("%d",&u[i]);
    }

    for(i=0;i<3;i++){
        printf("Enter the number at position v[%d] : ",i+1);
        scanf("%d",&v[i]);
    }

    uv[0]=u[1]*v[2]-u[2]*v[1];
    uv[1]=u[2]*v[0]-u[0]*v[2];
    uv[2]=u[0]*v[1]-u[1]*v[0];

    printf("uxv=(%d, %d, %d )\n",uv[0],uv[1],uv[2]); 

    return 0;
    
}