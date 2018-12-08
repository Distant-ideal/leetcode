/*************************************************************************
	> File Name: leetcode88.c
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2018年11月08日 星期四 16时17分04秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c[10000];

void MemeryArray(int a[], int n, int b[], int m, int c[]) {  
    int i, j, k;  
    i = j = k = 0;  
    while (i < n && j < m) {
        if(a[i] == 0) {
            i++;
            continue;
        }
        if(b[j] == 0) {
            j++;
            continue;
        }
        if (a[i] < b[j])   
            c[k++] = a[i++];  
        else  
            c[k++] = b[j++];   
    }  
    while (i < n)  
        c[k++] = a[i++];  
    while (j < m)  
        c[k++] = b[j++];  
}  


void merge(int* nums1, int m, int* nums2, int n) {
    int c[10000];
    MemeryArray(nums1, m, nums2, n, c);
    return ;
}


int main() {
    int n, m, num1[10000], num2[10000];
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++) {
        scanf("%d", &num1[i]);
    }
    for(int j = 0; j < n; j++) {
        scanf("%d", &num2[j]);
    }
    MemeryArray(num1, m, num2, n, c);
    for(int i = 0; i < 6; i++) {
        printf("%d", c[i]);
    }
    return 0;
}

