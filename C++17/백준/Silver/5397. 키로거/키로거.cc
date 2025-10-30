#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::list<char> arr={}; 
    std::string str;
    int n{};
    auto cursor=arr.begin();
    std::cin >> n;
    for(int i=0; i< n; i++){
        arr={};
        cursor=arr.begin();
        std:: cin>> str;
        for(char i: str){
            if(i=='<'){
                if(cursor!=arr.begin()){
                    cursor--;
                }
            }
            else if(i=='>'){
                if(cursor!=arr.end()){
                    cursor++;
                }
            }
            else if(i=='-'){
                if(cursor!=arr.begin()){
                    cursor--;
                    cursor=arr.erase(cursor);
                }
            }
            else{ 
                arr.insert(cursor,i);
            }
        }
        for(char j:arr){
            std::cout<<j;
        }
        std::cout<<"\n";
    }
}