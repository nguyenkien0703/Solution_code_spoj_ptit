#include <bits/stdc++.h>
#define hoaf cout << "\nhoaf13";
//https://www.spoj.com/PTIT/problems/PTIT124J/
//CHUỂN HỆ  NHỊ PHÂN SANG BÁT PHÂN 

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;

const double pi = 2 * acos(0);
const ll inf = LLONG_MAX;
const ll ninf = LONG_MIN;
const ll mod = 1e9 + 7;
string s ;





main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s ;
    while(s.length()%3!=0){

        s='0'+s;    
    }
    string find="";
    for(int i=0;i<s.length();i+=3){
        find ="";
        for(int j=i;j<i+3;j++) {
            find+=s[j];
        }
        if(find=="000") cout<<"0";
        if(find=="001") cout<<"1";
        if(find=="010") cout<<"2";
        if(find=="011") cout<<"3";
        if(find=="100") cout<<"4";
        if(find=="101") cout<<"5";
        if(find=="110") cout<<"6";
        if(find=="111") cout<<"7";

    }
    return 0;




}