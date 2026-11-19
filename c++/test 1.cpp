#include<iostream>
using namespace std;
int a[102];
int b[102];
int cnt,n;
bool isin(int t){
	for(int k=0;k<=n;k++){
		if(t==a[k]){
			return true;
		}
	}
	return false;
}
bool noint(int t){
	for(int k=0;k<=n;k++){
		if(t==b[k]){
			return false;
		}
	}
	b[cnt++]=t;
	return true;
}
int main()
{
	int res=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			int t=a[i]+a[j];
			if(isin(t)){
				if( noint(t)){
					res++;
				}
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
