
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int in;
    
    printf("Donner le nembre de elements de cette table :");
    scanf("%d",&in);
    
    int T[in];
    
    for(int i=0;i<in;i++){
        printf("saisir les nombre dans le tableau %d:",i+1);
        scanf("%d",&T[i]);
    }
    
    int f=2;
    
    for(int i=0;i<in;i++){
        T[i]=T[i]*f;
    }
    printf("[");
    for(int i = 0;i<in;i++){
        printf("%d",T[i]);
    }
    printf("]");
}