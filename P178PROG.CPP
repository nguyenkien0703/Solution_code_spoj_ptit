//TRỘN XÂU 
 
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
 
int main(){
	int n ;
	while(1){
		cin>> n ;
		if(n==0) break;
		string s1,s2,s;
		cin>>s1>>s2>>s;
		int dem=0, ok =1;
		while(1){
			if(ok ==0 ) break;
			dem ++;
			if(dem> 50){
				ok =0;
				break;
				
			}
			string stg="";
			for(int i=0;i<n;i++){
				stg+=s2[i];
				stg+=s1[i];
			}
			if(stg==s){
				ok =1;
				break;
				
			}else{
				for(int i=0;i<n;i++){
					s1[i]=stg[i];
					s2[i]=stg[i+n];
					
				}
			}
		}
		if(ok ==0){
			cout<<-1<<endl;
		}else cout<<dem<<endl;
	}



}