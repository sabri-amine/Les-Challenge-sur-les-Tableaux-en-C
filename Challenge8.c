// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int T1[8]={1,2,3,4,5,6,7,8};
    
    int T2[8];
    
    printf("[");
    for(int i=0;i<8;i++){
        printf("%d\t",T1[i]);
    
    }
    printf("]\n");
    printf("[");
    for(int i=0;i<8;i++){
        T2[i]=T1[i];
        printf("%d\t",T2[i]);
        
    }
    printf("]");
    
}