#!/bin/bash

# 清理并编译程序
make clean
make

# 检查是否编译成功
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

# 测试用例 1
echo "Running Test 1..."
./main < test/test1Input.txt > test/output1.txt
if diff -q test/output1.txt test/test1Exp.txt > /dev/null; then
    echo "Test 1 passed!"
else
    echo "Test 1 failed!"
    echo "Diff:"
    diff test/output1.txt test/test1Exp.txt.txt
fi

# 测试用例 2
echo "Running Test 2..."
./main < test/test2Input.txt > test/output2.txt
if diff -q test/output2.txt test/test2Exp.txt > /dev/null; then
    echo "Test 2 passed!"
else
    echo "Test 2 failed!"
    echo "Diff:"
    diff test/output2.txt test/test2Exp.txt
fi

echo "Running Test 3..."
./main < test/test3Input.txt > test/output3.txt
if diff -q test/output3.txt test/test3Exp.txt > /dev/null; then
    echo "Test 3 passed!"
else
    echo "Test 3 failed!"
    echo "Diff:"
    diff test/output3.txt test/test3Exp.txt
fi
