#include <stdio.h> // para print()
#include<stdlib.h> // para system()
int main(){
	/*Variaveis devem ser declarada no inicio do bloco...*/
	int num1;
	int num2;
	int num3,num4;
		
	num1 = 44;
	num2 = num1 + 20;
	num3 = num1 - 20;
	num4 = num1 / 20;
	
	
	printf("\n O primeiro numero eh: %d",num1);
	printf("\n O segundo numero eh : \" num1 + 20 \"= %d  ",num2);
	printf("\n O terceiro numero eh : \" num1 - 20 \"= %d  ",num3);
	printf("\n O quarto numero eh : \" num1 / 20 \"= %d \n ",num4);
   
	system("PAUSE");
	return 0;
}
