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
    std::string str{};
    for(int i=0; i<n; i++){
        std::cin >> str;
        if(str=="push"){
            std::cin >> num;
            stack.push(num);
        }
        if(str=="pop"){
            if(!stack.empty()){
                std::cout << stack.top()<< "\n";
                stack.pop();
            }
            else{
                std::cout << -1<< "\n";
            }
        }
        if(str=="size"){
            std::cout << stack.size()<< "\n";
        }
        if(str=="empty"){
            if(stack.empty()){
                std::cout << 1<< "\n";
            }
            else{
                std::cout << 0<< "\n";
            }
        }
        if(str=="top"){
            if(stack.empty()){
                std::cout << -1 <<"\n";
            }
            else{
                std::cout << stack.top()<< "\n";
            }
        }
    }
}