#include <bits/stdc++.h>
 
 
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        std::string s;
        std::cin >> s;
        if (s == "bca" || s == "cab") puts("NO");
        else puts("YES");
    }
    return 0;
}