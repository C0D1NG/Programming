class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
 
 
# A function to do inorder tree traversal
def Inorder(root):
 
    if root:
 
        # First recur on left child
        Inorder(root.left)
 
        # then print the data of node
        print(root.val),
 
        # now recur on right child
        Inorder(root.right)
 
 
 
 
# A function to do preorder tree traversal
def Preorder(root):
 
    if root:
 
        # First print the data of node
        print(root.val),
 
        # Then recur on left child
        Preorder(root.left)
 
        # Finally recur on right child
        Preorder(root.right)
# A function to do postorder tree traversal
def Postorder(root):
 
    if root:
 
        # First recur on left child
        Postorder(root.left)
 
        # the recur on right child
        Postorder(root.right)
 
        # now print the data of node
        print(root.val),
 
 
#Tree
root = Node(52)
root.left = Node(37)
root.right = Node(64)
root.left.left = Node(24)
root.left.right = Node(39)
root.right.left = Node(59)
root.right.right = Node(73)
root.left.left.left = Node(19)
root.left.left.right = Node(29)
root.right.left.left = Node(56)

print ("\nInorder traversal of binary tree is")
Inorder(root)

print ("Preorder traversal of binary tree is")
Preorder(root)
 
 
print ("\nPostorder traversal of binary tree is")
Postorder(root)