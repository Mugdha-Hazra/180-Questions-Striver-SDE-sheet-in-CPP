<h2><a href="https://leetcode.com/problems/n-ary-tree-level-order-traversal/">429. N-ary Tree Level Order Traversal</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an n-ary tree, return the <em style="user-select: auto;">level order</em> traversal of its nodes' values.</p>

<p style="user-select: auto;"><em style="user-select: auto;">Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><img src="https://assets.leetcode.com/uploads/2018/10/12/narytreeexample.png" style="width: 100%; max-width: 300px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,null,3,2,4,null,5,6]
<strong style="user-select: auto;">Output:</strong> [[1],[3,2,4],[5,6]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2019/11/08/sample_4_964.png" style="width: 296px; height: 241px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
<strong style="user-select: auto;">Output:</strong> [[1],[2,3,4,5],[6,7,8,9,10],[11,12,13],[14]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The height of the n-ary tree is less than or equal to <code style="user-select: auto;">1000</code></li>
	<li style="user-select: auto;">The total number of nodes is between <code style="user-select: auto;">[0, 10<sup style="user-select: auto;">4</sup>]</code></li>
</ul>
</div>