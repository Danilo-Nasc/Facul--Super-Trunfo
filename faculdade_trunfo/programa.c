#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");



    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite o nome do aluno: \n");
    scanf("%s", nome);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua matricula: \n");
    scanf("%d", &matricula);

    printf("Seu nome é: %s - Matricula: %d\n", nome, matricula);
    printf("Sua altura é: %.2f , e voce tem: %d anos.", altura, idade);





    return 0;
}
