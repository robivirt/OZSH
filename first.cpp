#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

typedef long long ll;

ll mex(std::vector<ll>, ll, ll);

int main() {
    std::ios_base::sync_with_stdio(false);
    //    printf("");
    ll n, q, fs, sn;
    std::string action;
    std::cin >> n >> q;
    std::vector<ll> multi(n);
    for (ll i = 0; i < n; i++){
        std::cin >> multi[i];
    }

    for (ll i = 0; i < q; i++){
        std::cin >> action >> fs >> sn;
        switch ((char)action[0]) {
            case '?':
                std::cout << mex(multi, fs - 1, sn - 1) << '\n';
                break;
            case '!':
                multi[fs - 1] = sn;
                break;
        }
    }

    return 0;
}

ll mex(std::vector<ll> arr, ll f, ll s){
//    std::vector<ll> new_arr (second_indx - first_indx + 1);
    std::sort(arr.begin() + f, arr.begin() + s + 1); // n * log(n)
    if(arr[f] != 0) return 0;
    else {
        for (ll i = f; i <= s; i++) {
            if (arr[i + 1] - arr[i] >= 2){
                return arr[i] + 1;
            }
        }
    }
    return arr[s] + 1;
}
