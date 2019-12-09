#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int x,i=0,n=0;
	char text[200],justText[200];
	gets(text);
	x= strlen(text);
	for(;i<x;++i && ++n){
		if(!(isspace(text[i])))
		{
			justText[n]=text[i];
			
		}
	}
	
	i=0;
	x= strlen(text);
	while (i<x){
		justText[i]=tolower(justText[i]);
		i++;
	}

	
	char reverset[x];
	for (i=x-1;i>=0;i--){
		reverset[i] = justText[x-(i+1)];
	}
	
	if(strcmp(reverset,justText)==0)
	{
		printf("true");
	}
	else{
	
		printf("false");
	}
	
	
	
	
}
