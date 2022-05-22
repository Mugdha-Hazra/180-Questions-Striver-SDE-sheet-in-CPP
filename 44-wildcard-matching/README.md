<h2><a href="https://leetcode.com/problems/wildcard-matching/">44. Wildcard Matching</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an input string (<code style="user-select: auto;">s</code>) and a pattern (<code style="user-select: auto;">p</code>), implement wildcard pattern matching with support for <code style="user-select: auto;">'?'</code> and <code style="user-select: auto;">'*'</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">'?'</code> Matches any single character.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'*'</code> Matches any sequence of characters (including the empty sequence).</li>
</ul>

<p style="user-select: auto;">The matching should cover the <strong style="user-select: auto;">entire</strong> input string (not partial).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aa", p = "a"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> "a" does not match the entire string "aa".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aa", p = "*"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong>&nbsp;'*' matches any sequence.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "cb", p = "?a"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong>&nbsp;'?' matches 'c', but the second letter is 'a', which does not match 'b'.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= s.length, p.length &lt;= 2000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> contains only lowercase English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">p</code> contains only lowercase English letters, <code style="user-select: auto;">'?'</code> or <code style="user-select: auto;">'*'</code>.</li>
</ul>
</div>