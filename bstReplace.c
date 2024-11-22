#include <stdlib.h>
#include "bstReplace.h"



int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
// 内部辅助函数：递归进行中序遍历替换
static void bstInOrderReplaceHelper(struct node *tree, int *arr, int *index) {
    if (tree == NULL) {
        return;
    }

    // 遍历左子树
    bstInOrderReplaceHelper(tree->left, arr, index);

    // 替换当前节点的值
    tree->value = arr[(*index)++];

    // 遍历右子树
    bstInOrderReplaceHelper(tree->right, arr, index);
}

// 封装的外部接口：替换BST节点值
void bstInOrderReplace(struct node *tree, int *arr, int n) {
    int index = 0; // 本地变量跟踪数组索引
    qsort(arr, n, sizeof(int), compare);
    bstInOrderReplaceHelper(tree, arr, &index);
}