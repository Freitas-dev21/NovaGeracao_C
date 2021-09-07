#include <stdio.h> // para print()
#include<stdlib.h> // para system()
int main(){
	/*Variaveis devem ser declarada no inicio do bloco...*/
	int num1;
	int num2;
	
	num1 = 44;
	num2 = num1 + 20;
	
	printf("\n O primeiro numero eh: %d",num1);
	printf("\n O segundo numero eh : \" num1 + 20 \"= %d \n ",num2);
	system("PAUSE");
	return 0;
}
