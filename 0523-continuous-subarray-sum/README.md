<h2><a href="https://leetcode.com/problems/continuous-subarray-sum/">523. Continuous Subarray Sum</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> has a continuous subarray of size <strong style="user-select: auto;">at least two</strong> whose elements sum up to a multiple of</em> <code style="user-select: auto;">k</code><em style="user-select: auto;">, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">An integer <code style="user-select: auto;">x</code> is a multiple of <code style="user-select: auto;">k</code> if there exists an integer <code style="user-select: auto;">n</code> such that <code style="user-select: auto;">x = n * k</code>. <code style="user-select: auto;">0</code> is <strong style="user-select: auto;">always</strong> a multiple of <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [23,<u style="user-select: auto;">2,4</u>,6,7], k = 6
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [<u style="user-select: auto;">23,2,6,4,7</u>], k = 6
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> [23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [23,2,6,4,7], k = 13
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= sum(nums[i]) &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
</ul>
</div>