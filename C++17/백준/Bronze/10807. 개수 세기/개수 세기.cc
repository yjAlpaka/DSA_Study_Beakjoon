    #include <iostream>
    int num[100];
    int main()
    {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        int n{}, x{}, count{};   
        std::cin >> n;
        for(int i=0; i< n; i++){
            std::cin >> num[i];
            }
        std::cin >> x;
        for (int i=0; i< n; i++){
            if(num[i]==x)count++;
        }
        std::cout << count;
    }