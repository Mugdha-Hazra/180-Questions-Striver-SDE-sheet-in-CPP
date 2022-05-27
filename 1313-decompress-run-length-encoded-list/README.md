<h2><a href="https://leetcode.com/problems/decompress-run-length-encoded-list/">1313. Decompress Run-Length Encoded List</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">We are given a list <code style="user-select: auto;">nums</code> of integers representing a list compressed with run-length encoding.</p>

<p style="user-select: auto;">Consider each adjacent pair&nbsp;of elements <code style="user-select: auto;">[freq, val] = [nums[2*i], nums[2*i+1]]</code>&nbsp;(with <code style="user-select: auto;">i &gt;= 0</code>).&nbsp; For each such pair, there are <code style="user-select: auto;">freq</code> elements with value <code style="user-select: auto;">val</code> concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.</p>

<p style="user-select: auto;">Return the decompressed list.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> [2,4,4,4]
<strong style="user-select: auto;">Explanation:</strong> The first pair [1,2] means we have freq = 1 and val = 2 so we generate the array [2].
The second pair [3,4] means we have freq = 3 and val = 4 so we generate [4,4,4].
At the end the concatenation [2] + [4,4,4] is [2,4,4,4].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,2,3]
<strong style="user-select: auto;">Output:</strong> [1,3,3]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length % 2 == 0</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;"><font face="monospace" style="user-select: auto;">1 &lt;= nums[i] &lt;= 100</font></code></li>
</ul>
</div>