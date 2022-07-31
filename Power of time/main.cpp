// link : https://www.eolymp.com/en/problems/10142

#include <cstdio>
#include <deque>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    scanf("%d", &n);
    deque<int>calling, ideal;
    int x;
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        calling.push_back(x);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        ideal.push_back(x);
    }
    int cek = 0;
    while(!ideal.empty()){
        if(calling.front() == ideal.front()){
            calling.pop_front();
            ideal.pop_front();
            cek ++;
        }
        else {
            x = calling.front();
            calling.pop_front();
            calling.push_back(x);
            cek ++;
        }
        
    }
    printf("%d\n", cek);



    return 0;
}