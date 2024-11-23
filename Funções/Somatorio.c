#include <stdio.h>

int somatorio(int *vetor,int n){
    if (n == 0){
        return vetor[0];
    }
    else{
        return vetor[n] + somatorio(vetor,n-1);
    }
}


int main()
{
    int n;
    
    scanf("%d",&n);
    
    int vetor[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d",&vetor[i]);
        getchar();
    }
    
    printf("%d",somatorio(vetor,n-1)); // Vetores em c começam do 0 e vão até n-1;
    
    return 0;
}
