// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;
// typedef pair<int, int> ii;
// typedef unsigned long long ull;

// #define X first
// #define Y second
// #define pb push_back
// #define mp make_pair
// #define ep emplace_back
// #define EL printf("\n")
// #define sz(A) (int)A.size()
// #define FOR(i, l, r) for (int i = l; i <= r; i++)
// #define FOD(i, r, l) for (int i = r; i >= l; i--)
// #define fillchar(a, x) memset(a, x, sizeof(a))



// void solve(){

//     ll n ;
//     cin>> n ;
//     int ok =1;
//     int cnt4=0,cnt7=0;
//     while(1){
//         if(n%7==0){
//             cnt7+=n/7;
//             break;
//         }
//         if(n>=4){
//             cnt4++;
//             n-=4;
//         }
//         if(n<4){
//             if(n!=0) ok =0;
//             break;
//         }
//     }
//     if(ok){
//         FOR(i,0,cnt4-1) cout<<4;
//         FOR(i,0,cnt7-1) cout<<7;
//     }else cout<<-1;





// }



// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     solve();
// }


#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
vector<ll> fibo(93);
void preprocess(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<=92;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }    
}

void process(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<93;j++){
            if (a[i] == fibo[j]){
                cout << a[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main(){
    preprocess();
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    

    return 0;
} 