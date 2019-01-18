/*************************************************************************
	> File Name: leetcode125.c
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2019年01月05日 星期六 18时09分01秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int isPalindrome(char* s) {
    int h = 0, len = strlen(s);
    //char x[len] = {0}, x1[len] = {0}, x2[len] = {0};
    char x[len], x1[len] , x2[len];
    memset(x,0,sizeof(x));
    memset(x1,0,sizeof(x1));
    memset(x2,0,sizeof(x2));
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == ' ') continue;
        if (s[i] >= 48 && s[i] <= 57)  {
            x[h] = s[i];
            h++;
        } else if (s[i] >= 65 && s[i] <= 90) {
            x[h] = s[i] + 32;
            h++;
        } else if (s[i] >= 97 && s[i] <= 122) {
            x[h] = s[i];
            h++;
        }
    }
    h = 0;
    for(int i = 0; i < strlen(x)/ 2; i++) {
        x1[i] = x[i]; 
    }
    printf("%s\n", x1);
    for(int i = strlen(x) - 1; i > strlen(x) / 2; i--) {
        x2[h] = x[i];
        h++;
    }
    printf("%s\n", x2);
    if(!strcmp(x1, x2)) return 1;
    else return 0;
}

int main() {
    char s[100];
    gets(s);
    printf("%d\n", isPalindrome(s));
    return 0;
}
