<h2><a href="https://leetcode.com/problems/decode-xored-array/">1720. Decode XORed Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a <strong style="user-select: auto;">hidden</strong> integer array <code style="user-select: auto;">arr</code> that consists of <code style="user-select: auto;">n</code> non-negative integers.</p>

<p style="user-select: auto;">It was encoded into another integer array <code style="user-select: auto;">encoded</code> of length <code style="user-select: auto;">n - 1</code>, such that <code style="user-select: auto;">encoded[i] = arr[i] XOR arr[i + 1]</code>. For example, if <code style="user-select: auto;">arr = [1,0,2,1]</code>, then <code style="user-select: auto;">encoded = [1,2,3]</code>.</p>

<p style="user-select: auto;">You are given the <code style="user-select: auto;">encoded</code> array. You are also given an integer <code style="user-select: auto;">first</code>, that is the first element of <code style="user-select: auto;">arr</code>, i.e. <code style="user-select: auto;">arr[0]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the original array</em> <code style="user-select: auto;">arr</code>. It can be proved that the answer exists and is unique.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> encoded = [1,2,3], first = 1
<strong style="user-select: auto;">Output:</strong> [1,0,2,1]
<strong style="user-select: auto;">Explanation:</strong> If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> encoded = [6,2,7,3], first = 4
<strong style="user-select: auto;">Output:</strong> [4,2,0,7,4]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">encoded.length == n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= encoded[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= first &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>