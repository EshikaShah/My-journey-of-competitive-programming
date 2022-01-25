'''
Binary Tree Preorder Traversal

Given the root of a binary tree, return the preorder traversal of its nodes' values.
'''

# recursive
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def preorder(root, l):
            if root:
                l.append(root.val)
                l = preorder(root.left, l)
                l = preorder(root.right, l)
            return l
        return preorder(root, [])

# iterative - 1
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        stack = []
        res = []
        while(len(stack) or root!=None):
            while(root):
                res.append(root.val)
                if(root.right):
                    stack.append(root.right)
                root = root.left
            if(len(stack)>0):
                root = stack[-1]
                stack.pop()
        return res

# iterative - 2
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        stack = [root]
        res = []
        while stack:
            root = stack.pop()
            if(root):
                res.append(root.val)
                stack.append(root.right)
                stack.append(root.left)
        return res
