<h2><a href="https://leetcode.com/problems/reverse-bits/">190. Reverse Bits</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Reverse bits of a given 32 bits unsigned integer.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.</li>
	<li style="user-select: auto;">In Java, the compiler represents the signed integers using <a href="https://en.wikipedia.org/wiki/Two%27s_complement" target="_blank" style="user-select: auto;">2's complement notation</a>. Therefore, in <strong style="user-select: auto;">Example 2</strong> above, the input represents the signed integer <code style="user-select: auto;">-3</code> and the output represents the signed integer <code style="user-select: auto;">-1073741825</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 00000010100101000001111010011100
<strong style="user-select: auto;">Output:</strong>    964176192 (00111001011110000010100101000000)
<strong style="user-select: auto;">Explanation: </strong>The input binary string <strong style="user-select: auto;">00000010100101000001111010011100</strong> represents the unsigned integer 43261596, so return 964176192 which its binary representation is <strong style="user-select: auto;">00111001011110000010100101000000</strong>.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 11111111111111111111111111111101
<strong style="user-select: auto;">Output:</strong>   3221225471 (10111111111111111111111111111111)
<strong style="user-select: auto;">Explanation: </strong>The input binary string <strong style="user-select: auto;">11111111111111111111111111111101</strong> represents the unsigned integer 4294967293, so return 3221225471 which its binary representation is <strong style="user-select: auto;">10111111111111111111111111111111</strong>.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The input must be a <strong style="user-select: auto;">binary string</strong> of length <code style="user-select: auto;">32</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong> If this function is called many times, how would you optimize it?</p>
</div>