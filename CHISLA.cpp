//mathematic answer 3888

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    int count = 0;
    for (int a = 1; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 0; c < 10; c++) {
                for (int d = 0; d < 10; d++) {
                    //if ((a == b && a != c && a != d && c != d) || (a == c && a != b && a != d && b != d) || (a == d && a != c && a != b && c != b)  || (b == c && b != a && b != d && a != d) || (b == d && b != a && b != c && a != c) || (c == d && c != a && c != b && a != b)) count++;
                    if(a == b || b == c || c == a) count++;                    
                }
            }
        }
    }
    std::cout << count;
    return 0;
}
