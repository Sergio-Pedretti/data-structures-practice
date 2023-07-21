## Number of binary trees

### Catalan Number:

$$T(n) = {C^{2n}_n \over (n+1)}$$

#### or could be described as:

$$T(n) = {\sum_{i=0}^{n} {T(i)*T(n-i)}}$$

### Also, if all nodes are labelled, so position could change:

$$T(n) = {C^{2n}_n \over (n+1)}*{n!}$$

### Max Height:

$$T(n) = {2^{n-1}}$$

## If Height is given how many nodes are required to achieve max and min:

Min &rarr; $Min(h) = {h+1}$

Max &rarr; $Max(h) = {a(r^{h+1}-1) \over (r-1)}$ &rarr; Binary Tree &rarr; ${2^{h+1}-1}$

## If Nodes are given which are the tree max and min height:

Min &rarr; $Min(n) = {{\log _{2} (n+1)}-1}$

Max &rarr; $Max(n) = {n-1}$

## Strict Binary Trees can only have 0 or 2 children per node!

### In this case if height is given

Min &rarr; $Min(h) = {2h+1}$

Max &rarr; $Max(h) = {2^{h+1}-1}$

### And if nodes are given

Min &rarr; $Min(n) = {\log _{2} (n+1)}-1}$

Max &rarr; $Max(n) = {(n-1) \over 2}$

### Internal vs External or Leaf vs non-Leaf nodes

$e = i+1$

# Representation of a binary tree

| Element | index | Left Child | Right Child |
| :-----: | :---: | :--------: | :---------: |
|    X    |   i   |   $2*i$    |   $2*i+1$   |

## So a Tree Node would be:

|        | Node |        |
| ------ | ---- | ------ |
| Lchild | data | Rchild |

```c++
    struct Node {
        struct Node *lchild;
        int data;
        struct Node *rchild;
    }
```

## Difference between Full and Complete Binary Tree

Full Binary Tree &rarr; There is no blank spaces in the tree and it has max node possible

Complete Binary Tree &rarr; There is no blank spaces in the tree but don't have max node possible

## Traversal Orders

### Preorder &rarr; visit(node), Preorder(lsubtree), Preorder(rsubtree)

### Inorder &rarr; Inoder(lsubtree), visit(node), Inorder(rsubtree)

### Postorder &rarr; Postorder(lsubtree), Postorder(rsubtree), Visit(node)

### LevelOrder &rarr; Visit all nodes level by level
