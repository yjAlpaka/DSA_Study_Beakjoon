#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <utility>
#include <algorithm>
#include <vector>
#include <queue>
#include <array>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    int n{}, m{};
    std::cin >> n>> m;
    std::array <int,100001> arr{};
    arr.fill(-1);
    arr[n]=0;
    std::deque<int> deque{};
    deque.push_back(n);
    while(!deque.empty()){
        int cur=deque.front();
        deque.pop_front();
        if(cur==m){
            std::cout <<arr[m];
            return 0;
        }
        if(cur!=0 && cur*2<=100000 && arr[cur*2]==-1){
            arr[cur*2]=arr[cur];
            deque.push_front(cur*2);
        }
        if(cur-1>=0 &&arr[cur-1]==-1){
            arr[cur-1]=arr[cur]+1;
            deque.push_back(cur-1);
        }
        if(cur+1<=100000&& arr[cur+1]==-1){
            arr[cur+1]=arr[cur]+1;
            deque.push_back(cur+1);
        }
    }
    std::cout <<arr[m];
}