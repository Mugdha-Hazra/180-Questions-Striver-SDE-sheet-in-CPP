<h2><a href="https://leetcode.com/problems/merge-sorted-array/">88. Merge Sorted Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integer arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code>, sorted in <strong style="user-select: auto;">non-decreasing order</strong>, and two integers <code style="user-select: auto;">m</code> and <code style="user-select: auto;">n</code>, representing the number of elements in <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> respectively.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Merge</strong> <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> into a single array sorted in <strong style="user-select: auto;">non-decreasing order</strong>.</p>

<p style="user-select: auto;">The final sorted array should not be returned by the function, but instead be <em style="user-select: auto;">stored inside the array </em><code style="user-select: auto;">nums1</code>. To accommodate this, <code style="user-select: auto;">nums1</code> has a length of <code style="user-select: auto;">m + n</code>, where the first <code style="user-select: auto;">m</code> elements denote the elements that should be merged, and the last <code style="user-select: auto;">n</code> elements are set to <code style="user-select: auto;">0</code> and should be ignored. <code style="user-select: auto;">nums2</code> has a length of <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
<strong style="user-select: auto;">Output:</strong> [1,2,2,3,5,6]
<strong style="user-select: auto;">Explanation:</strong> The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [<u style="user-select: auto;">1</u>,<u style="user-select: auto;">2</u>,2,<u style="user-select: auto;">3</u>,5,6] with the underlined elements coming from nums1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1], m = 1, nums2 = [], n = 0
<strong style="user-select: auto;">Output:</strong> [1]
<strong style="user-select: auto;">Explanation:</strong> The arrays we are merging are [1] and [].
The result of the merge is [1].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [0], m = 0, nums2 = [1], n = 1
<strong style="user-select: auto;">Output:</strong> [1]
<strong style="user-select: auto;">Explanation:</strong> The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">nums1.length == m + n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums2.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= m, n &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m + n &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= nums1[i], nums2[j] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up: </strong>Can you come up with an algorithm that runs in <code style="user-select: auto;">O(m + n)</code> time?</p>
</div>