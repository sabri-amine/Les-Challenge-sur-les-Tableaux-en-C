3)

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int in;
    
    printf("Les nombre Des Element Un Table :");
    scanf("%d",&in);
    int T[in],i,s=0;
    
    
    for(i=0;i<in;i++){
        printf("Sairir Les nombre de table :");
        scanf("%d",&T[i]);
    }
    
    for(i=0;i<in;i++){
        s=s+i;
    }
    printf(" La somme de cette tableau :%d",s);
}