/*************************************************************************
	> File Name: leetcode38.c
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2018年11月07日 星期三 20时27分00秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char countAndSay(int n) {
    //char *ans, k = 0;
    char s[10000];
    //ans = (char *)malloc(sizeof(char) * 10000);
    for(int i = 0; i < n; i++) {
        int k = 0;
        if(i == 0) {
            s[k] = 1;
            k++;
        }
        if(i == 1) {
            s[k] = 1;
            k++;
            s[k] = 1;
            k++;
        }
        int x = s[0], sum = 0;
        for(int j = 0; j < strlen(s); j++) {
            if(s[j] == x) {
                sum++;
            } else {
                s[k] = sum;
                k++;
                s[k] = s[j - 1];
                k++;
                x = s[j];
                sum = 1;
            }
        }
    }
//    for(int j = 0; j < k; j++) {
//        ans[j] = s[j];
//   }
    int l = s[0] - '0';
    return l;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%c", countAndSay(n));
    return 0;
}
