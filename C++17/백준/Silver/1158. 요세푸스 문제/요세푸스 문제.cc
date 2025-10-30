    #include <iostream>
    #include <list>
    #include <algorithm>
    int main()
    {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        int n{},k{};
        std::list<int> table;
        std::cin >> n >> k;
        int ans[n] {};
        for (int i=1;i<=n;i++) table.push_back(i);
        auto cursor=table.begin();
        for (int i=0;i<n;i++){
                for (int j=0; j<k-1;j++) 
                {
                    cursor++;
                    if(cursor==table.end())
                    cursor=table.begin();
                }
            ans[i]=*cursor;
            cursor=table.erase(cursor);
            if(cursor==table.end())cursor=table.begin();
            }
        std::cout << '<';
        for (int i=0;i<n-1;i++){
            std::cout <<ans[i] <<", ";
        }
        std::cout << ans[n-1] << '>';
    }