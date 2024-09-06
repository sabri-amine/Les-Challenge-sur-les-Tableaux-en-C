// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int in;
    printf("Saisir le Nombre des Elemenet Dans un tableau :");
    scanf("%d",&in);
    
    int Table[in],i;
    
    for(i=0;i<=in;i++){
        printf("Saisir les nombre dans le tableaux ;");
        scanf("%d",&Table[i]);
    }
    for(i=0;i<=in;i++){
        printf("%d",Table[i]);
    }
}