<h2><a href="https://leetcode.com/problems/binary-tree-pruning/">814. Binary Tree Pruning</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree, return <em style="user-select: auto;">the same tree where every subtree (of the given tree) not containing a </em><code style="user-select: auto;">1</code><em style="user-select: auto;"> has been removed</em>.</p>

<p style="user-select: auto;">A subtree of a node <code style="user-select: auto;">node</code> is <code style="user-select: auto;">node</code> plus every node that is a descendant of <code style="user-select: auto;">node</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/06/1028_2.png" style="width: 500px; height: 140px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,null,0,0,1]
<strong style="user-select: auto;">Output:</strong> [1,null,0,null,1]
<strong style="user-select: auto;">Explanation:</strong> 
Only the red nodes satisfy the property "every subtree not containing a 1".
The diagram on the right represents the answer.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/06/1028_1.png" style="width: 500px; height: 115px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,0,1,0,0,0,1]
<strong style="user-select: auto;">Output:</strong> [1,null,1,null,1]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/05/1028.png" style="width: 500px; height: 134px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,1,0,1,1,0,1,0]
<strong style="user-select: auto;">Output:</strong> [1,1,0,1,1,null,1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 200]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">Node.val</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>