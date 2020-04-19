what does it mean to flatten a tree?


Suppose you have a binary tree like so:

    a
   / \
  b   c
 / \   \
0   0   d
       / \
      0   0
Where a, b, etc. are nodes and 0 is nil. There are several possible recursive traversals of the tree:

Pre-order, visiting parents before children: a b c d

In-order, visiting parents between children: b a c d

Post-order, visiting parents after children: b d c a

A “flattening” of a tree is merely a list resulting from a traversal; your data structure is no longer nested, but flat instead. 
To flatten a tree,you may begin with an empty linked list. Then traverse the tree in the order of your choosing, 
appending each visited node to the linked list. 
I presume “the tree can be modified” means that your function may alter the tree as it builds the list,
if you find it necessary to do so.

1. <a href="https://www.geeksforgeeks.org/flatten-binary-tree-in-order-of-post-order-traversal/">flattening a binary treein order of post order traversal - geeks for geeks</a>
