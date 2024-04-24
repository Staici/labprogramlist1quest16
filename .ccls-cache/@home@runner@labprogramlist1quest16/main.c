#include <stdio.h>

int main(void) {
  int hora_trabalhada;
  float salario_hora;
  float salario_bruto,salario_liquido;
  int aliquota;
  
  printf("Digite quantidade de horas trabalhadas: ");
  scanf("%d",&hora_trabalhada);
  printf("Digite o salário por hora: ");
  scanf("%f",&salario_hora);
  printf("Digite a alíquota ");
  scanf("%d",&aliquota);
  

  float horatrab = (float) hora_trabalhada;
  
  salario_bruto = horatrab * salario_hora;
  salario_liquido = salario_bruto-(salario_bruto*aliquota/100);
  printf(" Salário bruto é: %f",salario_bruto);
  printf("salário líquido é: %f",salario_liquido);
 
  return 0;
}