<h2><a href="https://leetcode.com/problems/k-inverse-pairs-array/">629. K Inverse Pairs Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">For an integer array <code style="user-select: auto;">nums</code>, an <strong style="user-select: auto;">inverse pair</strong> is a pair of integers <code style="user-select: auto;">[i, j]</code> where <code style="user-select: auto;">0 &lt;= i &lt; j &lt; nums.length</code> and <code style="user-select: auto;">nums[i] &gt; nums[j]</code>.</p>

<p style="user-select: auto;">Given two integers n and k, return the number of different arrays consist of numbers from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code> such that there are exactly <code style="user-select: auto;">k</code> <strong style="user-select: auto;">inverse pairs</strong>. Since the answer can be huge, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, k = 0
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Only the array [1,2,3] which consists of numbers from 1 to 3 has exactly 0 inverse pairs.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, k = 1
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The array [1,3,2] and [2,1,3] have exactly 1 inverse pair.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 1000</code></li>
</ul>
</div>