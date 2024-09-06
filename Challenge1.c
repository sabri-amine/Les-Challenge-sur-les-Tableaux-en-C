// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int Table[10],i,N;
    printf("saisir la nombre pour boucler :");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("saisir la table :");
        scanf("%d",&Table[i]);
    }
    return 0;
}