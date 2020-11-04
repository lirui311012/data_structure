/*
BST :Binary Search/Sort Tree二叉搜索树，也叫二叉排序树，它或者是一颗空树，或者是具有如下列性质的二叉树：
1.若左子树不为空，则左子树上所有节点的值均小于它的根节点的值
2.若右子树不为空，则右子树上所有节点的值均大于它的根节点的值
3.左右子树也分别满足二叉搜索树的性质。

特点：每一个节点都满足 左孩子的值(不为空) < 父节点的值 < 右孩子的值(不为空)

实现：
BST树插入，删除，查询操作，递归和非递归实现
BST树前序，中序，后序，层序遍历的递归和非递归实现
BST求树的高度，节点元素个数
BST树区间元素查找
判断二叉树是否是一颗BST树
BST求子树问题
BST的LCA问题：求寻找最近公共祖先节点
BST树的镜像反转问题
已知BST树的前序遍历和中序遍历，重建BST树
判断一颗BST树是否是平衡树
求BST树中序遍历倒数第K个节点
*/

/*
相关概念：
根节点
左孩子
右孩子
双亲节点-父节点
祖先节点
兄弟节点
叔叔节点
叶子节点
根节点root没有父亲
叶子节点没有孩子
左子树
右子树
二叉树的高度/层数

满二叉树节层数L 和 元素个数 N的关系是：
2^0 + 2^1 + 2^2 +......+2^(L-1) = N
2^L -1 = N
n^L = N+1
L = log(N)

二分搜索算法实际上就是在逻辑上搜索一颗BST树，所以二分搜索算法的时间复杂度是O(logn)
*/