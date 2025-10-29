#include <stdio.h>
#include <iostream>
#include <string>
int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    int n{};
    int arr[26]{};
    std::cin >> n;
    std::string str;
    bool answer=true;
    for(int i=0; i< n; i++){
        answer=true;
        std::cin >>str;
        for (char j: str){
            arr[j-97]++;
        }
        std::cin >> str;
        for (char j:str){
            arr[j-97]--;
        }
        for (int j=0; j< 26; j++){
            if(arr[j]!=0){
                arr[j]=0;
                answer=false;
            }
        }
        if(answer){
            std::cout<<"Possible\n";
        }
        else{
            std::cout<<"Impossible\n";
        }
    }
}