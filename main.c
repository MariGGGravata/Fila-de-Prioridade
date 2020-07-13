#include <stdio.h>
#include <stdlib.h>
#include "fdp.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TFilaP *f = criar();
	inserir(f, 14);
	inserir(f, 20);
	inserir(f, 2);
	inserir(f, 15);
	inserir(f, 5);
	
	exibe(f);
	
	printf("\n\n");
	printf("--------------\n");
	
	printf("Retirado:");
	printf("%d\n", extrairMax(f));
	
	printf("\n--------------\n");
	exibe(f);
	printf("\n--------------\n");
	
	
	printf("Retirado:");
	printf("%d\n", extrairMax(f));
	
	printf("\n--------------\n");
	exibe(f);
	printf("\n--------------\n");
	
	
	printf("Retirado:");
	printf("%d\n", extrairMax(f));
	
	printf("\n--------------\n");
	exibe(f);
	printf("\n--------------\n");
	
	
	printf("Retirado:");
	printf("%d\n", extrairMax(f));
	
	printf("\n--------------\n");
	exibe(f);
	printf("\n--------------\n");
	
	
	printf("Retirado:");
	printf("%d\n", extrairMax(f));
	
	exibe(f);
	
	return 0;
}


