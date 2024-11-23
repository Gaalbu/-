#include <stdio.h>

float media(float *vetor,int n,int i,float soma){
    if (i == n){
        return soma/n;
    }
    else{
        soma += vetor[i];
        return media(vetor,n,i+1,soma);
    }
}


int main()
{
    int n;
    
    scanf("%d",&n);
    
    float vetor[n];
    
    for (int i = 0; i < n; i++){
        scanf("%f",&vetor[i]);
        getchar();
    }
    
    printf("%f",media(vetor,n-1,0,0.0)); //Inicializa a soma em 0 e índice em 0
    
    return 0;
}
