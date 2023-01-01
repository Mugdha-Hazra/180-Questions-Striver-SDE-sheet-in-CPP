# Count even length
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a number n, find count of all binary sequences of length 2n such that sum of first n bits is same as sum of last n bits.<br>
The anwer can be very large. So, you have to return answer modulo 10<sup>9</sup>+7.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 2
<strong>Output: </strong>6
<strong>Explanation: </strong>There are 6 sequences of length 
2*n, the sequences are 0101, 0110, 1010, 1001, 
0000 and 1111.</span></pre>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 1
<strong>Output: </strong>2
<strong>Explanation: </strong>There are 2 sequence of length 
2*n, the sequence are 00 and 11.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong>compute_value()</strong>&nbsp;which takes n as input parameter and returns count of all binary sequence of length 2*n such that sum of first n bits is same as sum of last n bits modulo 10<sup>9</sup>&nbsp;+ 7.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n * log(n))<br>
<strong>Expected Space Complexity:&nbsp;&nbsp;</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10<sup>5</sup></span></p>
</div>