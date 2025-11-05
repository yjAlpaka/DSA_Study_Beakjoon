#include <utility>      
#include <iostream>
#include <stack>
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    long long n{}, k{}, result{}, temp{},count{}, cur{};
    std::stack<std::pair<int, int>> st;
    std::cin >> n;
    for (int i=0; i<n; i++){
        count=0;
        temp=0;
        std::cin >> k;
        if(st.empty()){ 
        st.push({k,1});
        //std::cout<< "스택이 비어있음\n";
        continue;
        }
        while(true){
            if(std::get<0>(st.top()) > k){
                //std::cout << k <<"push 됨\n";
                st.push({k,1});
                temp++;
                break;
            }
            else if(std::get<0>(st.top())==k){
                count=std::get<1>(st.top());
                st.pop();
                if(st.empty()){
                    temp+=count;
                }
                else temp+=(count+1);
                st.push({k,count+1});
                //std::cout <<"호출됨\n";
                break;
            }
            else if(std::get<0>(st.top())<k){
                count=std::get<1>(st.top());
                temp++;
                if(std::get<1>(st.top())==1){
                    st.pop();
                    if(st.empty()){
                        st.push({k,1});
                        break;
                    }
                }
                else{
                    cur=std::get<0>(st.top());
                    st.pop();
                    st.push({cur,count-1});
                }
                //std::cout << k <<"스택 정리 완료\n";
            }
            if(st.empty()) break;
        }
        result+=temp;
        //std::cout << i+1<<"번째 시도:" <<temp <<"\n";
    }
    std::cout << result;
}