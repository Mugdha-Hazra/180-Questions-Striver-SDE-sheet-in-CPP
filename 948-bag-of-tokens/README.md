<h2><a href="https://leetcode.com/problems/bag-of-tokens/">948. Bag of Tokens</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have an initial <strong style="user-select: auto;">power</strong> of <code style="user-select: auto;">power</code>, an initial <strong style="user-select: auto;">score</strong> of <code style="user-select: auto;">0</code>, and a bag of <code style="user-select: auto;">tokens</code> where <code style="user-select: auto;">tokens[i]</code> is the value of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> token (0-indexed).</p>

<p style="user-select: auto;">Your goal is to maximize your total <strong style="user-select: auto;">score</strong> by potentially playing each token in one of two ways:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If your current <strong style="user-select: auto;">power</strong> is at least <code style="user-select: auto;">tokens[i]</code>, you may play the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> token face up, losing <code style="user-select: auto;">tokens[i]</code> <strong style="user-select: auto;">power</strong> and gaining <code style="user-select: auto;">1</code> <strong style="user-select: auto;">score</strong>.</li>
	<li style="user-select: auto;">If your current <strong style="user-select: auto;">score</strong> is at least <code style="user-select: auto;">1</code>, you may play the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> token face down, gaining <code style="user-select: auto;">tokens[i]</code> <strong style="user-select: auto;">power</strong> and losing <code style="user-select: auto;">1</code> <strong style="user-select: auto;">score</strong>.</li>
</ul>

<p style="user-select: auto;">Each token may be played <strong style="user-select: auto;">at most</strong> once and <strong style="user-select: auto;">in any order</strong>. You do <strong style="user-select: auto;">not</strong> have to play all the tokens.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the largest possible <strong style="user-select: auto;">score</strong> you can achieve after playing any number of tokens</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tokens = [100], power = 50
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation</strong><strong style="user-select: auto;">:</strong> Playing the only token in the bag is impossible because you either have too little power or too little score.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tokens = [100,200], power = 150
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Play the 0<sup style="user-select: auto;">th</sup> token (100) face up, your power becomes 50 and score becomes 1.
There is no need to play the 1<sup style="user-select: auto;">st</sup> token since you cannot play it face up to add to your score.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tokens = [100,200,300,400], power = 200
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Play the tokens in this order to get a score of 2:
1. Play the 0<sup style="user-select: auto;">th</sup> token (100) face up, your power becomes 100 and score becomes 1.
2. Play the 3<sup style="user-select: auto;">rd</sup> token (400) face down, your power becomes 500 and score becomes 0.
3. Play the 1<sup style="user-select: auto;">st</sup> token (200) face up, your power becomes 300 and score becomes 1.
4. Play the 2<sup style="user-select: auto;">nd </sup>token (300) face up, your power becomes 0 and score becomes 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= tokens.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= tokens[i],&nbsp;power &lt; 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>