#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <utility>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::stack <std::pair<int,int>> stack{};
    int n{};
    long num{};
    std::cin >> n;
    int answer[n]{};
    for(int i=0; i<n; i++){
        answer[i]=-1;
    }
    for(int i=0; i<n; i++){
        std::cin >> num;
        while(!stack.empty() && stack.top().first<num){
            answer[stack.top().second]=num;
            stack.pop();

        }
        stack.push(std::make_pair(num,i));
    }
    for(int i: answer){
        std::cout<< i<<" ";
    }
}