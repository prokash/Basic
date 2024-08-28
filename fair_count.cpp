//
// Created by prokash on 7/19/25.
//
//--- project was based on c
#ifdef __cplusplus
#include "fair_count.hpp"
#include <iostream>
#include <string>
#include <unordered_map>
#endif
bool isFair(int n) {
    std::string s = std::to_string(n);
    std::unordered_map<char, int> count;

    for (char c : s)
        count[c]++;

    // Must have exactly 2 distinct digits, why ??
    // It could be 121234 , and it is not exactly 2 distinct digits
    //if (count.size() != 2)
    //    return false;
    for (auto  i : count){
        if (i.second % 2 ) {
            std::cout << " Not fair" << s << std::endl;
            return false;
        }
    }
    std::cout << " Fair fair" << s << std::endl;
    return true;


    // Check if both digits appear the same number of times
    //auto it = count.begin();
    //int freq1 = it->second;
    //++it;
    //int freq2 = it->second;

    //return freq1 == freq2;
}

int nextFair(int x) {
    int n = x + 1;
    int loop_cnt = 0;
    isFair(x) ;

    while (true) {
        if (isFair(n)) {
            break;
        }
        ++loop_cnt;
        ++n;
    }
    std::cout << "Loop count: " << loop_cnt << std::endl;
    return n;
}

extern "C" int fair_main() {
    int x;
    std::cout << "Enter number for fair_main(): ";
    std::cin >> x;

    int result = nextFair(x);
    std::cout << "Next fair number: " << result << std::endl;

    return 0;
}
