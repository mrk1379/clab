#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int newsize = 0;

int main()
{
  int x,key=0,numoflines=0,numofd=0,*diarytag,requesteddiary;
  
    diarytag=(int *)malloc(sizeof(int));
  char ***text;
  printf("1-adding a diary \n2-showing a diary \n3-ending the app\n");
    text=(char ***)malloc(sizeof (char) );
    text[0]=(char **)malloc(sizeof (char ));
    text[0][0]=(char*)malloc(200);
  diarytag[0]=0;
  while( key != 3 ){
  						//riciving key number
  	scanf("%d",&key);

                           //adding diaes
  	if (key==1){
  		
  		while(strcmp(text[numofd][numoflines-1],"\n")){
  			fgets(text[numofd][numoflines],200,stdin);
            numoflines++;
            text[numofd]=(char**)realloc(text[numofd],sizeof(char)*(numoflines+1));
            text[numofd][numoflines]=(char *)malloc(200);
            diarytag[numofd]++;
  			
		  }
		  										//new diary space
		  numofd++;
		  text=realloc(text,(numofd+1)*sizeof(char));
          text[numofd]=(char **)malloc(sizeof(char));
          text[numofd][0]=(char *)malloc(200);
  		  diarytag=(int *)realloc(diarytag,(numofd+1)*sizeof(int));
          diarytag[numofd]=0;
  		numoflines=0;
  		
  		
	  }
	  						//shoing diaries
  	
  	if( key == 2 ){
  		printf("entwe the number of diary\n");
  		scanf("%d",requesteddiary);
  		 for ( x=0;x<text[requesteddiary-1];x++)
        printf("%s",text[requesteddiary-1][x]);
  		
	  }
  	
  	if (key!=3){
  		printf("1-adding a diary \n2-showing a diary \n3-ending the app\n");
	  }
  	
  	
  	
  	
  }
  
  
}
