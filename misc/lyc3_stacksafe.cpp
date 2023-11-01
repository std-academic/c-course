#include <bits/stdc++.h>

using namespace std;

bool div0 = false;

// --------- 辅助函数 --------- 

inline bool in(char c, const char*s) { // 判断 c 是否在 s 中出现
    for (const char* i = s; *i; ++i) if (*i == c)
        return true;
    return false;
}

inline int ensureSafe(int x) { // 如果 x == 0 就结束程序
    if (x == 0) {
        div0 = true;
        x = 1;
    }
    return x;
}

inline int op1(int x, char c) { // 单目运算符
    switch(c) {
        case '+': return x;
        case '-': return -x;
        case '~': return ~x;
    }
    exit(1); // 出错
}

inline int op2(int x, int y, int c) { // 双目运算符
    switch(c) {
        case '+': return x+y;
        case '-': return x-y;
        case '*': return x*y;
        case '/': return x/ensureSafe(y);
        case '%': return x%ensureSafe(y);
        case '>': return x>y;
        case '<': return x<y;
    }
    exit(1); // 出错
}

// --------- IO 接口 --------- 
char s[114514];
char *c;

inline char peek() { // 获取当前表达式字符
    return *c;
}
inline char get() { // 获取当前表达式字符并右移一位
    return *c++;
}

// --------- 递归计算函数 --------- 

int expression();

int factor() { // 处理数字、括号和单目运算符。
    if (isdigit(peek()))
        return get() - '0'; // 可以修改这里，支持超过一位的数字
    else if (peek() == '(') {
        get(); // (
        int res = expression();
        get(); // )
        return res;
    } else if(in(peek(), "+-~")) {
        char op = get();
        return op1(factor(), op);
    }
    exit(1); // 出错
}

const char* level_op[] = {"<>", "+-", "*/%"};
struct Node {
    int level, res;
    bool init, waiting;
    char op;
    Node() : level(0), res(0), init(0), waiting(0), op(' ') {}
    Node(int level) : level(level), res(0), init(0), waiting(0), op(' ') {}
    const char* type() const { return level_op[level]; }
};

int expression() {
    vector<Node> v; // 模拟栈
    v.push_back(Node{0});

    int res;
    while (!v.empty()) {
        auto &r = *v.rbegin();
        if (r.level == 3) {
            res = factor();
            v.pop_back();
        } else {
            if (!r.init && !r.waiting) {
                r.waiting = true;
                v.push_back(Node{r.level + 1});
            } else {
                if (!r.init) {
                    r.res = res;
                    r.init = true;
                } else {
                    r.res = op2(r.res, res, r.op);
                }

                if (in(peek(), r.type())) {
                    r.op = get();
                    v.push_back(Node{r.level + 1});
                } else {
                    res = r.res;
                    v.pop_back();
                }
            }
        }
    }
    return res;
}

int main() {
    int T; cin >> T;

    while (T--) {
        cin >> s;
        c = s;

        div0 = false;
        int res = expression();
        if (div0) cout << "Runtime Error\n";
        else cout << res << endl;
    }
    return 0;
}
