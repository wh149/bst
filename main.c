#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "bstReplace.h"

int main() {
    struct node *tree = NULL;
    int n;

    // 输入树节点数
    printf("Enter the number of nodes in the tree: ");
    scanf("%d", &n);

    // 输入树节点值并存储到数组
    printf("Enter %d values for the tree:\n", n);
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        tree = bstInsert(tree, value);
    }

    // 显示原始树
    printf("Original Tree:\n");
    bstShow(tree);

    // 输入数组值
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Error: Memory allocation failed.\n");
        bstFree(tree);
        return EXIT_FAILURE;
    }

    printf("\nEnter %d values for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 替换原始树中的值
    bstInOrderReplace(tree, arr, n);

    // 显示重新构建的树
    printf("\nReconstructed Tree:\n");
    bstShow(tree);

    // 释放内存
    free(arr);
    bstFree(tree);

    return 0;
}
