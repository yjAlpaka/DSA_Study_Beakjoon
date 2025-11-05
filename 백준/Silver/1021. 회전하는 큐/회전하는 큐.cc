#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <utility>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::deque <int> dq{};
    int n{}, num{}, answer{}, k{},temp{}, anstemp{};
    std::cin >> n >> num;
    for(int i=1; i<=n; i++){
        dq.push_back(i);
    }
    for(int i=0; i<num; i++){
        std::cin >> k;
        anstemp=0;
        while(dq.front()!=k){
            if(dq.front()<k){
                temp=dq.front();
                dq.pop_front();
                dq.push_back(temp);
                anstemp++;
            }
            else{
                temp=dq.back();
                dq.pop_back();
                dq.push_front(temp);
                anstemp++;
            }
        }
        if(anstemp>dq.size()-anstemp){
            anstemp=dq.size()-anstemp;
        }
        answer+=anstemp;
        dq.pop_front();
    }
    std::cout << answer;
}