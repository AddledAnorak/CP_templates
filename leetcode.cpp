#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <limits.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>

#define FOR(n) for(int i = 0; i < n; i++)
#define FORVAR(n, var) for(int var = 0; var < n; var++)
#define EACH(var, list_) for (auto& var: list_)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define vt vector
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

typedef long long ll;
typedef long double ld;

class Solution {
private:
    // to_string
    string to_string(char c) {
        return string(1, c);
    }

    string to_string(bool b) {
        return b ? "true":"false";
    }

    string to_string(const char* s) {
        return string(s);
    }

    string to_string(string s) {
        return s;
    }
    
    // MAX
    template<class T> T MAX(T first) {
        return first;
    }

    template<class T> T MAX(vt<T> nums) {
        return *max_element(all(nums));
    }

    template<class T, class... Rest>
    T MAX(T first, Rest... rest) {
        return max(first, MAX(rest...));
    }


    // MIN
    template<class T> T MIN(T first) {
        return first;
    }

    template<class T> T MIN(vt<T> nums) {
        return *min_element(all(nums));
    }

    template<class T, class... Rest>
    T MIN(T first, Rest... rest) {
        return min(first, MAX(rest...));
    }
    
    
public:
};
