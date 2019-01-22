/*************************************************************************
	> File Name: leetcode58.cpp
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2019年01月13日 星期日 19时13分26秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int i = len - 1, ans = 0;
    while(s[i] == ' ') --i;
    while(i >= 0 && s[i] != ' ') --i, ++ans;
    return ans;
}

int main() {
return 0;
}
