// link : https://www.eolymp.com/en/problems/10143

#include <stdio.h>
#include <deque>

int main(){
    int n, i;
    while(1){
        scanf("%d", &n);
        if(n==0) break;
        std::deque<int>cards;
        for(i=1;i<=n;i++){
            cards.push_back(i);
        }
        printf("Discarded cards: ");
        while(cards.size() > 1){
            if(cards.size() != 2){
                printf("%d, ", cards.front());
            }
            else printf("%d\n", cards.front());
            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
        }
        printf("Remaining card: %d\n", cards.front());
        
    }
    
    return 0;
}