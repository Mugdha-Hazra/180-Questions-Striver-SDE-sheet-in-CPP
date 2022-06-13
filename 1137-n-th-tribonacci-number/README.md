<h2><a href="https://leetcode.com/problems/n-th-tribonacci-number/">1137. N-th Tribonacci Number</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The Tribonacci sequence T<sub style="user-select: auto;">n</sub> is defined as follows:&nbsp;</p>

<p style="user-select: auto;">T<sub style="user-select: auto;">0</sub> = 0, T<sub style="user-select: auto;">1</sub> = 1, T<sub style="user-select: auto;">2</sub> = 1, and T<sub style="user-select: auto;">n+3</sub> = T<sub style="user-select: auto;">n</sub> + T<sub style="user-select: auto;">n+1</sub> + T<sub style="user-select: auto;">n+2</sub> for n &gt;= 0.</p>

<p style="user-select: auto;">Given <code style="user-select: auto;">n</code>, return the value of T<sub style="user-select: auto;">n</sub>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 25
<strong style="user-select: auto;">Output:</strong> 1389537
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= n &lt;= 37</code></li>
	<li style="user-select: auto;">The answer is guaranteed to fit within a 32-bit integer, ie. <code style="user-select: auto;">answer &lt;= 2^31 - 1</code>.</li>
</ul></div>