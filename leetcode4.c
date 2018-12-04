/*************************************************************************
	> File Name: leetcode4.c
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2018年11月07日 星期三 18时51分57秒
 ************************************************************************/

#include <stdio.h>

void MemeryArray(int a[], int n, int b[], int m, int c[]) {  
    int i, j, k;  
    i = j = k = 0;  
    while (i < n && j < m) {  
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


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int c[10000];
    MemeryArray(nums1, nums1Size, nums2, nums2Size, c);
    if((nums1Size + nums2Size) % 2 == 0) {
        double ans = ( c[(nums1Size + nums2Size) / 2] + c[(nums1Size + nums2Size) / 2 - 1] ) / 2.0;
        return ans;
    } else {
        double ans = c[(nums1Size + nums2Size - 1) / 2] / 1.0;
        return ans ;
    }
}



int main() {
    int n, m, num1[1000], num2[1000];
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num1[i]);    
    }
    for(int i = 0; i < m; i++) {
        scanf("%d", &num2[i]);
    }
    printf("%.1lf\n", findMedianSortedArrays(num1, n, num2, m));
    return 0;
}
