<h2><a href="https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/">1423. Maximum Points You Can Obtain from Cards</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are several cards <strong style="user-select: auto;">arranged in a row</strong>, and each card has an associated number of points. The points are given in the integer array <code style="user-select: auto;">cardPoints</code>.</p>

<p style="user-select: auto;">In one step, you can take one card from the beginning or from the end of the row. You have to take exactly <code style="user-select: auto;">k</code> cards.</p>

<p style="user-select: auto;">Your score is the sum of the points of the cards you have taken.</p>

<p style="user-select: auto;">Given the integer array <code style="user-select: auto;">cardPoints</code> and the integer <code style="user-select: auto;">k</code>, return the <em style="user-select: auto;">maximum score</em> you can obtain.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cardPoints = [1,2,3,4,5,6,1], k = 3
<strong style="user-select: auto;">Output:</strong> 12
<strong style="user-select: auto;">Explanation:</strong> After the first step, your score will always be 1. However, choosing the rightmost card first will maximize your total score. The optimal strategy is to take the three cards on the right, giving a final score of 1 + 6 + 5 = 12.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cardPoints = [2,2,2], k = 2
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> Regardless of which two cards you take, your score will always be 4.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cardPoints = [9,7,7,9,7,7,9], k = 7
<strong style="user-select: auto;">Output:</strong> 55
<strong style="user-select: auto;">Explanation:</strong> You have to take all the cards. Your score is the sum of points of all cards.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= cardPoints.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= cardPoints[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= cardPoints.length</code></li>
</ul>
</div>