#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::stack <int> stack ={};
    int n{},num{};
    std::cin >> n ;
    for(int i=0; i<n; i++){
        std::cin >> num;
        if(num!=0){
            stack.push(num);
        }
        else{
            stack.pop();
        }
    }
    int answer{};
    while(!stack.empty()){
        answer+=stack.top();
        stack.pop();
    }
    std::cout << answer;
}