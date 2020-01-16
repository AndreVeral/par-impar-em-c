#include <stdio.h>
#include <locale.h>

int main() {
    int numero;
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Digite um número inteiro\n");
    scanf("%d", &numero);
    if(numero % 2 == 0){
        wprintf(L"O número %d é par", numero);
    }else{
        wprintf(L"O número %d é ímpar", numero);
    }
    return 0;
}