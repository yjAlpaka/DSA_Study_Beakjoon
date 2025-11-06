#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <utility>
#include <algorithm>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::deque <std::pair <int, int>> dq{};
    int n{}, l{},num{};
    std::cin >> n >> l;
    for(int i=0; i<n; i++){
        std::cin >> num;
        while(!dq.empty() && dq.back().first>=num){
            dq.pop_back();
        }
        dq.push_back(std::make_pair(num,i));
        if(dq.front().second<=i-l){
            dq.pop_front();
        }
        std::cout << dq.front().first << " ";
        }
}