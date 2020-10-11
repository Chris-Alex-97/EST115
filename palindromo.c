#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "colas.h"
#include "pilas.h"

int main()
{
	QUEUE PalindromoCola;
	STACK PalindromoPila;
	QUEUELEMENT DatoCola;
	STACKELEMENT DatoPila;
	char Frase[100];
	int p;
	int Valido;
	
	FILE * archivo;
	
	Make(&PalindromoCola);
	Clear(&PalindromoPila);
	archivo=fopen("fichero.txt","r");
	
	printf("\n%s\n\n","EVALAUCION DE FRASES");
	
	while(!feof(archivo)){
		Valido = TRUE;
		Make(&PalindromoCola);
		Clear(&PalindromoPila);
		fscanf(archivo,"%s",Frase);
		printf("\n% \n",Frase);
		
		for(p=0;p<=strlen(Frase)-1;p++){
			DatoCola=Frase[p];
			DatoPila=Frase[p];
			Insert(&PalindromoCola,DatoCola);
			Push(&PalindromoPila,DatoPila);
		}
		while(!Empty(&PalindromoPila)&& !IsEmpty(&PalindromoCola)&& Valido){
			DatoCola=Remove(&PalindromoCola);
			DatoPila=Pop(&PalindromoPila);
			if(DatoCola != DatoPila){
				Valido=FALSE;
			}
		}
		
		printf("%s \n",Frase);
		if(Valido)
			printf("%s\n\n","==> Es Palindromo");
		else
			printf("%s\n\n","==> No Es Palindromo");
	}
	getch();
	fclose(archivo);
	return 0;
}
