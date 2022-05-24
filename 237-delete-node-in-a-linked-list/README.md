<h2><a href="https://leetcode.com/problems/delete-node-in-a-linked-list/">237. Delete Node in a Linked List</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Write a function to <strong style="user-select: auto;">delete a node</strong> in a singly-linked list. You will <strong style="user-select: auto;">not</strong> be given access to the <code style="user-select: auto;">head</code> of the list, instead you will be given access to <strong style="user-select: auto;">the node to be deleted</strong> directly.</p>

<p style="user-select: auto;">It is <strong style="user-select: auto;">guaranteed</strong> that the node to be deleted is <strong style="user-select: auto;">not a tail node</strong> in the list.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/node1.jpg" style="width: 300px; height: 215px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [4,5,1,9], node = 5
<strong style="user-select: auto;">Output:</strong> [4,1,9]
<strong style="user-select: auto;">Explanation: </strong>You are given the second node with value 5, the linked list should become 4 -&gt; 1 -&gt; 9 after calling your function.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/node2.jpg" style="width: 300px; height: 236px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [4,5,1,9], node = 1
<strong style="user-select: auto;">Output:</strong> [4,5,9]
<strong style="user-select: auto;">Explanation: </strong>You are given the third node with value 1, the linked list should become 4 -&gt; 5 -&gt; 9 after calling your function.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of the nodes in the given list is in the range <code style="user-select: auto;">[2, 1000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= Node.val &lt;= 1000</code></li>
	<li style="user-select: auto;">The value of each node in the list is <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">The <code style="user-select: auto;">node</code> to be deleted is <strong style="user-select: auto;">in the list</strong> and is <strong style="user-select: auto;">not a tail</strong> node</li>
</ul>
</div>