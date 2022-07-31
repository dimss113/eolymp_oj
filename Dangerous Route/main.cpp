// link:  https://www.eolymp.com/en/problems/325

#include <cstdio>
// #include <set> 
#include <utility>// for pair
#include <vector> // for vector
#include <queue> // for priority queue
using namespace std;
#define gc getchar

vector<int>parent;

void get( int &ret ) {
	ret = 0; char inp=gc(); int kl=1;
	while(inp<'0' || inp>'9'){
		if (inp=='-') kl=-1; inp=gc();}
	while ('0'<=inp && inp<='9')
		ret=(ret<<3)+(ret<<1)+(int)(inp-'0'), inp=gc();
	if(kl<1) ret=-ret;
}

int find(int u){
    if(u == parent[u])
        return u;
    else return parent[u] = find(parent[u]);
}

int main(){

    int n, m, u, v, danger;
    int ans = 0;
    get(n); get(m);
    priority_queue<pair<int,pair<int, int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
    // digunakan untuk mengurutkan value danger secara ascending baik pada dangernya dan juga pada nodenya.

    for(int i=0; i<=n;i++){
        parent.push_back(i);
    }

    for(int i=0;i< m;i++){
        get(u); get(v); get(danger);
        pq.push(make_pair(danger, make_pair(u,v)));
    }

    while(find(n) != 1){
        ans = pq.top().first; // nilai danger

        // menggabungkan vertex
        int a = find(pq.top().second.first);
        int b = find(pq.top().second.second);
        if(a != b){
            if(a > b) parent[a] = b;
            else parent[b] = a;
        }

        pq.pop();
    }

    printf("%d\n", ans);

    return 0;
}