<h2><a href="https://leetcode.com/problems/fizz-buzz/">412. Fizz Buzz</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">a string array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;"> (<strong style="user-select: auto;">1-indexed</strong>) where</em>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">answer[i] == "FizzBuzz"</code> if <code style="user-select: auto;">i</code> is divisible by <code style="user-select: auto;">3</code> and <code style="user-select: auto;">5</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">answer[i] == "Fizz"</code> if <code style="user-select: auto;">i</code> is divisible by <code style="user-select: auto;">3</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">answer[i] == "Buzz"</code> if <code style="user-select: auto;">i</code> is divisible by <code style="user-select: auto;">5</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">answer[i] == i</code> (as a string) if none of the above conditions are true.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3
<strong style="user-select: auto;">Output:</strong> ["1","2","Fizz"]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5
<strong style="user-select: auto;">Output:</strong> ["1","2","Fizz","4","Buzz"]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 15
<strong style="user-select: auto;">Output:</strong> ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>