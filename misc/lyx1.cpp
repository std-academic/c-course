#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int GENSHIN_COUNT = 1000;

int n, m, k;
vector<pair<int,int> > genshins[GENSHIN_COUNT];

int main() {
    cin >> n >> m >> k;
    for (int x, y, i = 1; i <= n; ++i) {
        cin >> x >> y;
        genshins[x].push_back(make_pair(y, i));
    }
    for (int i = 1; i <= m; ++i) {
        sort(
            genshins[i].begin(),
            genshins[i].end(),
            greater<pair<int,int> >()
        );

        if (genshins[i].empty()) cout << -1 << endl;
        else {
            for (auto &j : genshins[i])
                cout << j.second << ' ';
            cout << endl;
        }
    }
}