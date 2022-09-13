<h2><a href="https://leetcode.com/problems/utf-8-validation/">393. UTF-8 Validation</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">data</code> representing the data, return whether it is a valid <strong style="user-select: auto;">UTF-8</strong> encoding (i.e. it translates to a sequence of valid UTF-8 encoded characters).</p>

<p style="user-select: auto;">A character in <strong style="user-select: auto;">UTF8</strong> can be from <strong style="user-select: auto;">1 to 4 bytes</strong> long, subjected to the following rules:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">For a <strong style="user-select: auto;">1-byte</strong> character, the first bit is a <code style="user-select: auto;">0</code>, followed by its Unicode code.</li>
	<li style="user-select: auto;">For an <strong style="user-select: auto;">n-bytes</strong> character, the first <code style="user-select: auto;">n</code> bits are all one's, the <code style="user-select: auto;">n + 1</code> bit is <code style="user-select: auto;">0</code>, followed by <code style="user-select: auto;">n - 1</code> bytes with the most significant <code style="user-select: auto;">2</code> bits being <code style="user-select: auto;">10</code>.</li>
</ol>

<p style="user-select: auto;">This is how the UTF-8 encoding would work:</p>

<pre style="user-select: auto;">     Number of Bytes   |        UTF-8 Octet Sequence
                       |              (binary)
   --------------------+-----------------------------------------
            1          |   0xxxxxxx
            2          |   110xxxxx 10xxxxxx
            3          |   1110xxxx 10xxxxxx 10xxxxxx
            4          |   11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
</pre>

<p style="user-select: auto;"><code style="user-select: auto;">x</code> denotes a bit in the binary form of a byte that may be either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note: </strong>The input is an array of integers. Only the <strong style="user-select: auto;">least significant 8 bits</strong> of each integer is used to store the data. This means each integer represents only 1 byte of data.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> data = [197,130,1]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> data represents the octet sequence: 11000101 10000010 00000001.
It is a valid utf-8 encoding for a 2-bytes character followed by a 1-byte character.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> data = [235,140,4]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> data represented the octet sequence: 11101011 10001100 00000100.
The first 3 bits are all one's and the 4th bit is 0 means it is a 3-bytes character.
The next byte is a continuation byte which starts with 10 and that's correct.
But the second continuation byte does not start with 10, so it is invalid.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= data.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= data[i] &lt;= 255</code></li>
</ul>
</div>