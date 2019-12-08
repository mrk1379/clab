#include <stdio.h>
#include <stdlib.h>


fib(int n){
	if (n==1){
		return 1;
	}if (n==2){
		return 1 ;
	}else {
		return fib(n-1)+fib(n-2);
	}	

	}



int main() {
	int n ;
	scanf("%d",&n);
	printf("%d",fib(n));
	
}
