<h2><a href="https://leetcode.com/problems/peak-index-in-a-mountain-array/">852. Peak Index in a Mountain Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Let's call an array <code style="user-select: auto;">arr</code> a <strong style="user-select: auto;">mountain</strong>&nbsp;if the following properties hold:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">arr.length &gt;= 3</code></li>
	<li style="user-select: auto;">There exists some <code style="user-select: auto;">i</code> with&nbsp;<code style="user-select: auto;">0 &lt; i&nbsp;&lt; arr.length - 1</code>&nbsp;such that:
	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">arr[0] &lt; arr[1] &lt; ... arr[i-1] &lt; arr[i] </code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">arr[i] &gt; arr[i+1] &gt; ... &gt; arr[arr.length - 1]</code></li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">Given an integer array <code style="user-select: auto;">arr</code> that is <strong style="user-select: auto;">guaranteed</strong> to be&nbsp;a mountain, return any&nbsp;<code style="user-select: auto;">i</code>&nbsp;such that&nbsp;<code style="user-select: auto;">arr[0] &lt; arr[1] &lt; ... arr[i - 1] &lt; arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [0,1,0]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [0,2,1,0]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [0,10,5,2]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= arr.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">arr</code> is <strong style="user-select: auto;">guaranteed</strong> to be a mountain array.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow up:</strong> Finding the <code style="user-select: auto;">O(n)</code> is straightforward, could you find an <code style="user-select: auto;">O(log(n))</code> solution?</div>