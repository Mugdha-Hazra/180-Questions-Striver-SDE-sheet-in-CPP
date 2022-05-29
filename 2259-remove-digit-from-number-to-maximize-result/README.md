<h2><a href="https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/">2259. Remove Digit From Number to Maximize Result</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">number</code> representing a <strong style="user-select: auto;">positive integer</strong> and a character <code style="user-select: auto;">digit</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the resulting string after removing <strong style="user-select: auto;">exactly one occurrence</strong> of </em><code style="user-select: auto;">digit</code><em style="user-select: auto;"> from </em><code style="user-select: auto;">number</code><em style="user-select: auto;"> such that the value of the resulting string in <strong style="user-select: auto;">decimal</strong> form is <strong style="user-select: auto;">maximized</strong></em>. The test cases are generated such that <code style="user-select: auto;">digit</code> occurs at least once in <code style="user-select: auto;">number</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> number = "123", digit = "3"
<strong style="user-select: auto;">Output:</strong> "12"
<strong style="user-select: auto;">Explanation:</strong> There is only one '3' in "123". After removing '3', the result is "12".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> number = "1231", digit = "1"
<strong style="user-select: auto;">Output:</strong> "231"
<strong style="user-select: auto;">Explanation:</strong> We can remove the first '1' to get "231" or remove the second '1' to get "123".
Since 231 &gt; 123, we return "231".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> number = "551", digit = "5"
<strong style="user-select: auto;">Output:</strong> "51"
<strong style="user-select: auto;">Explanation:</strong> We can remove either the first or second '5' from "551".
Both result in the string "51".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= number.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">number</code> consists of digits from <code style="user-select: auto;">'1'</code> to <code style="user-select: auto;">'9'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">digit</code> is a digit from <code style="user-select: auto;">'1'</code> to <code style="user-select: auto;">'9'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">digit</code> occurs at least once in <code style="user-select: auto;">number</code>.</li>
</ul>
</div>