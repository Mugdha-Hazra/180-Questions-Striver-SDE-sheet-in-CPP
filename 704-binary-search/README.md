<h2><a href="https://leetcode.com/problems/binary-search/">704. Binary Search</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">nums</code> which is sorted in ascending order, and an integer <code style="user-select: auto;">target</code>, write a function to search <code style="user-select: auto;">target</code> in <code style="user-select: auto;">nums</code>. If <code style="user-select: auto;">target</code> exists, then return its index. Otherwise, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">You must write an algorithm with <code style="user-select: auto;">O(log n)</code> runtime complexity.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1,0,3,5,9,12], target = 9
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 9 exists in nums and its index is 4
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1,0,3,5,9,12], target = 2
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> 2 does not exist in nums so return -1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt; nums[i], target &lt; 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">All the integers in <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is sorted in ascending order.</li>
</ul>
</div>