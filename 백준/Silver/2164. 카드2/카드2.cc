#include <utility>      
#include <iostream>
#include <queue>
#include <string>
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n{};
    std::queue <int> que{};
    std::cin >> n;
    for (int i=1; i <= n; i++){
        que.push(i);
    }
    while (que.size() > 1){
        que.pop();
        que.push(que.front());
        que.pop();
    }
    std::cout << que.front();
}