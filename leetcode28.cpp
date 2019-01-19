/*************************************************************************
	> File Name: leetcode28.cpp
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2019年01月13日 星期日 19时09分38秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int strStr(char* haystack, char* needle) {
    int len = 0;
    int pos[256] = {0};
    memset(pos, -1, sizeof(pos));
    for(; needle[len]; len++) pos[needle[len]] = len;
    int i = 0, len2 = strlen(haystack);
    while(i + len <= len2) {
        int j = 0;
        while(needle[j] && needle[j] == haystack[i + j]) 
            ++j;
        
        if(needle[j] == 0) return i;
        i += (len - pos[haystack[i + len]]);
    }
    return -1;
}

int main() {
return 0;
}
