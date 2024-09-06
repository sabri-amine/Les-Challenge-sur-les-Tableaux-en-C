// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int T[5],N,i,j,tmp;
    
    printf("le nombre le nombre N :");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("saisir le nombre de tableau %d:" ,i+1);
        scanf("%d",&T[i]);
    }
    
    for(i = 0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(T[i]>T[j]){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        }
    }
    
    for(i=0;i<N;i++){
        printf("%d",T[i]);
    }
    
}