#include <stdio.h>

  // void dizerBomdia (char nome[20]){
  //   printf("Bom dia! %s\n", nome);
  // }

  // int main(void){
  //   dizerBomdia("Gabriel");
  //   dizerBomdia("Teixeira");
  //   dizerBomdia("Xandao protetor da terra");

  // void dizerBoatarde (char nome[20]){
  //   printf("Boa tarde %s!\n", nome);
  // }

  // int main(void){
  //   char nome[20];
  //   printf("Digite seu nome: ");
  //   scanf("%s", nome);
  //   dizerBoatarde(nome);
  //   return 0;
  // }

  int soma(int a, int b){
    int resultado = a + b;
    return resultado;
  }

  int main(void){
    int num1 = 6, num2 = 4, result;
    result = soma(num1, num2);
    
    printf("%d", result);
  }