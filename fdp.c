#include "fdp.h"

const int tam = 10;

struct FilaP{
	
	int vetor[11];
	int qtd;
	
};

TFilaP *criar(){
	
	TFilaP* filap = (TFilaP*)malloc(sizeof(TFilaP));
	filap->qtd = 0;
	
	return filap;
	
}

void corrigirSubindo(TFilaP *filap){
	
	int i = filap->qtd;
	while(i >= 2 && filap->vetor[i/2] < filap->vetor[i]){
		int temp = filap->vetor[i/2];
		filap->vetor[i/2] = filap->vetor[i];
		filap->vetor[i] = temp;
		i = i/2;
		
	}
	
}

void inserir(TFilaP *f, int v){
	
	if (f->qtd < tam){
		f->qtd = f->qtd + 1;
		f->vetor[f->qtd] = v;
		corrigirSubindo(f);
		
	}
}

void corrigirDescendo(TFilaP *filap){
	
	int j = 1;
	while(2 * j <= filap->qtd){
		
		int f = 2 * j;
		
		if(f < filap->qtd && filap->vetor[f] < filap->vetor[f+1]){
			
			f = f + 1;
			
		}
		
		if(filap->vetor[j] >= filap->vetor[f]){
			
			j = filap->qtd;
			
		} else{
			int temp = filap->vetor[j];
			filap->vetor[j] = filap->vetor[f];
			filap->vetor[f] = temp;
			j = f;
			
		}
	}
}

int extrairMax(TFilaP *f){
	
	if(f->qtd > 0){
		int max = f->vetor[1];
		f->vetor[1] = f->vetor[f->qtd];
		f->qtd = f->qtd - 1;
		corrigirDescendo(f);
		return max;
		
	}
}

int tamanho(TFilaP *f){
	
	return tam;
	
}

void exibe(TFilaP * f){
	
	int i;
	
	for(i = 1; i <= f->qtd; i++){
		printf("%d ", f->vetor[i]);
	}
}

