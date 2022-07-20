//https://www.spoj.com/PTIT/problems/PTIT138C/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
string s ;
void chuanhoa(string &s){
    for(int i = 0; i < s.length();i++) {
        s[i]=tolower(s[i]);
    }
}
ll check(string s ){
    int l=0, r=s.length()-1;
    while(l < r){
        if(s[l]!=s[r]){
            return 0;
        }
        ++l;--r;
    }
    return 1;
}
int main(){
    int t ;
    cin >> t;
    cin.ignore();
    while(t--){
        cin>> s;

        chuanhoa(s);
        string tmp="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a'||s[i]=='b'||s[i]=='c') tmp=tmp+"2";
            else if(s[i]=='e'||s[i]=='f'||s[i]=='d') tmp=tmp+"3";
            else if(s[i]=='g'||s[i]=='h'||s[i]=='i') tmp=tmp+"4";
            else if(s[i]=='l'||s[i]=='k'||s[i]=='j') tmp=tmp+"5";
            else if(s[i]=='o'||s[i]=='n'||s[i]=='m') tmp=tmp+"6";
            else if(s[i]=='r'||s[i]=='q'||s[i]=='p'||s[i]=='s') tmp=tmp+"7";
            else if(s[i]=='v'||s[i]=='u'||s[i]=='t') tmp=tmp+"8";
            else if(s[i]=='z'||s[i]=='y'||s[i]=='x'||s[i]=='w') tmp=tmp+"9";

        }
        if(check(tmp)){
            cout<<"YES\n";
        }else cout<<"NO\n";
        
    }



}