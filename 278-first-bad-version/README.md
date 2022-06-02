<h2><a href="https://leetcode.com/problems/first-bad-version/">278. First Bad Version</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.</p>

<p style="user-select: auto;">Suppose you have <code style="user-select: auto;">n</code> versions <code style="user-select: auto;">[1, 2, ..., n]</code> and you want to find out the first bad one, which causes all the following ones to be bad.</p>

<p style="user-select: auto;">You are given an API <code style="user-select: auto;">bool isBadVersion(version)</code> which returns whether <code style="user-select: auto;">version</code> is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, bad = 4
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>
call isBadVersion(3) -&gt; false
call isBadVersion(5)&nbsp;-&gt; true
call isBadVersion(4)&nbsp;-&gt; true
Then 4 is the first bad version.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, bad = 1
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= bad &lt;= n &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
</ul>
</div>