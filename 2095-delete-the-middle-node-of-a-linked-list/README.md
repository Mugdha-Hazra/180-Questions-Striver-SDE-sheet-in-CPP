<h2><a href="https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/">2095. Delete the Middle Node of a Linked List</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the <code style="user-select: auto;">head</code> of a linked list. <strong style="user-select: auto;">Delete</strong> the <strong style="user-select: auto;">middle node</strong>, and return <em style="user-select: auto;">the</em> <code style="user-select: auto;">head</code> <em style="user-select: auto;">of the modified linked list</em>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">middle node</strong> of a linked list of size <code style="user-select: auto;">n</code> is the <code style="user-select: auto;">⌊n / 2⌋<sup style="user-select: auto;">th</sup></code> node from the <b style="user-select: auto;">start</b> using <strong style="user-select: auto;">0-based indexing</strong>, where <code style="user-select: auto;">⌊x⌋</code> denotes the largest integer less than or equal to <code style="user-select: auto;">x</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For <code style="user-select: auto;">n</code> = <code style="user-select: auto;">1</code>, <code style="user-select: auto;">2</code>, <code style="user-select: auto;">3</code>, <code style="user-select: auto;">4</code>, and <code style="user-select: auto;">5</code>, the middle nodes are <code style="user-select: auto;">0</code>, <code style="user-select: auto;">1</code>, <code style="user-select: auto;">1</code>, <code style="user-select: auto;">2</code>, and <code style="user-select: auto;">2</code>, respectively.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/16/eg1drawio.png" style="width: 500px; height: 77px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,3,4,7,1,2,6]
<strong style="user-select: auto;">Output:</strong> [1,3,4,1,2,6]
<strong style="user-select: auto;">Explanation:</strong>
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/16/eg2drawio.png" style="width: 250px; height: 43px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> [1,2,4]
<strong style="user-select: auto;">Explanation:</strong>
The above figure represents the given linked list.
For n = 4, node 2 with value 3 is the middle node, which is marked in red.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/16/eg3drawio.png" style="width: 150px; height: 58px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [2,1]
<strong style="user-select: auto;">Output:</strong> [2]
<strong style="user-select: auto;">Explanation:</strong>
The above figure represents the given linked list.
For n = 2, node 1 with value 1 is the middle node, which is marked in red.
Node 0 with value 2 is the only node remaining after removing node 1.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the list is in the range <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">5</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>