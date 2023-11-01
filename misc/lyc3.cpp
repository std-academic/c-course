#include <bits/stdc++.h>

using namespace std;

// --------- 辅助函数 --------- 

bool in(char c, const char*s) { // 判断 c 是否在 s 中出现
    for (const char* i = s; *i; ++i) if (*i == c)
        return true;
    return false;
}

int ensureSafe(int x) { // 如果 x == 0 就结束程序
    if (x == 0) {
        puts("Runtime Error");
        exit(0);
    }
    return x;
}

int op1(int x, char c) { // 单目运算符
    switch(c) {
        case '+': return x;
        case '-': return -x;
        case '~': return ~x;
    }
    exit(1); // 出错
}

int op2(int x, int y, int c) { // 双目运算符
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

char peek() { // 获取当前表达式字符
    return *c;
}
char get() { // 获取当前表达式字符并右移一位
    return *c++;
}

// --------- 递归计算函数 --------- 

int expression();

int level1() { // 处理数字、括号和单目运算符。
    if (isdigit(peek()))
        return get() - '0'; // 可以修改这里，支持超过一位的数字
    else if (peek() == '(') {
        get(); // (
        int res = expression();
        get(); // )
        return res;
    } else if(in(peek(), "+-~")) {
        char op = get();
        return op1(level1(), op);
    }
    exit(1); // 出错
}

int level2() { // 处理 * / %
    int res = level1();
    while (in(peek(), "*/%"))
        res = op2(res, level1(), get());
    return res;
}

int level3() { // 处理 + -
    int res = level2();
    while (in(peek(), "+-"))
        res = op2(res, level2(), get());
    return res;
}

int level4() { // 处理 > <
    int res = level3();
    while (in(peek(), "><"))
        res = op2(res, level3(), get());
    return res;
}

int expression() {
    return level4();
}

int main() {
    int T; cin >> T;

    while (T--) {
        cin >> s;
        c = s;

        cout << expression();
    }
    return 0;
}
