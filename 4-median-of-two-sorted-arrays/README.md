<h2><a href="https://leetcode.com/problems/median-of-two-sorted-arrays/">4. Median of Two Sorted Arrays</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two sorted arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> of size <code style="user-select: auto;">m</code> and <code style="user-select: auto;">n</code> respectively, return <strong style="user-select: auto;">the median</strong> of the two sorted arrays.</p>

<p style="user-select: auto;">The overall run time complexity should be <code style="user-select: auto;">O(log (m+n))</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,3], nums2 = [2]
<strong style="user-select: auto;">Output:</strong> 2.00000
<strong style="user-select: auto;">Explanation:</strong> merged array = [1,2,3] and median is 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,2], nums2 = [3,4]
<strong style="user-select: auto;">Output:</strong> 2.50000
<strong style="user-select: auto;">Explanation:</strong> merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">nums1.length == m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums2.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= m &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m + n &lt;= 2000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">6</sup> &lt;= nums1[i], nums2[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>