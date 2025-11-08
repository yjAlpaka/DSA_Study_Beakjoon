#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <utility>
#include <algorithm>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::stack <int> st{};
    std::string str{};
    bool answer=true;
    while(true){
        st={};
        answer=true;
        std::getline (std::cin, str);
        if(str=="."){
            break;
        }
        for(char i: str){
            if(i=='('){
                st.push(1);
            }
            else if(i=='['){
                st.push(2);
            }
            else if(i==')'){
                if(st.empty() || st.top()!=1){answer=false; break;}
                    st.pop();
            }
            else if(i==']'){
                if(st.empty() || st.top()!=2){answer=false; break;}
                    st.pop();
                }
            }
        if(st.empty() && answer){
            std::cout << "yes\n";
        }
        else{
            std::cout << "no\n";
        }
    }
}