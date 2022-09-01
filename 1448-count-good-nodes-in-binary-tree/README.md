<h2><a href="https://leetcode.com/problems/count-good-nodes-in-binary-tree/">1448. Count Good Nodes in Binary Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a binary tree <code style="user-select: auto;">root</code>, a node <em style="user-select: auto;">X</em> in the tree is named&nbsp;<strong style="user-select: auto;">good</strong> if in the path from root to <em style="user-select: auto;">X</em> there are no nodes with a value <em style="user-select: auto;">greater than</em> X.</p>

<p style="user-select: auto;">Return the number of <strong style="user-select: auto;">good</strong> nodes in the binary tree.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/04/02/test_sample_1.png" style="width: 263px; height: 156px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [3,1,4,3,null,1,5]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> Nodes in blue are <strong style="user-select: auto;">good</strong>.
Root Node (3) is always a good node.
Node 4 -&gt; (3,4) is the maximum value in the path starting from the root.
Node 5 -&gt; (3,4,5) is the maximum value in the path
Node 3 -&gt; (3,1,3) is the maximum value in the path.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/04/02/test_sample_2.png" style="width: 157px; height: 161px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [3,3,null,4,2]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Node 2 -&gt; (3, 3, 2) is not good, because "3" is higher than it.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Root is considered as <strong style="user-select: auto;">good</strong>.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the binary tree is in the range&nbsp;<code style="user-select: auto;">[1, 10^5]</code>.</li>
	<li style="user-select: auto;">Each node's value is between <code style="user-select: auto;">[-10^4, 10^4]</code>.</li>
</ul></div>