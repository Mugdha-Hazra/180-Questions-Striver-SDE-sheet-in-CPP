<h2><a href="https://leetcode.com/problems/number-of-1-bits/">191. Number of 1 Bits</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the <a href="http://en.wikipedia.org/wiki/Hamming_weight" target="_blank" style="user-select: auto;">Hamming weight</a>).</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Note that in some languages, such as Java, there is no unsigned integer type. In this case, the input will be given as a signed integer type. It should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.</li>
	<li style="user-select: auto;">In Java, the compiler represents the signed integers using <a href="https://en.wikipedia.org/wiki/Two%27s_complement" target="_blank" style="user-select: auto;">2's complement notation</a>. Therefore, in <strong style="user-select: auto;">Example 3</strong>, the input represents the signed integer. <code style="user-select: auto;">-3</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 00000000000000000000000000001011
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The input binary string <strong style="user-select: auto;">00000000000000000000000000001011</strong> has a total of three '1' bits.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 00000000000000000000000010000000
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The input binary string <strong style="user-select: auto;">00000000000000000000000010000000</strong> has a total of one '1' bit.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 11111111111111111111111111111101
<strong style="user-select: auto;">Output:</strong> 31
<strong style="user-select: auto;">Explanation:</strong> The input binary string <strong style="user-select: auto;">11111111111111111111111111111101</strong> has a total of thirty one '1' bits.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The input must be a <strong style="user-select: auto;">binary string</strong> of length <code style="user-select: auto;">32</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow up:</strong> If this function is called many times, how would you optimize it?</div>