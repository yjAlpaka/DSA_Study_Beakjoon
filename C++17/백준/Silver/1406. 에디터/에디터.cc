#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::list<char> arr={}; 
    std::string str;
    std:: cin>> str;
    for(char i: str){
        arr.push_back(i);
    }
    int n{};
    auto cursor=arr.end();
    char com;
    std::cin >> n;
    for(int i=0; i< n; i++){
        std::cin >> com;
        if(com=='L'){
            if(cursor!=arr.begin()){
                cursor--;
            }
        }
        else if(com=='D'){
            if(cursor!=arr.end()){
                cursor++;
            }
        }
        else if(com=='B'){
            if(cursor!=arr.begin()){
                cursor--;
                cursor=arr.erase(cursor);
            }
        }
        else if(com=='P'){
            char add;
            std::cin >> add;
            arr.insert(cursor,add);
        }
    }
    for (char i : arr){
        std::cout << i;
    }
}