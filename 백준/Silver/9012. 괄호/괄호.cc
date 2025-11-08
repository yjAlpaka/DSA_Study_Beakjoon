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
    bool ok=true;
    for(int i=0; i<n; i++){
        st={};
        ok=true;
        std::cin >> str;
        for(char j: str){
            if(!st.empty() && st.top()!=j){
                st.pop();
            }
            else if(st.empty() && j==')'){
                ok=false;
            }
            else{
                st.push(j);
            }
    }
    if(!st.empty()){
        ok=false;
    }
                if(ok){
                std::cout << "YES\n";
            }
            else{
                std::cout <<"NO\n";
            }
    }
}