#include <stdio.h>
#include <stdlib.h>

int memory[1000];

tabe(int n){
	if (n==1){
		return 1 ;
	}if (n==2){
		return 1 ;
	}if (n==3){
		return 1;
	}
	else if (memory[n]==0) {
		memory[n]=tabe(n-1)+tabe(n-2)+tabe(n-3);
	
	}
	return memory[n];
}

int main() {
			int n ;
	scanf("%d",&n);
	printf("%d",tabe(n));

}
