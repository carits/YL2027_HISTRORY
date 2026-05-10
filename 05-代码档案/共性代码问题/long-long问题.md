# long long 问题

## 问题描述

中间结果或答案超出 int 范围，导致溢出。

## 典型错误代码

```cpp
int ans = 1;
for (int i = 1; i <= n; i++) ans *= i; // 溢出
```

## 正确写法

```cpp
long long ans = 1;
for (int i = 1; i <= n; i++) ans *= i;
```

## 常见场景

- 答案需要 long long 但变量声明为 int
- 中间计算溢出（如 `a * b` 两个 int 相乘）
- 线段树求和时未用 long long
- 取模前先溢出

## 出现频率

- 整体：高
- 涉及学生：（填写）