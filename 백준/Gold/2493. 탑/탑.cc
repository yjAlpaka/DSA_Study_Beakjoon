#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <utility>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::stack <std::pair<int,int>> stack{};
    int n{}, num{};
    std::cin >> n ;
    int answer[n]={};
    for(int i=1; i<=n; i++){
        std::cin >> num;
        if(stack.empty()){
        answer[i-1]=0;
        stack.push(std::make_pair(num,i));
        }
        else if(stack.top().first<num){
            while(stack.top().first<num){
                stack.pop();
                if(stack.empty()){
                break;
                }
            }
            if(stack.empty()){
                answer[i-1]=0;
            }
            else{
            answer[i-1]=stack.top().second;
            }
            stack.push(std::make_pair(num,i));
        }
        else{
        answer[i-1]=stack.top().second;
        stack.push(std::make_pair(num,i));
        }
    }
    for(int i:answer){
        std::cout << i <<" ";
    }
}