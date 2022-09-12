<h2><a href="https://leetcode.com/problems/implement-rand10-using-rand7/">470. Implement Rand10() Using Rand7()</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <strong style="user-select: auto;">API</strong> <code style="user-select: auto;">rand7()</code> that generates a uniform random integer in the range <code style="user-select: auto;">[1, 7]</code>, write a function <code style="user-select: auto;">rand10()</code> that generates a uniform random integer in the range <code style="user-select: auto;">[1, 10]</code>. You can only call the API <code style="user-select: auto;">rand7()</code>, and you shouldn't call any other API. Please <strong style="user-select: auto;">do not</strong> use a language's built-in random API.</p>

<p style="user-select: auto;">Each test case will have one <strong style="user-select: auto;">internal</strong> argument <code style="user-select: auto;">n</code>, the number of times that your implemented function <code style="user-select: auto;">rand10()</code> will be called while testing. Note that this is <strong style="user-select: auto;">not an argument</strong> passed to <code style="user-select: auto;">rand10()</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> [2]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> [2,8]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3
<strong style="user-select: auto;">Output:</strong> [3,8,10]
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">What is the <a href="https://en.wikipedia.org/wiki/Expected_value" target="_blank" style="user-select: auto;">expected value</a> for the number of calls to <code style="user-select: auto;">rand7()</code> function?</li>
	<li style="user-select: auto;">Could you minimize the number of calls to <code style="user-select: auto;">rand7()</code>?</li>
</ul>
</div>