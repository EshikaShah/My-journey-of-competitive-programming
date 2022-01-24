'''
Binary Tree Inorder Traversal

Given the root of a binary tree, return the inorder traversal of its nodes' values.
'''

# recursive
def inorderTraversal(root):
    def inorder(root, l):
        if root:
            l = inorder(root.left, l)
            l.append(root.val)
            l = inorder(root.right, l)
        return l
    return inorder(root, [])
  
# iterative
def inorderTraversal(root):
    res = []
    stack = []
    while True:
        while root:
            stack.append(root)
            root = root.left
        if(stack):
            root = stack.pop()
            res.append(root.val)
            root = root.right
        else:
            return res
