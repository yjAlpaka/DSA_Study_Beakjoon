#include <utility>      
#include <iostream>
#include <stack>
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n{}, k{};
    long long result{};
    std::stack<int> st;
    std::cin >> n;
    for (int i=1; i<=n; i++){
        std::cin >> k;
        if(st.empty()){
            st.push(k);
            continue;
        }
        while(true){
        if(st.top() <= k){
            st.pop();
        }
        else break;
        if(st.empty()) break;
        }
        result+=st.size();
        st.push(k);
    }    
    std::cout << result;
}