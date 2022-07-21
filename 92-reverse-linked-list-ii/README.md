<h2><a href="https://leetcode.com/problems/reverse-linked-list-ii/">92. Reverse Linked List II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">head</code> of a singly linked list and two integers <code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code> where <code style="user-select: auto;">left &lt;= right</code>, reverse the nodes of the list from position <code style="user-select: auto;">left</code> to position <code style="user-select: auto;">right</code>, and return <em style="user-select: auto;">the reversed list</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/rev2ex2.jpg" style="width: 542px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,4,5], left = 2, right = 4
<strong style="user-select: auto;">Output:</strong> [1,4,3,2,5]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [5], left = 1, right = 1
<strong style="user-select: auto;">Output:</strong> [5]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the list is <code style="user-select: auto;">n</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-500 &lt;= Node.val &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= left &lt;= right &lt;= n</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow up:</strong> Could you do it in one pass?</div>