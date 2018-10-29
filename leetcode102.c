/*************************************************************************
	> File Name: leetcode102.c
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2018年10月25日 星期四 19时33分57秒
 ************************************************************************/
int getheight(struct TreeNode *root) {
    if(root == NULL) return 0;
    int l = getheight(root->left), r = getheight(root->right);
    return (l > r ? l : r) + 1;
}

void getColums(struct TreeNode *root, int *cols, int k) {
    if(root == NULL) return ;
    cols[k] += 1;
    getColums(root->left, cols, k + 1);
    getColums(root->right, cols, k + 1);
    return ;
}

void getResult(struct TreeNode *root, int **ret, int *cols, int k) {
    if(root == NULL) return ;
    ret[k][cols[k]++] = root->val;
    getResult(root->left, ret, cols, k + 1);
    getResult(root->right, ret, cols, k + 1);
    return ;
}

int** levelOrder(struct TreeNode* root, int** columnSizes, int* returnSize) {
    *returnSize = getheight(root);
    *columnSizes = (int *)calloc(sizeof(int ),*returnSize);
    getColums(root, * columnSizes, 0);
    int **ret = (int *)malloc(sizeof(int *) * (*returnSize));
    for(int i = 0; i < *returnSize; i++) {
        ret[i] = (int *)malloc(sizeof(int) * (*columnSizes)[i]);
        (*columnSizes)[i] = 0;
    }
    getResult(root, ret, *columnSizes, 0);
    return ret;
}
