<h2><a href="https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/">1239. Maximum Length of a Concatenated String with Unique Characters</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of strings <code style="user-select: auto;">arr</code>. A string <code style="user-select: auto;">s</code> is formed by the <strong style="user-select: auto;">concatenation</strong> of a <strong style="user-select: auto;">subsequence</strong> of <code style="user-select: auto;">arr</code> that has <strong style="user-select: auto;">unique characters</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> possible length</em> of <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = ["un","iq","ue"]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> All the valid concatenations are:
- ""
- "un"
- "iq"
- "ue"
- "uniq" ("un" + "iq")
- "ique" ("iq" + "ue")
Maximum length is 4.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = ["cha","r","act","ers"]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> Possible longest valid concatenations are "chaers" ("cha" + "ers") and "acters" ("act" + "ers").
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = ["abcdefghijklmnopqrstuvwxyz"]
<strong style="user-select: auto;">Output:</strong> 26
<strong style="user-select: auto;">Explanation:</strong> The only string in arr has all 26 characters.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 16</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i].length &lt;= 26</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">arr[i]</code> contains only lowercase English letters.</li>
</ul>
</div>