
// 题目1512：用两个栈实现队列

/**
 * @author:wangzq
 * @email:wangzhenqing1008@163.com
 * @date:2015-06-30 11:01:55
 * @url:http://ac.jobdu.com/problem.php?pid=1512
 * 解题思路参考csdn:http://blog.csdn.net/u013027996/article/details/17243695
 */

#include <stdio.h>
#include <stack>   
#include <string.h>
#include <string>

using namespace std;
int n, i;

int main() {
    while (scanf("%d", &n) != EOF) {
        stack<int> stack1;
        stack<int> stack2;
        for (i = 0; i < n; i++) {
            char operate[5];
            scanf("%s", operate);
            if (strcmp(operate, "PUSH") == 0) {
                int k;
                scanf("%d", &k);
                stack1.push(k);
            } else {
                if (!stack2.empty()) {
                    int top = stack2.top();
                    printf("%d\n", top);
                    stack2.pop();
                } else {
                    if (stack1.empty()) {
                        printf("-1\n");
                    } else {
                        while (!stack1.empty()) {
                            int top = stack1.top();
                            stack1.pop();
                            stack2.push(top);
                        }
                        printf("%d\n", stack2.top());
                        stack2.pop();
                    }
                }
            }
        }

    }
    return 0;
}


/**************************************************************
Problem: 1512
User: wangzhenqing
Language: C++
Result: Accepted
Time:70 ms
Memory:1184 kb
****************************************************************/


                        

