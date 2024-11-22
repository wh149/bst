以下是完整的 `README.md` 文件内容，描述如何使用项目并运行测试。

---

# Binary Search Tree (BST) Replacement

## 任务描述

本项目实现了一个模块，用于对二叉搜索树 (BST) 进行节点值的替换。通过输入数组中的值，按照中序遍历的顺序替换 BST 的节点值，同时保持树的原始结构。

---

## 功能概述

### 输入
1. **树的节点数**：一个正整数 `n`，表示 BST 中的节点数量。
2. **树的节点值**：按照用户输入顺序插入到 BST 中。
3. **替换数组**：包含 `n` 个整数，用于替换树节点的值。

### 输出
1. **原始树**：
   - 显示构建完成的原始树结构。
2. **重构后的树**：
   - 按中序遍历的顺序，用替换数组的值替换原始树节点值后，显示新的树结构。

---

## 文件结构

```
.
├── main.c             # 主程序入口
├── bst.c              # 二叉搜索树相关操作实现
├── bst.h              # 二叉搜索树头文件
├── bstReplace.c       # 节点替换模块实现
├── bstReplace.h       # 节点替换模块头文件
├── test/
│   ├── t1Input.txt    # 测试用例 1 的输入
│   ├── t1Exp.txt      # 测试用例 1 的期望输出
│   ├── t2Input.txt    # 测试用例 2 的输入
│   ├── t2Exp.txt      # 测试用例 2 的期望输出
│   ├── t3Input.txt    # 测试用例 3 的输入
│   ├── t3Exp.txt      # 测试用例 3 的期望输出
├── Makefile           # 编译脚本
└── README.md          # 项目说明文档
```

---

## 编译与运行

### 编译项目
确保您已安装 `clang` 或兼容的 C 编译器。在项目根目录下运行以下命令：

```bash
make
```

### 运行程序
运行程序时可以手动输入数据，也可以通过文件输入：

1. **交互式输入**：
   ```bash
   ./main
   ```

2. **文件输入**：
   ```bash
   ./main < test/t1Input.txt
   ```

### 清理项目
清理生成的二进制文件：

```bash
make clean
```

---

## 测试用例

以下是示例测试用例，位于 `test/` 目录。

### 测试用例 1 (右链状树)

#### 输入文件 `t1Input.txt`：
```
9
1
2
3
4
5
6
7
8
9
2
3
4
5
6
7
8
9
10
```

#### 期望输出文件 `t1Exp.txt`：
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

### 测试用例 2 (左链状树)

#### 输入文件 `t2Input.txt`：
```
9
9
8
7
6
5
4
3
2
1
10
9
8
7
6
5
4
3
2
```

#### 期望输出文件 `t2Exp.txt`：
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
               10
               /
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
```

---

### 测试用例 3 (平衡树)

#### 输入文件 `t3Input.txt`：
```
9
5
3
8
2
4
7
9
1
6
6
4
9
3
5
8
10
7
2
```

#### 期望输出文件 `t3Exp.txt`：
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
    4       9
   / \     / \
  3   5   8  10
 /       /
2       7
```
---
#### 期望输出文件 `t4Exp.txt`：
```
Enter the number of nodes in the tree: Enter 7 values for the tree:
Original Tree:
      10
      / \
     /   \
    5    20
   / \     \
  4   8    25
 /
3

Enter 7 values for the array:

Reconstructed Tree:
      5
     / \
    3   6
   / \   \
  2   4   7
 /
1
```

---

## 测试运行

运行以下脚本以验证测试用例是否通过：

```bash
./run_test.sh
```
或者
```bash
bash run_test.sh
```


