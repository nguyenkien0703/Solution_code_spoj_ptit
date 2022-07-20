//THUẠT TOÁN BFS
#include<bits/stdc++.h>
#define hoaf cout<<"\nhoaf13. I'm here ~";
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
bool visited[1001];
vector<int> adj[1001];
//n la so luong dinh , m la so luong canh
int n , m ,u;

void inp(){
	cin>>n>>m>>u;
	for(int i=0;i<m;i++){
		int x , y ;
		cin>> x>> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}
void BFS(int u){
	///buoc khoi tao
	queue<int> q;
	q.push(u);
	visited[u]=true;

	while(!q.empty()){
		int v =q.front(); q.pop();
		cout<<v<<" ";
		for(int x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
			}
		}
		
		
		
	}
}
int main(){
	int t ;
	cin>> t;
	while(t--){
		
		inp();
		BFS(u);
		cout<<endl;
	}
	
	
	
	return 0;


}