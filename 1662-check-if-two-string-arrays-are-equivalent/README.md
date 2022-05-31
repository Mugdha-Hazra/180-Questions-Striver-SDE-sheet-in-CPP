<h2><a href="https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/">1662. Check If Two String Arrays are Equivalent</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two string arrays <code style="user-select: auto;">word1</code> and <code style="user-select: auto;">word2</code>, return<em style="user-select: auto;"> </em><code style="user-select: auto;">true</code><em style="user-select: auto;"> if the two arrays <strong style="user-select: auto;">represent</strong> the same string, and </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise.</em></p>

<p style="user-select: auto;">A string is <strong style="user-select: auto;">represented</strong> by an array if the array elements concatenated <strong style="user-select: auto;">in order</strong> forms the string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = ["ab", "c"], word2 = ["a", "bc"]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong>
word1 represents string "ab" + "c" -&gt; "abc"
word2 represents string "a" + "bc" -&gt; "abc"
The strings are the same, so return true.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = ["a", "cb"], word2 = ["ab", "c"]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word1.length, word2.length &lt;= 10<sup style="user-select: auto;">3</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word1[i].length, word2[i].length &lt;= 10<sup style="user-select: auto;">3</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sum(word1[i].length), sum(word2[i].length) &lt;= 10<sup style="user-select: auto;">3</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word1[i]</code> and <code style="user-select: auto;">word2[i]</code> consist of lowercase letters.</li>
</ul>
</div>