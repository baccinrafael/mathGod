#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int operacoesBasicas(int vezes) {
    int acertos = 0; 
    for (int i=0;i<vezes;i++){
	float n1 = rand() % 500;
	float n2 = 0; 
	float resultado = 0;
	float resposta = 0;
	int op = rand() % 4 + 1;
	printf("Quanto é %.f", n1);
	switch (op) {
	    case 1:
		printf("+");
		n2 = rand() % 1000 + 1;
		resultado = n1 + n2;
		break;
	    case 2:
		printf("-");
		n2 = rand() % 1000 + 1;
		resultado = n1 - n2;
		break;
	    case 3:
		printf("*");	
		n2 = rand() % 10 + 1;
		resultado = n1 * n2;
		break;
	   case 4:
		printf("/");	
		n2 = rand() % 6 + 1;
		switch ((int)n2) {
		    case 1:
			n2 = 5;
			break;
		    case 2:
			n2 = 2;
			break;
		    case 3:
			n2 = 3;
			break;
		    case 4:
			n2 = 10;
			break;
		    case 5:
			n2 = 100;
			break;
		    case 6:
			n2 = 4;
			break;
		}
		resultado = n1 / n2;
		break;
	}
	printf("%.f?\n", n2);
	scanf("%f", &resposta);
	if (resposta == resultado) {
	    printf("Acertou!\n\n");
	    acertos++;
	} else {

	    printf("\nErrou! O resultado é %.3f\n\n", resultado);
	}
    }
    return acertos;
}

int main(){
    srand(time(NULL));
    char isPlaying = 'y';
    while (isPlaying == 'y'){
	int escolha;
	int vezes;
	int acertos;
	printf("O que você quer treinar?\n");
	printf("1 - Operações Básicas\n");
	printf("2 - Porcentagem\n");
	printf("3 - Contas Aleatórias\n");
	printf("4 - Sair\n");
	scanf("%d", &escolha);
	printf("Quantas Vezes? ");
	scanf("%d", &vezes);

	switch (escolha){
	    case 1:
		acertos = operacoesBasicas(vezes);
		break;
	    case 2:
		break;
	    case 3:
		break;
	    case 4:
		isPlaying = 'n';
		break;
	}
	printf("Você acertou %d de %d vezes\n", acertos, vezes);
	isPlaying = 'n';
    }
    return 1;
}
