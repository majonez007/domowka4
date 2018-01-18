#include <stdio.h>
#define ROZMIAR 10

void wyswietl(int* tablica){
	int i;
	for(i=0;i<ROZMIAR;i++){
		printf(" %d",tablica[i]);
	}
	printf("\n");
}
void posortuj(int* tablica){
	int max;
	int max_index;
	int i,j,tmp;
	for(i=ROZMIAR;i>0;i--){
		max=tablica[0];
		max_index=0;
		for(j=1;j<i;j++){
			if(tablica[j]>max){
				max=tablica[j];
				max_index=j;
			}
		}
		tmp=tablica[i-1];
		tablica[i-1]=max;
		tablica[max_index]=tmp;
	}
}
int main(){
	int tablica[ROZMIAR]={7,4,0,2,3,1,9,5,8,6};
	printf("Przed wykonanien ");wyswietl(tablica);
	posortuj(tablica);
	printf("po wykonaniu: ");wyswietl(tablica);
	return 0;
}
