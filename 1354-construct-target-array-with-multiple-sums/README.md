<h2><a href="https://leetcode.com/problems/construct-target-array-with-multiple-sums/">1354. Construct Target Array With Multiple Sums</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">target</code> of n integers. From a starting array <code style="user-select: auto;">arr</code> consisting of <code style="user-select: auto;">n</code> 1's, you may perform the following procedure :</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">let <code style="user-select: auto;">x</code> be the sum of all elements currently in your array.</li>
	<li style="user-select: auto;">choose index <code style="user-select: auto;">i</code>, such that <code style="user-select: auto;">0 &lt;= i &lt; n</code> and set the value of <code style="user-select: auto;">arr</code> at index <code style="user-select: auto;">i</code> to <code style="user-select: auto;">x</code>.</li>
	<li style="user-select: auto;">You may repeat this procedure as many times as needed.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if it is possible to construct the</em> <code style="user-select: auto;">target</code> <em style="user-select: auto;">array from</em> <code style="user-select: auto;">arr</code><em style="user-select: auto;">, otherwise, return</em> <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [9,3,5]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Start with arr = [1, 1, 1] 
[1, 1, 1], sum = 3 choose index 1
[1, 3, 1], sum = 5 choose index 2
[1, 3, 5], sum = 9 choose index 0
[9, 3, 5] Done
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [1,1,1,2]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> Impossible to create target array from [1,1,1,1].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [8,5]
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == target.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>