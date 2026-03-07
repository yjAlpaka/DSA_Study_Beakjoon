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
    int m{}, n{};
    std::cin >> m >> n;
    std::vector <std::vector<int>> arr(m,std::vector<int>(n,0));
    std::vector<std::vector<std::vector<int>>> vis(m,std::vector<std::vector<int>>(n,std::vector<int>(2,0)));
    std::string str{};
    std::queue<std::tuple<int,int,bool>> queue{};
    std::array<int, 4> dx{-1,0,1,0};
    std::array<int, 4> dy{0,-1,0,1};
    for(int i=0; i<m; i++){
        std::cin >> str;
        for(int j=0; j<n; j++){
            arr[i][j]=str[j]-'0';
        }
    }
    queue.push({0,0,false});
    vis[0][0][0]=1;
    while(!queue.empty()){
        std::tuple<int,int,bool> cur=queue.front();
        queue.pop();
        for(int i=0; i<4; i++){
            int nx=std::get<0>(cur)+dx[i];
            int ny=std::get<1>(cur)+dy[i];
            if(nx<0 || nx >=m || ny <0 || ny >=n)continue;
            if(vis[nx][ny][std::get<2>(cur)]!=0) continue;
            if(arr[nx][ny]==1){
                if(!std::get<2>(cur)){
                    vis[nx][ny][1]=vis[std::get<0>(cur)][std::get<1>(cur)][0]+1;
                    queue.push({nx,ny,true});
                }
                else{
                    continue;
                }
            }
            else{
                vis[nx][ny][std::get<2>(cur)]=vis[std::get<0>(cur)][std::get<1>(cur)][std::get<2>(cur)]+1;
                queue.push({nx,ny,std::get<2>(cur)});
            }
        }
    }
    int res0 = vis[m-1][n-1][0];
    int res1 = vis[m-1][n-1][1];

    if (res0 == 0 && res1 == 0) std::cout << -1;
    else if (res0 == 0) std::cout << res1;
    else if (res1 == 0) std::cout << res0;
    else std::cout << std::min(res0, res1);
}