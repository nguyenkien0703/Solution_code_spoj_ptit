#include <bits/stdc++.h>
#define hoaf cout << "\nhoaf13";
 
//https://www.spoj.com/PTIT/problems/P152PROF/
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

ll m, s;

main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>s;
    if(s> 9*m || (s==0 && m> 1)){
        cout<<"-1 -1\n";
        return 0;
    }   
    int tmp =s;
    int lon[m]={0}, be[m]={0};

    for(int i=0;i<m;i++){
        if(s>=9){
            lon[i]=9;
            s-=9;
        }else if(s!=0){
            lon[i]=9;
        }else break;
    }
    --tmp;
    for(int i=m-1;i>0;i--){
        if(s>=9){
            be[i]=9;
            s-=9;
        }else if(s!=0){
            be[i]=9;
        }else break;
    }
    be[0]=tmp+1;
    for(int i=0;i<m;i++){
        cout<<be[i];
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<lon[i];
    }


}