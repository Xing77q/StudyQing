#include<stdio.h>
int main(){
    int m,n,i,j,k=0,M=0,num=0,sign=0,l;
    scanf("%d %d",&m,&n);
    for(i=n;i>=m;i--){
        k=0;
        l=i;
        j=l%10;
        while(i>0){
            k=10*k+j;
            l=l/10;
            j=l%10;
        }
        if(k==i){
            num++;
            if(sign==0){
                M=i;
                sign=1;
            }
        }
    }
    printf("%d %d\n",num,M);
    return 0;
}
