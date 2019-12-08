#include <stdio.h>
#include <stdlib.h>



tabe(int n){
	if (n==1){
		return 1 ;
	}if (n==2){
		return 1 ;
	}if (n==3){
		return 1;
	}
	else  {
		return tabe(n-1)+tabe(n-2)+tabe(n-3);
	
	}
	
}

int main() {
			int n ;
	scanf("%d",&n);
	printf("%d",tabe(n));

}
