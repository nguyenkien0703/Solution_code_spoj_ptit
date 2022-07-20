//https://www.spoj.com/PTIT/problems/P152SUMI/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
string  s;

int main(){
    while(1){
        cin >> s;
        if(s=="#") break;
        int y=0,n=0,p=0,aa=0;
        int n =s.length();
        for(char x : s) {
            if(x=='Y') ++y;
            else if(x=='N') ++n;
            // else if(x=='P') ++p;
            else if(x=='A') ++aa;

        }
        if((float)aa>=(float)n/2.0){
            cout<<"need quorum"<<endl;
        }else{
            if(y>n){
                cout<<"yes"<<endl;
            }
            if(n>y){
                cout<<"no"<<endl;
            }else if(y==n){
                cout<<"tie"<<endl;
            }

        }






    }


}