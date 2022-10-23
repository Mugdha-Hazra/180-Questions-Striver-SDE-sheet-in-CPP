<h2><a href="https://leetcode.com/problems/set-mismatch/">645. Set Mismatch</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a set of integers <code style="user-select: auto;">s</code>, which originally contains all the numbers from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>. Unfortunately, due to some error, one of the numbers in <code style="user-select: auto;">s</code> got duplicated to another number in the set, which results in <strong style="user-select: auto;">repetition of one</strong> number and <strong style="user-select: auto;">loss of another</strong> number.</p>

<p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> representing the data status of this set after the error.</p>

<p style="user-select: auto;">Find the number that occurs twice and the number that is missing and return <em style="user-select: auto;">them in the form of an array</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,2,4]
<strong style="user-select: auto;">Output:</strong> [2,3]
</pre><p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1]
<strong style="user-select: auto;">Output:</strong> [1,2]
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>