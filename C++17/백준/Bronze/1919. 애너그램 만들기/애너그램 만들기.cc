    #include <iostream>
    int freq[26];
    int main()
    {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::string str1;
        std::string str2;
        int count{};
        std::cin >> str1 >> str2;
        for(auto i:str1) freq[i-'a']++;
        for(auto i:str2) freq[i-'a']--;
        for (int i=0;i<26;i++) count+=abs(freq[i]);
        std::cout << count;
    }
