#include<iostream>
#include<stdio.h>
#define MaxSize 100
using namespace std;

void printN( int *a,int n,int i) {
	for(int j = i ; j<n ; j++ ){
		cout<<" ";
	}
	for(int  j = 1 ; a[j]!=0 ; j++){
		printf("%4d",a[j]);
	}
	cout<<endl;
}
int main(){
	int a[MaxSize]={0},ai=0,b[MaxSize],bi=0;
	
	a[1] = 1;
	
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++ ){
		if(i==0){
			printN(a,n,i+1);
		}
		else{
			for(int j = i+2 ; j>0 ; j--){
				a[j] = a[j] + a[j-1];
			}
			printN(a,n,i+1);
		}
	}
	return 0;
}
