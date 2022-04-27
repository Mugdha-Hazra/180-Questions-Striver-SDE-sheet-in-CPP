<h2><a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock/">121. Best Time to Buy and Sell Stock</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">prices</code> where <code style="user-select: auto;">prices[i]</code> is the price of a given stock on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> day.</p>

<p style="user-select: auto;">You want to maximize your profit by choosing a <strong style="user-select: auto;">single day</strong> to buy one stock and choosing a <strong style="user-select: auto;">different day in the future</strong> to sell that stock.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum profit you can achieve from this transaction</em>. If you cannot achieve any profit, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> prices = [7,1,5,3,6,4]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> prices = [7,6,4,3,1]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> In this case, no transactions are done and the max profit = 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= prices.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= prices[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>