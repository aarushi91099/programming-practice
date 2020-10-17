#include<bits/stdc++.h>
using namespace std;

int digitocc(int i,int u,int x);
int main(){
	int i,u,x;
	cin>>i>>u>>x;
	cout<<digitocc(i,u,x);
	return 0;
}
int digitocc(int i,int u,int x){
	int count=0;
	for(int j=i;j<=u;j++){
		int n=j;
		while(n!=0){
			int r=n%10;
			if(r==x){
				count++;
			}
			n=n/10;
		}
	}
	return count;
}
