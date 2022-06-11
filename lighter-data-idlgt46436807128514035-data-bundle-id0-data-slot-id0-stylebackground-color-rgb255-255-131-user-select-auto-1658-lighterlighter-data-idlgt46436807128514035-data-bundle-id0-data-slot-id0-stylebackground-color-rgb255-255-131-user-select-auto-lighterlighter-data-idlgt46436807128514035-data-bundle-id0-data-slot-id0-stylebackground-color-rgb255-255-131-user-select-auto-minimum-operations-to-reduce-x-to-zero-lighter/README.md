<h2><a href="https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/"><lighter data-id="lgt46436807128514035" data-bundle-id="0" data-slot-id="0" style="background-color: rgb(255, 255, 131); user-select: auto;">1658</lighter><lighter data-id="lgt46436807128514035" data-bundle-id="0" data-slot-id="0" style="background-color: rgb(255, 255, 131); user-select: auto;">. </lighter><lighter data-id="lgt46436807128514035" data-bundle-id="0" data-slot-id="0" style="background-color: rgb(255, 255, 131); user-select: auto;">Minimum Operations to Reduce X to Zero</lighter></a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">x</code>. In one operation, you can either remove the leftmost or the rightmost element from the array <code style="user-select: auto;">nums</code> and subtract its value from <code style="user-select: auto;">x</code>. Note that this <strong style="user-select: auto;">modifies</strong> the array for future operations.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum number</strong> of operations to reduce </em><code style="user-select: auto;">x</code> <em style="user-select: auto;">to <strong style="user-select: auto;">exactly</strong></em> <code style="user-select: auto;">0</code> <em style="user-select: auto;">if it is possible</em><em style="user-select: auto;">, otherwise, return </em><code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,4,2,3], x = 5
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The optimal solution is to remove the last two elements to reduce x to zero.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,6,7,8,9], x = 4
<strong style="user-select: auto;">Output:</strong> -1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,2,20,1,1,3], x = 10
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The optimal solution is to remove the last three elements and the first two elements (5 operations in total) to reduce x to zero.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>