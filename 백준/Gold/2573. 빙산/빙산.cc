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
    std::cin >> n>> m;
    std::vector <std::vector<int>> arr(n,std::vector<int>(m,0));
    std::queue <std::pair<int,int>>queue{};
    std::array<int, 4>dx={-1,0,1,0};
    std::array<int, 4>dy={0,1,0,-1};
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            std::cin >>arr[i][j];
        }
    }
    while(true){
        int temp{};
        std::vector <std::vector<int>> vis(n,std::vector<int>(m,0));
        std::vector <std::vector<int>> tem(n,std::vector<int>(m,0));
        for(int i=0; i<n;i++){
            for(int j=0; j<m;j++){
                if(arr[i][j]==0||vis[i][j]==1)continue;
                int minus{};
                temp++;
                queue.push({i,j});
                vis[i][j]=1;
                for(int l=0;l<4;l++){
                if(i+dx[l]<0||i+dx[l]>=n||j+dy[l]<0||j+dy[l]>=m) continue;
                    if(arr[i+dx[l]][j+dy[l]]==0) minus++;
                        }
                        tem[i][j]+=minus;
                while(!queue.empty()){
                    std::pair<int,int> cur=queue.front();
                    queue.pop();
                    for(int k=0;k<4;k++){
                        minus=0;
                        int nx=dx[k]+cur.first;
                        int ny=dy[k]+cur.second;
                        if(nx<0||nx>=n||ny<0||ny>=m) continue;
                        if(arr[nx][ny]==0||vis[nx][ny]==1)continue;
                        for(int l=0;l<4;l++){
                            if(i+dx[l]<0||i+dx[l]>=n||j+dy[l]<0||j+dy[l]>=m) continue;
                            if(arr[nx+dx[l]][ny+dy[l]]==0) minus++;
                        }
                        tem[nx][ny]+=minus;
                        vis[nx][ny]=1;
                        queue.push({nx,ny});
                    }
                }
            }
        }
                for(int i=0; i<n;i++){
            for(int j=0; j<m;j++){
                if(arr[i][j]-tem[i][j]<0) arr[i][j]=0;
                else arr[i][j]-=tem[i][j];
            }
        }
        if(temp==1){
            answer++;
        }
        else if(temp>1){
            std::cout << answer;
            return 0;
        }
        else{
            std::cout<<0;
            return 0;
        }
    }
}