#include <stdio.h>
#include <stdlib.h>




int main() {
	int n ,x=1,x1,x2,counter=1;
	scanf("%d",&n);
	for (;x<=n;x++){
		if (x%2==1){
			x1 =counter;
		}else if (x%2==0){
			x2=counter;
		}
		if (x>2){
			counter = x1 + x2;
			
			
		}
		
		
	}
	printf("%d",counter);
	
}
