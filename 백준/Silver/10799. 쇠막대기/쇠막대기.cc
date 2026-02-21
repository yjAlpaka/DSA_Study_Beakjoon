#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <utility>
#include <algorithm>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    int answer{}, n{};
    bool before=false;
    std::stack <bool> st{};
    std::string str{};
    std::cin >> str;
    for(int i=0; i<str.length();i++){
        if(str[i]=='('){
            n++;
            before=true;
        }
        else{
            n--;
            if(before){
                answer+=n;
            }
            else{
                answer++;
            }
            before=false;
        }
    }
    std::cout << answer;
}