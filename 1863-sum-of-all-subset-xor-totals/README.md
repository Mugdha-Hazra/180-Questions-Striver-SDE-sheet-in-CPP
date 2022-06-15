<h2><a href="https://leetcode.com/problems/sum-of-all-subset-xor-totals/">1863. Sum of All Subset XOR Totals</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">XOR total</strong> of an array is defined as the bitwise <code style="user-select: auto;">XOR</code> of<strong style="user-select: auto;"> all its elements</strong>, or <code style="user-select: auto;">0</code> if the array is<strong style="user-select: auto;"> empty</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, the <strong style="user-select: auto;">XOR total</strong> of the array <code style="user-select: auto;">[2,5,6]</code> is <code style="user-select: auto;">2 XOR 5 XOR 6 = 1</code>.</li>
</ul>

<p style="user-select: auto;">Given an array <code style="user-select: auto;">nums</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">sum</strong> of all <strong style="user-select: auto;">XOR totals</strong> for every <strong style="user-select: auto;">subset</strong> of </em><code style="user-select: auto;">nums</code>.&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> Subsets with the <strong style="user-select: auto;">same</strong> elements should be counted <strong style="user-select: auto;">multiple</strong> times.</p>

<p style="user-select: auto;">An array <code style="user-select: auto;">a</code> is a <strong style="user-select: auto;">subset</strong> of an array <code style="user-select: auto;">b</code> if <code style="user-select: auto;">a</code> can be obtained from <code style="user-select: auto;">b</code> by deleting some (possibly zero) elements of <code style="user-select: auto;">b</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation: </strong>The 4 subsets of [1,3] are:
- The empty subset has an XOR total of 0.
- [1] has an XOR total of 1.
- [3] has an XOR total of 3.
- [1,3] has an XOR total of 1 XOR 3 = 2.
0 + 1 + 3 + 2 = 6
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,1,6]
<strong style="user-select: auto;">Output:</strong> 28
<strong style="user-select: auto;">Explanation: </strong>The 8 subsets of [5,1,6] are:
- The empty subset has an XOR total of 0.
- [5] has an XOR total of 5.
- [1] has an XOR total of 1.
- [6] has an XOR total of 6.
- [5,1] has an XOR total of 5 XOR 1 = 4.
- [5,6] has an XOR total of 5 XOR 6 = 3.
- [1,6] has an XOR total of 1 XOR 6 = 7.
- [5,1,6] has an XOR total of 5 XOR 1 XOR 6 = 2.
0 + 5 + 1 + 6 + 4 + 3 + 7 + 2 = 28
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,4,5,6,7,8]
<strong style="user-select: auto;">Output:</strong> 480
<strong style="user-select: auto;">Explanation:</strong> The sum of all XOR totals for every subset is 480.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 12</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 20</code></li>
</ul>
</div>