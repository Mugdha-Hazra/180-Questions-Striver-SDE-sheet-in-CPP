# Maximum Diamonds
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There are <strong>N</strong> bags with diamonds in them. The i'th of these bags contains <strong>A[i] </strong>diamonds. If you drop a bag with <strong>A[i]</strong> diamonds, it changes to <strong>A[i]/2 </strong>diamonds and you gain <strong>A[i]&nbsp;</strong>diamonds. Dropping a bag takes 1 minute. Find the <strong>maximum number of diamonds</strong> that you can take if you are given <strong>K minutes.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>N = </strong>5, <strong>K = </strong>3
<strong>A[] = </strong>{2, 1, 7, 4, 2}</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">14</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">The state of bags is:
2 1 7 4 2
You take all diamonds from Third bag (7).</span><span style="font-size: 18px;">
The state of bags becomes: 2 1 3 4 2 
Take all diamonds from Fourth bag (4).
The state of bags becomes: 2 1 3 2 2
Take all diamonds from Third bag (3).</span><span style="font-size: 18px;">
The state of bags becomes: 2 1 1 2 2 
Hence, number of Diamonds = 7+4+3 = 14.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>N = </strong>3, <strong>K = </strong>2
<strong>A[] = </strong>{7, 1, 2}</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">10</span>
<span style="font-size: 18px;"><strong>Explanation:<br></strong>You take all diamonds from First bag (7).<br>The state of bags becomes: 3 1 2 <br>Take all diamonds from again First bag (3).<br>The state of bags becomes: 1 1 2<br></span><span style="font-size: 18px;">You can take a <strong>maximum </strong>of 10 diamonds.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>maxDiamonds()</strong> which takes 2 Integers N, and K and an integer and an array A[] of N integers as input and returns the maximum number of diamonds you can take in K minutes.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(NlogN)<br><strong>Expected Auxiliary Space:</strong> O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= N &lt;= 10<sup>5</sup><br>0 &lt;= K,A[i] &lt;= 10<sup>5</sup></span></p></div>