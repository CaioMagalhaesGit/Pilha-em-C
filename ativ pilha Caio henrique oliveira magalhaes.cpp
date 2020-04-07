#include <stack>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

using namespace std;

void soma_pilha(stack <int> pilha){
	
	int soma;
	while(!pilha.empty()){
		
	soma+=pilha.top();
	pilha.pop();	
}	
printf("A soma dos valores eh: %d",soma);
}

void imprime_pilha(stack <int> pilha){
	printf("\nPilha:\n");
	while(!pilha.empty()){
		printf("%d \n",pilha.top());
		pilha.pop();
}
}


void pesquisa_pilha(stack <int> pilha){
	int numero;
	printf("Digite um valor a ser encontrado: \n");
	scanf("%d",&numero);
	
	while(!pilha.empty())
	{
		if(pilha.top()!=numero){
			pilha.pop();
		}
		else{
			printf("Seu numero agora esta no topo da pilha");
			imprime_pilha(pilha);
			break;
		}
	}
}




int main()
{	
	stack<int> pilha;
	int i,numero;
	
	for (i=0; i<100; i++)
	{
	numero = rand() % 100 + 1;
	pilha.push(numero);
	
	}
	
	imprime_pilha(pilha);	
	pesquisa_pilha(pilha);	
	soma_pilha(pilha);
	
	getch();

}




