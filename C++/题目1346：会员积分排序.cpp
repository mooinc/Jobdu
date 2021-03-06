
// 题目1346：会员积分排序

/**
 * @author:wangzq
 * @email:wangzhenqing1008@163.com
 * @date:2015-06-30 11:01:54
 * @url:http://ac.jobdu.com/problem.php?pid=1346
 * 解题思路参考csdn:http://blog.csdn.net/u013027996/article/details/17226673
 */

#include <stdio.h>
#include <algorithm>

using namespace std;
const int maxn = 1002;

struct Member {
    int id;
    int score;
} members[maxn];

int n, m, i;

int min(int x, int y) {
    return x < y ? x : y;
}

bool cmp(Member s1, Member s2) {
    if (s1.score == s2.score) {
        return s1.id < s2.id;
    } else {
        return s1.score > s2.score;
    }
}

int main() {
    while (scanf("%d%d", &n, &m) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d %d", &members[i].id, &members[i].score);
        }
        sort(members, members + n, cmp);
        int tmp = min(n, m);
        for (i = 0; i < tmp; i++) {
            printf("%d\n", members[i].id);
        }
    }
    return 0;
}
/**************************************************************
Problem: 1346
User: wangzhenqing
Language: C++
Result: Accepted
Time:100 ms
Memory:1028 kb
****************************************************************/


                        

