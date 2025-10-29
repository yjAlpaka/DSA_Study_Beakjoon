    #include <iostream>
    int num[12];
    int main()
    {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        int n{}, k{},s{},y{}, count{};
        std::cin >> n >> k;
        for (int i=0; i<n; i++){
            std::cin >> s >> y;
            num[(s*6)+y-1]++;
        }
        for (int i=0; i<12; i++){
            while(num[i] > 0){
                num[i]-=k;
                count++;
            }
        }
        std::cout << count;
    }
