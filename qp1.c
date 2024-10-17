#include <stdio.h>

void fibonacci(int n){
    int sequenciaFibo[n];
    sequenciaFibo[0] = 0;
    sequenciaFibo[1] = 1;
    
    if(n==0 || n==1){
        printf("O número está na sequência de Fibonacci");
        return;
    }
    
    int i=2;
    while(i<n){
        sequenciaFibo[i] = sequenciaFibo[i-1] + sequenciaFibo[i-2];
        if(n==sequenciaFibo[i]){
            printf("O número está na sequência de Fibonacci");
            return;
        }
        i++;
    }
    
    printf("O número não está na sequência de Fibonacci");
    
}

int main()
{
    int n;
    printf("Digite o número que você deseja conferir se existe na sequência de Fibonacci:");
    scanf("%d", &n);
    fibonacci(n);
    
    return 0;
}