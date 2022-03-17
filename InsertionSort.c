#include <stdio.h>
#define TAM 8
int main(){	
	int vetor[8] = {12,5,3,1,8,17,25,41};
	int temp, troca;
	for (int i=1; i < TAM; i++) {		
		temp = i;
	
	    while (vetor[temp] < vetor[temp-1]) { 
	        troca          = vetor[temp];
	        vetor[temp]   = vetor[temp-1];
	        vetor[temp-1] = troca;
	        temp--;
	        
			if(vetor[temp] > vetor[temp-1]) break;
	        if (temp == 0) break;	
			}              
	    }
	    
	    for (int i=0; i < TAM; i++){
	    	printf(" %d ", vetor[i]);
		}
}
