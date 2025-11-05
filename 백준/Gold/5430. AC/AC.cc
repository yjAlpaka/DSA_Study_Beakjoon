#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <utility>
#include <algorithm>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::deque <int> dq{};
    std::deque <int> tempdq{};
    int n{}, num{}, temp{};
    std::string com{};
    std::string dqstr{};
    std::cin >> n;
    bool err=false;
    bool strcount=false;
    bool rev=false;
    for(int i=0; i<n; i++){
        err=false;
        strcount=false;
        rev=false; 
        temp=0;
        std::cin >> com;
        std::cin >> num;
        std::cin >> dqstr;
        dq.clear();
        for(char i: dqstr){
            if(i>='0' && i<='9'){
                temp=(10*temp)+(i-'0');
                strcount=true;
            }
            else if(i==','){
                dq.push_back(temp);
                temp=0;
            }
            else if(i==']'){
                if(strcount==true){
                dq.push_back(temp);
            }
        }
        }
        for(char i:com){
            if(err==false){
                if(i=='R'){
                    rev=!rev;
                }
                else if(i=='D'){
                    if(dq.empty()){
                        err=true;
                    }
                    else{
                        if(!rev){
                            dq.pop_front();
                        }
                        else{
                            dq.pop_back();
                        }
                        num--;
                    }
                }
        }

        }
        if(rev){
            std::reverse(dq.begin(), dq.end());
        }
        if(err==false){
            std::cout << "[";
            for (int i:dq){
                std::cout << i;
                if(num>1){
                    std::cout << ",";
                    num--;
                }
            }
            std::cout << "]";
        }
        else{
            std::cout << "error";
        }
        std::cout << "\n";
    }
}