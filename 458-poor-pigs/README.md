<h2><a href="https://leetcode.com/problems/poor-pigs/">458. Poor Pigs</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">buckets</code> buckets of liquid, where <strong style="user-select: auto;">exactly one</strong> of the buckets is poisonous. To figure out which one is poisonous, you feed some number of (poor) pigs the liquid to see whether they will die or not. Unfortunately, you only have <code style="user-select: auto;">minutesToTest</code> minutes to determine which bucket is poisonous.</p>

<p style="user-select: auto;">You can feed the pigs according to these steps:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Choose some live pigs to feed.</li>
	<li style="user-select: auto;">For each pig, choose which buckets to feed it. The pig will consume all the chosen buckets simultaneously and will take no time.</li>
	<li style="user-select: auto;">Wait for <code style="user-select: auto;">minutesToDie</code> minutes. You may <strong style="user-select: auto;">not</strong> feed any other pigs during this time.</li>
	<li style="user-select: auto;">After <code style="user-select: auto;">minutesToDie</code> minutes have passed, any pigs that have been fed the poisonous bucket will die, and all others will survive.</li>
	<li style="user-select: auto;">Repeat this process until you run out of time.</li>
</ol>

<p style="user-select: auto;">Given <code style="user-select: auto;">buckets</code>, <code style="user-select: auto;">minutesToDie</code>, and <code style="user-select: auto;">minutesToTest</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of pigs needed to figure out which bucket is poisonous within the allotted time</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> buckets = 1000, minutesToDie = 15, minutesToTest = 60
<strong style="user-select: auto;">Output:</strong> 5
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> buckets = 4, minutesToDie = 15, minutesToTest = 15
<strong style="user-select: auto;">Output:</strong> 2
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> buckets = 4, minutesToDie = 15, minutesToTest = 30
<strong style="user-select: auto;">Output:</strong> 2
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= buckets &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;=&nbsp;minutesToDie &lt;=&nbsp;minutesToTest &lt;= 100</code></li>
</ul>
</div>