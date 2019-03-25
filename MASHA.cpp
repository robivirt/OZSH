#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    int times[] = {0, 5, 3, 2, 2, 1, 3, 3, 1, 1, 2, 2, 3, 4, 2, 2, 4, 4, 2, 3, 4};
    std::vector<int> pens;
    int t, k, count = 0, curr;
    std::cin >> t >> k;
    for (int i = 0; i < k; i++){
        std::cin >> curr;
        if(times[curr] + 3 >= t){
            count++;
            pens.push_back(curr);
        }
    }
    if (count == 0) std::cout << "не съел\n"; else for (auto&& en: pens) std::cout << en << ' ';
    return 0;
}