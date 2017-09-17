#include <stdio.h>

int main(){

	int c, sc, tc, lc;

	sc = tc = lc = 0;

	while((c = getchar()) != EOF){
		if(c == '\n'){
			lc++;
		}
		if(c == '\t'){
			tc++;
		}
		if(c == ' '){
			sc++;
		}
	}
	printf("\nSpaces: %d\nTabs: %d\nLines: %d\n", sc, tc, lc);
	return 0;

}
