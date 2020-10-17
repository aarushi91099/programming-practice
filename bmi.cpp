#include<bits/stdc++.h>
using namespace std;

int bmicat(int w, float h);
int main(){
	int w;
	float h;
	cin>>w>>h;
	cout<<bmicat(w,h);
	return 0;
}
int bmicat(int w, float h){
	float bmi;
	bmi = w/(h*h);
	if(bmi<18){
		return 0;
	} 
	if(bmi>=18 && bmi<25){
		return 1;
	}
	if(bmi>=25 && bmi<30){
		return 2;
	}
	if(bmi>=30 && bmi<40){
		return 3;
	}
	return 4;
}
