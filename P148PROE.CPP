// https://www.spoj.com/PTIT/problems/P148PROE/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;

int main()
{

    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        string s1,s2,s;
        cin >> s1 >> s2 >> s;
        int dem = 0;
        int ok = 1;
        while (1)
        {
            if(ok ==0) break;
            ++dem;
            if(dem> 50){
                ok=0;
                break;
            }

            string tmp = "";
            for (int i = 0; i < n; i++)
            {
                tmp = tmp+s2[i];
                tmp =tmp+ s1[i];
            }
            if (tmp == s)
            {
                ok=1;
                break;
            
            }else {
                for(int i=0;i<n;i++){
                    s1[i]=tmp[i];
                    s2[i]=tmp[i+n];

                }
            }
        }
        if(ok==0){
            cout<<-1<<endl;
        }else cout<<dem<<endl;
    }
}