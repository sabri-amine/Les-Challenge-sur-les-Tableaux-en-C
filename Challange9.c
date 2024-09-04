// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int in;
    
    printf("Entrer le nombre des elements dans le tableau :");
    scanf("%d",&in);
    
    
    int T[in];
    
    for(int i=0;i<in;i++){
        printf("Saisir un nombre :");
        scanf("%d",&T[i]);
    }
    
    for(int i=0;i<in;i++){
        printf("%d",T[i]);
    }
    
    printf("\n");
    int tmp;
    
    for(int i=0;i<in/2;i++){
            tmp = T[i];
            T[i]=T[in- i-1];
            T[in - i-1]=tmp;
    }
    
    for(int i=0;i<in;i++){
        printf("%d",T[i]);
    }

    return 0;
}