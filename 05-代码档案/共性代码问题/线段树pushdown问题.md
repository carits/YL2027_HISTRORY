# 线段树 pushdown 问题

## 问题描述

线段树懒标记下传（pushdown）时出错，导致区间修改/查询结果不正确。

## 典型错误代码

```cpp
void pushdown(int p) {
    // 忘记下传标记
    // 或下传后未清空当前节点标记
    // 或下传顺序错误
}
```

## 正确写法

```cpp
void pushdown(int p, int len) {
    if (tag[p]) {
        tag[ls(p)] += tag[p];
        tag[rs(p)] += tag[p];
        val[ls(p)] += tag[p] * (len - len / 2);
        val[rs(p)] += tag[p] * (len / 2);
        tag[p] = 0; // 清空当前标记
    }
}
```

## 常见场景

- 忘记调用 pushdown
- pushdown 后未清空父节点标记
- 标记叠加方式错误（加法 vs 赋值）
- 下传时子节点值更新公式错误
- len 计算错误

## 出现频率

- 整体：中
- 涉及学生：（填写）