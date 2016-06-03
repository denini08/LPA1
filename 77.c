#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Dados {
	char  nome[50];
	int   quantidade;
	int   code;
	float preco;
	
}
void adicionar_dados(){ 

	FILE *arquivo = NULL;
	arquivo = fopen("banco",a+);
	
		fprintf(arquivo,"%d %d %l", farofa.quantidade, farofa.code, farofa.preco );
		
		}
int main(int argc,char *argv[]){
	struct Dados farofa;
	char* zz;
	zz = argv[1];
	
	if(*zz = 'a'){
		char *l;
		int m,n;
		float o;
	
	
		l = argv[2];
		m = atoi(argv[3]);
		n = atoi(argv[4]);
		o = atof(argv[5]);
	
	
		farofa.nome = l; 
		farofa.quantidade = m;
		farofa.code = n; 
		farofa.preco = o;
		
		void adicionar_dados(farofa.nome,farofa.quantidade,farofa.code,farofa.preco);
	}
	return 0;
}