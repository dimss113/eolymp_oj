#include<iostream>

int GetSumOfFactors(int num){
    int sum = 0;
    for(int i = 1;i < num/2+1;i++){
        if(num % i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int sum_of_factors = 0;
    int counter = 0;
    int num = 0;
    for(;;){
        num++;
        sum_of_factors = GetSumOfFactors(num);
        if(num == sum_of_factors) continue;
        if (GetSumOfFactors(sum_of_factors) == num && num > sum_of_factors){
            std::cout << "Pair: " << num << " " << sum_of_factors << "\n";
            counter+=1;
        }
        if(counter == 100) break;
    }
    return 0;
}
