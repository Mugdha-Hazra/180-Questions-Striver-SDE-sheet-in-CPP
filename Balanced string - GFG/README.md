# Balanced string
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer N.Create a string using only lowercase characters from a to z that follows the given rules.</span></p>

<p><span style="font-size:18px"><strong>When N is even:</strong></span></p>

<p><span style="font-size:18px">Use N/2 characters from the beginning&nbsp;of a-z and N/2 characters from the ending of a-z.</span></p>

<p><span style="font-size:18px">When N is greater than 26,continue repeating the instructions until length of string becomes N.</span></p>

<p><span style="font-size:18px"><strong>When N is odd:</strong></span></p>

<p><span style="font-size:18px"><em>Case 1:</em> If the sum of digits of N is even, Select (N+1)/2 characters from the beginning of a-z and (N-1)/2&nbsp;characters from the ending of a-z.</span></p>

<p><span style="font-size:18px"><em>Case 2:</em> If the sum of digits of N is odd, Select (N-1)/2 characters from the beginning of a-z and (N+1)/2 characters from the ending of a-z.</span></p>

<p><span style="font-size:18px">When N is greater than 26,continue repeating the instructions until length of string becomes N.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N=21
<strong>Output:</strong> 
abcdefghijpqrstuvwxyz
<strong>Explanation:
</strong>Since 21 is odd and sum of digits
of 21 is also odd,we take (21-1)/2=10 
characters from the beginning and 
(21+1)/2=11 characters from the 
end of a-z.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span><span style="font-size:18px"><strong> </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N=28 </span><span style="font-size:18px"><strong>
Output:</strong> 
abcdefghijklmnopqrstuvwxyzaz
<strong>Explanation:</strong> 
Since 28&gt;26, we keep repeating 
the process until length of string becomes 
28.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>BalancedString()&nbsp;</strong>which takes the integer N&nbsp;as input parameter&nbsp;and returns the string created using given procedures.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup></span><br>
&nbsp;</p>
</div>