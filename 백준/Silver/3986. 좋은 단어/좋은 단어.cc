#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <utility>
#include <algorithm>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    int n{}, answer{};
    std::stack <char> st{};
    std::string str{};
    std::cin >> n;
    for(int i=0; i<n; i++){
        st={};
        std::cin >> str;
        for(char i: str){
            if(!st.empty() && st.top()==i){
                st.pop();
            }
            else{
                st.push(i);
            }
    }
                if(st.empty()){
                answer++;
            }
    }
    std::cout << answer;
}