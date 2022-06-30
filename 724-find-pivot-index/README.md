<h2><a href="https://leetcode.com/problems/find-pivot-index/">724. Find Pivot Index</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">nums</code>, calculate the <strong style="user-select: auto;">pivot index</strong> of this array.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">pivot index</strong> is the index where the sum of all the numbers <strong style="user-select: auto;">strictly</strong> to the left of the index is equal to the sum of all the numbers <strong style="user-select: auto;">strictly</strong> to the index's right.</p>

<p style="user-select: auto;">If the index is on the left edge of the array, then the left sum is <code style="user-select: auto;">0</code> because there are no elements to the left. This also applies to the right edge of the array.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">leftmost pivot index</strong></em>. If no such index exists, return -1.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,7,3,6,5,6]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong>
There is no index that satisfies the conditions in the problem statement.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,-1]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= nums[i] &lt;= 1000</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> This question is the same as&nbsp;1991:&nbsp;<a href="https://leetcode.com/problems/find-the-middle-index-in-array/" target="_blank" style="user-select: auto;">https://leetcode.com/problems/find-the-middle-index-in-array/</a></p>
</div>