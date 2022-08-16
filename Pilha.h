/*  
  Arquivo: Pilha.h
  Autor: LUCCA ROLVARE
  Date: 3/05/22 19:51
  Descricao: Esse arquivo é uma biblioteca Pilha.
*/

#define fantasma '/f'
#define Max 10
#define sinal -1 

#include "Booleano.h"
#include <stdio.h>

typedef struct 
{	
    int topo;                  //armazena a posicao do ultimo elemento da pilha
    unsigned char Vetor[Max];  //armazena os elementos da pilha

}Pilha;

//interface
Pilha criarPilha();
void mostrarPilha(Pilha);
bool pilhaVazia(Pilha);
unsigned char acessarPilha(Pilha);
Pilha pushPilha(Pilha , unsigned char);
Pilha popPilha(Pilha);
Pilha inverter(Pilha, int);
//bool pilhaCheia(Pilha);
//Pilha esvaziarPilha(Pilha);
//Pilha pushPilhaArq(char *, Pilha );

//implementacao

Pilha criarPilha(){

    Pilha S;
    S.topo = 0;

    return S;
}

void mostrarPilha(Pilha S){
    
    int k, t;
    t = S.topo;
    
    if(t == sinal)
        printf("\n Pilha vazia.");
    else{
        for(k = t; k >= 0; k--)
        {
            printf("%c", S.Vetor[k]);
        }
    }
}

bool PilhaVazia(Pilha S){
	
	bool veri = FALSE;
	
	if(S.topo == sinal){
		veri = TRUE;
	}
	return veri;
}

unsigned char acessarPilha(Pilha S){
	
	unsigned char y;
	int p;
	
	if(S.topo != sinal){
		p = S.topo;
		y = S.Vetor[p];
	}else{
		y = fantasma;
	}
	return y;
}

Pilha pushPilha(Pilha  S, unsigned char ch){
	
	if(S.topo != Max){
		S.topo = S.topo + 1;
		S.Vetor[S.topo] = ch;		
	}
}
 
Pilha popPilha(Pilha  S){
	
	if(S.topo != sinal){
		S.topo = S.topo - 1;
	}
}

Pilha inverter(Pilha S, int y){
    if(pilhaVazia && acessarPilha >= y ){
        
    }
}

/*
Pilha pushPilhaArq(char *palavra, Pilha A){
     
     FILE *arq = fopen(palavra, "rt");
     int elemento;

     if(A.topo != sinal) {
     
         while(! feof(arq)){
            elemento = (int)fgetc(arq);
            A = pushPilha(A, elemento);
        }
     }

    return A;
}




Pilha esvaziarPilha(){

    Pilha S;
    S.topo = sinal;

    return S;
}


bool PilhaCheia(Pilha  S){
	
	bool veri = FALSE;
	if(S.topo == Max - 1){
		veri = TRUE;
	}
	
	return veri;
}
*/
