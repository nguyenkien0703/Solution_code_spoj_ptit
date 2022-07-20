#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a[15],i;
char s[100],x;

int check(){
    int i,j,b[100],c=0,d[15],sum;
    for(i=2;i<=n;++i){
        for(j=0;j<=9;++j) d[j]=0;
        for(j=n-1;j>=0;--j){
            sum=(s[j]-'0')*i+c;
            b[j]=sum%10;
            d[b[j]]++;
            c=sum/10;
        }
        if (c>0) d[c]++;
        for(j=0;j<=9;++j)
            if (a[j]!=d[j]) return 0;
    }
    return 1;
}

int main(){

    while(scanf("%s",&s)!=-1){
        n=strlen(s);
        for(i=0;i<=9;++i) a[i]=0;
        for(i=0;i<n;++i) a[s[i]-'0']++;
        printf("%s ",s);
        printf("%s\n",(check()?"is cyclic":"is not cyclic"));
    }
}