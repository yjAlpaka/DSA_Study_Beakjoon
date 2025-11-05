#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <utility>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::deque <int> dq{};
    int n{}, num{};
    std::cin >> n;
    std::string com{};
    for(int i=0; i<n; i++){
        std::cin >> com;
        if(com=="push_front"){
            std::cin >> num;
            dq.push_front(num);
        }
        else if(com=="push_back"){
            std::cin >> num;
            dq.push_back(num);
        }
        else if(com=="pop_front"){
            if(!dq.empty()){
                std::cout << dq.front() <<"\n";
                dq.pop_front();
            }
            else{
                std::cout << -1<<"\n";
            }
        }
        else if(com=="pop_back"){
            if(!dq.empty()){
                std::cout << dq.back() <<"\n";
                dq.pop_back();
            }
            else{
                std::cout << -1<<"\n";
            }
        }
        else if(com=="size"){
            std::cout << dq.size() <<"\n";
        }
        else if(com=="empty"){
            std::cout << dq.empty() <<"\n";
        }
        else if(com=="front"){
            if(!dq.empty()){
                std::cout << dq.front() <<"\n";
            }
            else{
                std::cout << -1<<"\n";
            }
        }
        else if(com=="back"){
            if(!dq.empty()){
                std::cout << dq.back() <<"\n";
            }
            else{
                std::cout << -1<<"\n";
            }
        }
    }
}