#include <stdio.h>

int existeA(char frase[50]){
    int cont =0;
    int i=0;
    while(frase[i] != '\0'){
        if(frase[i]== 'a' || frase[i]== 'A'){
            cont++;
        }
        i++;
    }
    return cont;
}

int main()
{
    char frase[50];
    printf("Digite uma frase:");
    fgets(frase, sizeof(frase), stdin);
    printf("A frase tem %d letras 'a' ", existeA(frase));
}