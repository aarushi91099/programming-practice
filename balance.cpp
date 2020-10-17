#include<bits/stdc++.h>
using namespace std;

int balance(int a, int m, int rs);
int main(){
	int a,m,rs;
	cin>>a>>m>>rs;
	cout<<balance(a,m,rs);
	return 0;
}
int balance(int a, int m, int rs){
	if(a<m){
		int x=m-a;
		return rs+x;
	}
	if(a>m){
		int x = a-m;
		return rs-x;
	}
	return rs;
}
