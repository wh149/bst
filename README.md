以下是用 Markdown 格式撰写的题目要求文档：

---

# 二叉搜索树 (BST) 节点值替换任务

## 任务描述

实现一个功能模块 `bstReplace`，用于对给定的二叉搜索树 (BST) 进行中序遍历，并用一个数组的值依次替换树中节点的值，同时保持树的原始结构不变。

## 输入输出要求

### 输入

1. **树的节点数**：
   - 用户输入一个正整数 `n` 表示 BST 中的节点数。
2. **树的节点值**：
   - 用户依次输入 `n` 个整数，按照顺序插入到 BST 中，构建原始的二叉搜索树。
3. **数组的值**：
   - 用户输入 `n` 个整数，组成替换用的数组。

### 输出

1. **原始树结构**：
   - 按照二叉搜索树规则构建完成后，输出其结构（例如：中序遍历）。
2. **重新构建的树结构**：
   - 用数组的值替换 BST 节点值后，输出树的结构，树的形状保持不变。

---

## 程序接口

`bstReplace` 模块包含以下函数：

### `bstInOrderReplace`

#### 函数原型

```c
void bstInOrderReplace(struct node *tree, int *arr);
```

#### 功能说明

- **输入**：
  - `tree`：指向 BST 根节点的指针。
  - `arr`：一个整数数组，包含替换节点值的元素。
- **输出**：
  - 直接修改 BST 中每个节点的值，用数组中的值按中序遍历顺序替换节点值。

---

## 测试用例

### 测试用例 1：右链状树

#### 输入：
```
Enter the number of nodes in the tree: 9
Enter 9 values for the tree:
1 2 3 4 5 6 7 8 9
Enter 9 values for the array:
2 3 4 5 6 7 8 9 10
```

#### 输出：
```
Original Tree:
1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
           \
            7
             \
              8
               \
                9

Reconstructed Tree:
2
 \
  3
   \
    4
     \
      5
       \
        6
         \
          7
           \
            8
             \
              9
               \
               10
```

---

### 测试用例 2：左链状树

#### 输入：
```
Enter the number of nodes in the tree: 9
Enter 9 values for the tree:
9 8 7 6 5 4 3 2 1
Enter 9 values for the array:
2 3 4 5 6 7 8 9 10
```

#### 输出：
```
Original Tree:
                9
               /
              8
             /
            7
           /
          6
         /
        5
       /
      4
     /
    3
   /
  2
 /
1

Reconstructed Tree:
                2
               /
              3
             /
            4
           /
          5
         /
        6
       /
      7
     /
    8
   /
  9
 /
10
```

---

### 测试用例 3：平衡树

#### 输入：
```
Enter the number of nodes in the tree: 9
Enter 9 values for the tree:
5 3 8 2 4 7 9 1 6
Enter 9 values for the array:
6 8 3 9 7 4 5 10 2
```

#### 输出：
```
Original Tree:
        5
       / \
      /   \
     /     \
    3       8
   / \     / \
  2   4   7   9
 /       /
1       6

Reconstructed Tree:
        6
       / \
      /   \
     /     \
    8       3
   / \     / \
  9   7   4   2
 /       /
10      5
```

---

## 编译与运行

### `Makefile`

使用以下 `Makefile` 编译和运行程序：

```makefile
# Compiler and flags
CC = clang
CFLAGS = -Wall -Werror -g -fsanitize=address,leak,undefined

# Source files
SRC = main.c bst.c bstReplace.c

# Target binary
TARGET = main

.PHONY: all clean

# Default target
all: $(TARGET)

# Build target: compile and link in one step
$(TARGET):
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean build files
clean:
	rm -rf $(TARGET) *.dSYM
```

---

### 测试运行

   ```bash
   $ ./test.sh
   ```




如果需要进一步优化或增加新功能，请随时联系！