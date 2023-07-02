# Copy Set Bits in Range
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two numbers <strong>X</strong> and <strong>Y</strong>, and a range [<strong>L</strong>, <strong>R</strong>] where 1 &lt;= L &lt;= R &lt;= 31. You have to copy the set bits of <strong>'Y'</strong> in the range L to R in<strong> 'X'.</strong>&nbsp;Return this modified X.</span></p>
<p><span style="font-size: 18px;">Note: Range count will be from Right to Left &amp; start from 1.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
X = 44, Y = 3 
L = 1,  R = 5
<strong>Output:</strong> <br>47
<strong>Explaination:</strong> <br>Binary represenation of 44 and 3 is 1011<span style="text-decoration: underline;">00</span> and 0000<strong>11</strong>. So in the range 1 to 5 there are two set bits of 3 (1st &amp; 2nd position). If those are set in 44 it will become 1011<span style="text-decoration: underline;"><strong>11</strong></span> which is 47.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
X = 16, Y = 2
L = 1,  R = 3
<strong>Output:</strong> 18
<strong>Explaination:</strong> Binary represenation of 16 and 2 is 100<span style="text-decoration: underline;">00</span> and <strong>10</strong>. If the mentioned conditions are applied then 16 will become 100<span style="text-decoration: underline;"><strong>10</strong></span> which is 18.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>setSetBit()</strong> which takes the numbers X, Y, L and R as input parameters and returns the modified value of X.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(R - L)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ X, Y ≤ 10<sup>9</sup><br>1 ≤ L ≤ R ≤ 32</span></p></div>