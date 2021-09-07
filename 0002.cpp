#include <stdio.h> // para print()
#include<stdlib.h> // para system()
int main(){
	/*Mostar inicialização de variaveis...*/
	int evento = 5;
	char corrida = 'C';
	float tempo =27.25;
	
	printf("O tempo vitorioso na eliminacao %c\n",corrida);
	printf("da competicao %d foi %f.",evento ,tempo);
	system("PAUSE");
	return 0;
}
