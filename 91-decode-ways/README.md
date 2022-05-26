<h2><a href="https://leetcode.com/problems/decode-ways/">91. Decode Ways</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A message containing letters from <code style="user-select: auto;">A-Z</code> can be <strong style="user-select: auto;">encoded</strong> into numbers using the following mapping:</p>

<pre style="user-select: auto;">'A' -&gt; "1"
'B' -&gt; "2"
...
'Z' -&gt; "26"
</pre>

<p style="user-select: auto;">To <strong style="user-select: auto;">decode</strong> an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, <code style="user-select: auto;">"11106"</code> can be mapped into:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"AAJF"</code> with the grouping <code style="user-select: auto;">(1 1 10 6)</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">"KJF"</code> with the grouping <code style="user-select: auto;">(11 10 6)</code></li>
</ul>

<p style="user-select: auto;">Note that the grouping <code style="user-select: auto;">(1 11 06)</code> is invalid because <code style="user-select: auto;">"06"</code> cannot be mapped into <code style="user-select: auto;">'F'</code> since <code style="user-select: auto;">"6"</code> is different from <code style="user-select: auto;">"06"</code>.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> containing only digits, return <em style="user-select: auto;">the <strong style="user-select: auto;">number</strong> of ways to <strong style="user-select: auto;">decode</strong> it</em>.</p>

<p style="user-select: auto;">The test cases are generated so that the answer fits in a <strong style="user-select: auto;">32-bit</strong> integer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "12"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> "12" could be decoded as "AB" (1 2) or "L" (12).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "226"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> "226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "06"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> "06" cannot be mapped to "F" because of the leading zero ("6" is different from "06").
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> contains only digits and may contain leading zero(s).</li>
</ul>
</div>