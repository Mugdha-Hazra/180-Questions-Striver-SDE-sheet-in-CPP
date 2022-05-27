<h2><a href="https://leetcode.com/problems/goal-parser-interpretation/">1678. Goal Parser Interpretation</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You own a <strong style="user-select: auto;">Goal Parser</strong> that can interpret a string <code style="user-select: auto;">command</code>. The <code style="user-select: auto;">command</code> consists of an alphabet of <code style="user-select: auto;">"G"</code>, <code style="user-select: auto;">"()"</code> and/or <code style="user-select: auto;">"(al)"</code> in some order. The Goal Parser will interpret <code style="user-select: auto;">"G"</code> as the string <code style="user-select: auto;">"G"</code>, <code style="user-select: auto;">"()"</code> as the string <code style="user-select: auto;">"o"</code>, and <code style="user-select: auto;">"(al)"</code> as the string <code style="user-select: auto;">"al"</code>. The interpreted strings are then concatenated in the original order.</p>

<p style="user-select: auto;">Given the string <code style="user-select: auto;">command</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">Goal Parser</strong>'s interpretation of </em><code style="user-select: auto;">command</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> command = "G()(al)"
<strong style="user-select: auto;">Output:</strong> "Goal"
<strong style="user-select: auto;">Explanation:</strong>&nbsp;The Goal Parser interprets the command as follows:
G -&gt; G
() -&gt; o
(al) -&gt; al
The final concatenated result is "Goal".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> command = "G()()()()(al)"
<strong style="user-select: auto;">Output:</strong> "Gooooal"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> command = "(al)G(al)()()G"
<strong style="user-select: auto;">Output:</strong> "alGalooG"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= command.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">command</code> consists of <code style="user-select: auto;">"G"</code>, <code style="user-select: auto;">"()"</code>, and/or <code style="user-select: auto;">"(al)"</code> in some order.</li>
</ul>
</div>