// link : https://www.eolymp.com/en/problems/10947

#include <cstdio>
#include <set>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
#define gc getchar

vector<int> parent;
vector<int>countP;

void get( int &ret ) {
	ret = 0; char inp=gc(); int kl=1;
	while(inp<'0' || inp>'9'){
		if (inp=='-') kl=-1; inp=gc();}
	while ('0'<=inp && inp<='9')
		ret=(ret<<3)+(ret<<1)+(int)(inp-'0'), inp=gc();
	if(kl<1) ret=-ret;
}

int find_parent(int u){
    if(u == parent[u])
        return u;
    else return parent[u] = find_parent(parent[u]);
}

void union_set(int u, int v){
    u = find_parent(u);
    v = find_parent(v);

    if(u!=v){
        if(u>v){
            parent[u] = v;
        }else {
            parent[v] = u;
        }
    }

}

void make_set(int u){
    parent.push_back(u);
}

int main(){
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    int t;
    // scanf("%d", &t);
    get(t);
    int m, n;
    while(t--){
        // scanf("%d %d", &n, &m); 
        get(n); get(m);
        for(int i=0;i<=n; i++){
            make_set(i);
        }
        int a, b;
        int cekparent;
        while(m--){
            // scanf("%d %d", &a, &b);
            get(a); get(b);
            union_set(a, b);
        }
        cekparent = parent[1];
        countP.assign(n+1, 0);
        for(int i=1;i<=n;i++){
            // printf("parent %d : %d\n", i , parent[i]);
            // if(cekparent == parent[i]){
            //     // printf("cek parent = %d\n", cekparent);
            //     countP[j]++;
            //     continue;
            // }
            // cekparent = parent[i];
            // j++;
            pq.push(make_pair(find_parent(i), i));
        }
        int j = 0;
        int cek = 0;
        cekparent = pq.top().first;
        // pq.pop();
        while(!pq.empty()){
            if(cekparent == pq.top().first){
                countP[j]++;
                pq.pop();
            }else{
                cekparent = pq.top().first;
                j++;
            }
        }
        for(int i=0; i<=j;i++){
            if(countP[i] >= cek){
                cek = countP[i];
            }
        }
        printf("%d\n", cek);
        countP.clear();
        parent.clear();
    }

    return 0;
}