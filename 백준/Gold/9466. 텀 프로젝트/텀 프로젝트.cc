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
    int n{}, m{},answer{};
    std::cin >> n;
    for(int i=0; i<n; i++){
        answer=0;
        std::cin >> m;
        std::vector <int> arr(m,0);
        std::vector <int> vis(m,0); //-1은 팀이 된 것, 0은 아직 방문 X, 1은 팀이 안됨, 2는 작업중
        std::deque <std::pair<int,int>>deque{};
        for(int j=0; j<m; j++){
            std::cin >> arr[j];
            if(j+1 == arr[j]) vis[j]=-1;
        }
        for(int j=0; j<m; j++){
            if(vis[j]==-1 || vis[j]==1) continue;
            deque.push_back({j+1,arr[j]});
            while(!deque.empty()){
                std::pair<int,int> cur=deque.front();
                if(vis[cur.second-1]==0){
                    deque.push_front({cur.second,arr[cur.second-1]});
                    vis[cur.second-1]=2;
                }
                else if(vis[cur.second-1]==1 ||vis[cur.second-1]==-1){
                    while(!deque.empty()){
                        vis[deque.front().first-1]=1;
                        deque.pop_front();
                    }
                }
                else{
                    while(!deque.empty()&&deque.back().first!=deque.front().second){
                        vis[deque.back().first-1]=1;
                        deque.pop_back();
                    }
                }
                if(!deque.empty()&&deque.back().first==deque.front().second){
                        while(!deque.empty()){
                        vis[deque.front().first-1]=-1;
                        deque.pop_front();
                    }
                }
            }
        }
        for(int j=0; j<m; j++){
            if(vis[j]==1){
                answer++;
            }
        }
        std::cout <<answer <<"\n";
    }

    
}