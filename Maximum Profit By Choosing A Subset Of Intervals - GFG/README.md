# Maximum Profit By Choosing A Subset Of Intervals
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a list&nbsp;<strong>intervals</strong>&nbsp;of&nbsp;<strong>n</strong>&nbsp;intervals, the&nbsp;<strong>ith</strong>&nbsp;element&nbsp;<strong>[s, e, p]</strong>&nbsp;denotes the starting point&nbsp;<strong>s</strong>, ending point&nbsp;<strong>e</strong>, and the profit&nbsp;<strong>p</strong>&nbsp;earned by choosing the&nbsp;<strong>ith</strong>&nbsp;interval. Find the maximum profit one can achieve by choosing a subset of non-overlapping intervals.</span></p>

<p><span style="font-size:18px">Two intervals&nbsp;<strong>[s1, e1, p1]</strong>&nbsp;and&nbsp;<strong>[s2, e2, p2]</strong>&nbsp;are said to be non-overlapping if&nbsp;<strong>[e1 &lt;= s2]</strong>&nbsp;and&nbsp;<strong>[s1 &lt; s2]</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">n = 3</span>
<span style="font-size:18px">intervals = {</span>
<span style="font-size:18px">{1, 2, 4},</span>
<span style="font-size:18px">{1, 5, 7},</span>
<span style="font-size:18px">{2, 4, 4}</span>
<span style="font-size:18px">}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">8</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">One can choose intervals [1, 2, 4] and [2, 4, 4] for a 
profit of 8.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">n = 3</span>
<span style="font-size:18px">intervals = {</span>
<span style="font-size:18px">{1, 4, 4},</span>
<span style="font-size:18px">{2, 3, 7},</span>
<span style="font-size:18px">{2, 3, 4}</span>
<span style="font-size:18px">}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">7
<strong>Explanation:
</strong>One can choose interval&nbsp;<code>[2, 3, 7]</code>&nbsp;for a profit of&nbsp;<code>7</code>.</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">You don't need to print or output anything. Complete the function <strong>maximum_profit()&nbsp;</strong>which takes an integer <strong>n&nbsp;</strong>and a 2D integer array <strong>intervals&nbsp;</strong>and returns an integer, denoting the maximum profit which one can get by choosing the non-overlapping intervals.</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= n and n &lt;= 10<sup>4</sup></span></li>
	<li><span style="font-size:18px">1 &lt;= starting point of <strong>ith</strong> interval &lt;&nbsp;ending point of <strong>ith</strong> interval &lt;= 10<sup>5</sup></span></li>
	<li><span style="font-size:18px">1 &lt;= profit earned by choosing <strong>ith</strong> interval &lt;= 10<sup>5</sup></span></li>
</ul>
</div>