# Find Maximum Equal sum of Three Stacks
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given three stacks <strong>S1</strong>, <strong>S2</strong> &amp;&nbsp;<strong>S3</strong> of size <strong>N1</strong>, <strong>N2 </strong>&amp; <strong>N3 </strong>respectively, having only <strong>Positive </strong>Integers. The task is to find the possible equal <strong>maximum sum</strong> of the stacks with the removal of top elements allowed. Stacks are represented as an array, and the first index of the array represents the top element of the stack.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N1 = 3, N2 = 4, N3 = 2
S1 = {4,2,3}
S2 = {1,1,2,3}
S3= {1,4}<strong>
Output:</strong></span><span style="font-size: 18px;">
5<strong>
Explanation:
</strong>We can pop 1 element from the 1st stack, and 2
elements from the 2nd stack. Now remaining elements
yield the equal sum of the three stacks, that is 5.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span><span style="font-size: 18px;">
N1 =2, N2 = 1, N3 = 3
S1 = {4,7}</span><span style="font-size: 18px;">
S2 = {10}
S3 = {1,2,3}<strong>
Output:
</strong>0<strong>
Explanation:
</strong>We will never get an equal sum after popping
some elements, so the answer will be 0.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>maxEqualSum()</strong>&nbsp;which takes the arrays <strong>S1[], S2[], </strong>and<strong> S3[]</strong>&nbsp;and their&nbsp;sizes&nbsp;<strong>N1, N2, </strong>and<strong> N3&nbsp;</strong>as inputs and returns the maximum equal sum we can obtain.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N1+N2+N3)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= N1, N2, N3 &lt;= 10<sup>5</sup></span><br><span style="font-size: 18px;">1 &lt;= S1[i],&nbsp;S2[i], S3[i] &lt;= 10<sup>3</sup></span><br><span style="font-size: 18px;">The sum, N1+N2+N3 doesn't exceed 10<sup>6</sup></span></p></div>