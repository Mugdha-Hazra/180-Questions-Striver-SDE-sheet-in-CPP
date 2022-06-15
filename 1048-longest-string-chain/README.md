<h2><a href="https://leetcode.com/problems/longest-string-chain/">1048. Longest String Chain</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of <code style="user-select: auto;">words</code> where each word consists of lowercase English letters.</p>

<p style="user-select: auto;"><code style="user-select: auto;">word<sub style="user-select: auto;">A</sub></code> is a <strong style="user-select: auto;">predecessor</strong> of <code style="user-select: auto;">word<sub style="user-select: auto;">B</sub></code> if and only if we can insert <strong style="user-select: auto;">exactly one</strong> letter anywhere in <code style="user-select: auto;">word<sub style="user-select: auto;">A</sub></code> <strong style="user-select: auto;">without changing the order of the other characters</strong> to make it equal to <code style="user-select: auto;">word<sub style="user-select: auto;">B</sub></code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"abc"</code> is a <strong style="user-select: auto;">predecessor</strong> of <code style="user-select: auto;">"ab<u style="user-select: auto;">a</u>c"</code>, while <code style="user-select: auto;">"cba"</code> is not a <strong style="user-select: auto;">predecessor</strong> of <code style="user-select: auto;">"bcad"</code>.</li>
</ul>

<p style="user-select: auto;">A <strong style="user-select: auto;">word chain</strong><em style="user-select: auto;"> </em>is a sequence of words <code style="user-select: auto;">[word<sub style="user-select: auto;">1</sub>, word<sub style="user-select: auto;">2</sub>, ..., word<sub style="user-select: auto;">k</sub>]</code> with <code style="user-select: auto;">k &gt;= 1</code>, where <code style="user-select: auto;">word<sub style="user-select: auto;">1</sub></code> is a <strong style="user-select: auto;">predecessor</strong> of <code style="user-select: auto;">word<sub style="user-select: auto;">2</sub></code>, <code style="user-select: auto;">word<sub style="user-select: auto;">2</sub></code> is a <strong style="user-select: auto;">predecessor</strong> of <code style="user-select: auto;">word<sub style="user-select: auto;">3</sub></code>, and so on. A single word is trivially a <strong style="user-select: auto;">word chain</strong> with <code style="user-select: auto;">k == 1</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">length</strong> of the <strong style="user-select: auto;">longest possible word chain</strong> with words chosen from the given list of </em><code style="user-select: auto;">words</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["a","b","ba","bca","bda","bdca"]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation</strong>: One of the longest word chains is ["a","<u style="user-select: auto;">b</u>a","b<u style="user-select: auto;">d</u>a","bd<u style="user-select: auto;">c</u>a"].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["xbc","pcxbcf","xb","cxbc","pcxbc"]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> All the words can be put in a word chain ["xb", "xb<u style="user-select: auto;">c</u>", "<u style="user-select: auto;">c</u>xbc", "<u style="user-select: auto;">p</u>cxbc", "pcxbc<u style="user-select: auto;">f</u>"].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["abcd","dbqca"]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The trivial word chain ["abcd"] is one of the longest word chains.
["abcd","dbqca"] is not a valid word chain because the ordering of the letters is changed.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 16</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> only consists of lowercase English letters.</li>
</ul>
</div>