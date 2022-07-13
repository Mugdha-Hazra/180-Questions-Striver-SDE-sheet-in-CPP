<h2><a href="https://leetcode.com/problems/happy-number/">202. Happy Number</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Write an algorithm to determine if a number <code style="user-select: auto;">n</code> is happy.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">happy number</strong> is a number defined by the following process:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Starting with any positive integer, replace the number by the sum of the squares of its digits.</li>
	<li style="user-select: auto;">Repeat the process until the number equals 1 (where it will stay), or it <strong style="user-select: auto;">loops endlessly in a cycle</strong> which does not include 1.</li>
	<li style="user-select: auto;">Those numbers for which this process <strong style="user-select: auto;">ends in 1</strong> are happy.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if</em> <code style="user-select: auto;">n</code> <em style="user-select: auto;">is a happy number, and</em> <code style="user-select: auto;">false</code> <em style="user-select: auto;">if not</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 19
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong>
1<sup style="user-select: auto;">2</sup> + 9<sup style="user-select: auto;">2</sup> = 82
8<sup style="user-select: auto;">2</sup> + 2<sup style="user-select: auto;">2</sup> = 68
6<sup style="user-select: auto;">2</sup> + 8<sup style="user-select: auto;">2</sup> = 100
1<sup style="user-select: auto;">2</sup> + 0<sup style="user-select: auto;">2</sup> + 0<sup style="user-select: auto;">2</sup> = 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
</ul>
</div>