#include<stdio.h>
int main(){
	int i, j, x=2;
for (i=1; i<5; i++)
   for (j=1; j<3; j++)
       x += i++;
       printf("%d",x);
       return 0;
}
