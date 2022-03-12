#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	//int result=pow(16,0);
	int result = returnDecimal("FFF");
	printf("%i\n",result);
}

int hexDec(char x){
		if(x=='A')return 10;
		if(x=='B')return 11;
		if(x=='C')return 12;
		if(x=='D')return 13;
		if(x=='E')return 14;
		if(x=='F')return 15;
		else{			
			return atoi(&x);
			}
	}

int returnDecimal(char* cadena){
	int largo = 0;
	int resultado = 0;
	int indice = 0;
	while(cadena[largo]!='\0'){
		
		largo ++;
		
		}
	
	largo = largo-1;
	
	
	while(largo >= 0){
		resultado = resultado + (hexDec(cadena[indice])*(int)pow(16,largo));
		indice++;
		largo--;
		
		}
	int a = hexDec(cadena[0]);
	int b = hexDec(cadena[1]);
	return resultado;
	}

