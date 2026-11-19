#include<stdio.h>
int main (){
    //Construa u  programa em C que receba duas notas de um aluno
    //e calcule a média das notas informadas
    float nota1, nota2, media;
    printf("Digite a primeira nota: \n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f",&nota2);
    media = (nota1 + nota2)/2;
    printf("A media do aluno eh: %.2f \n",media);
    return 0;
}
