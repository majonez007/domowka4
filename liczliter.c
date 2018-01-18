#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void czysc_ekran(){
	system("clear");
}
bool czy_znak(char znak){
	if((znak>='a'&&znak<='z')||(znak>='A'&&znak<='Z'))
		return true;
	else
		return false;
}
void zlicz(char* ciag, int* histogram){
	int i=0;
	while(ciag[i]){
		if(czy_znak(ciag[i]));{
			if(ciag[i]>='a')
				histogram[ciag[i]-'a']++;
			else
				histogram[ciag[i]-'A']++;
		}
		i++;
	}
}
void wypisz(char* ciag, int* histogram){
	int i;
	printf("%s\n\n",ciag);
	for(i=0;i<26;i++){
		printf("  %c",i+'a');
	}
	puts("");
	for(i=0;i<26;i++){
		printf("%3d",histogram[i]);
	}
	puts("\n");
}
int main(){
	char* ciag="Polak maly , maly Polak";
	int histogram[26]={0};
	czysc_ekran();
	zlicz(ciag,histogram);
	wypisz(ciag,histogram);
}
