# Geek hates too many 1s
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an<strong>&nbsp;non-negative</strong> integer <strong>n</strong>. You are only allowed to make set bit unset. You have to find&nbsp;the maximum possible value of query so that after performing the given operations, no <strong>three</strong>&nbsp;consecutive bits of the integer query are <strong>set-bits</strong>.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
n = 2
<strong>Output:</strong>&nbsp;
2
<strong>Explanation</strong>: 
2's binary form is 10, no 3 consecutive set bits are here. 
So, 2 itself would be answer.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 7
<strong>Output:&nbsp;
</strong>6
<strong>Explanation</strong>: 
7's binary form is .....00111.We can observe that 3
consecutive bits are set bits. This is not allowed.
So, we can perfrom the operation of changing set 
bit to unset bit. Now, the number 
becomes 6 that is .....00110. It satifies the 
given condition. Hence, the maximum possible 
value is 6.</span>

</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong> You don't need to read&nbsp;input&nbsp;or print anything. Your task is to complete the function&nbsp;<strong>noConseBits(),</strong>&nbsp;which takes integer n as input parameter&nbsp;and returns the maximum value possible so that it satifies the given condition.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 ≤ n ≤ 10<sup>9</sup></span></p>

<p>&nbsp;</p>
</div>