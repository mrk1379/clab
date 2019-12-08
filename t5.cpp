#include <stdio.h>
#include <stdlib.h>

p(int x ,int y){
	int h=1,c=1,d,b=1;
	d=y-x;
	while (y!=1){
	h =y*h;
	y--;
	}
	while (x!=1){
		c = c*x;
		x--;
	}
	while (d!=1){
		b =b *d;
		d--;	}
	return h/(b*c);
		
}







int main() {
	int x,y,h=1 ;
	scanf ("%d%d",&x,&y);
	int f[y+1];
	f[0]=1;
	f[y+1]=1;
	for (;h<=x;h++){
		f[x]=p(x,y-1) + p(x-1,y-1);
	}
	printf("%d",f[x]);
}
