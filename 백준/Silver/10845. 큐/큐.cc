#include <utility>      
#include <iostream>
#include <queue>
#include <string>
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n{}, num{};
    std::string input;
    std::queue <int> que{};
    std::cin >> n;
    for (int i=0; i < n; i++){
        std::cin >> input;
        if ( input == "push"){
            std::cin >> num;
            que.push(num);
        }
        else if (input =="size"){
            std::cout << que.size() << "\n";
        }
        else if (input == "empty"){
            if(que.empty() == true){
                std::cout << 1 << "\n";
            }
            else std::cout << 0<< "\n";
        }
        else if(que.empty() == true){
            std::cout << -1<< "\n";
        }
        else if(input == "pop"){
            std::cout << que.front()<< "\n";
            que.pop();
        } 
        else if(input == "front") std::cout << que.front()<< "\n";
        else if(input == "back") std::cout << que.back()<< "\n";
    }
}