# Lucky Numbers
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;"><strong>Lucky numbers</strong> are subset of integers. Rather than going into much theory, let us see the process of arriving at lucky numbers,<br>Take the set of integers<br>1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……<br>First, delete every <strong>second </strong>number, we get following reduced set.<br>1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………<br>Now, delete every <strong>third</strong> number, we get<br>1, 3, 7, 9, 13, 15, 19,….….<br>Continue this process indefinitely……<br>Any number that does <strong>NOT</strong> get deleted due to above process is called “<strong>lucky</strong>”.</span></p>
<p><span style="font-size: 18px;">You are given a number <strong>N</strong>, you need to tell whether the number is lucky or not. If the number is lucky return 1 otherwise 0.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5
<strong>Output: </strong>0<strong>
Explanation: </strong>5 is not a lucky number 
as it gets deleted in the second 
iteration.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 19
<strong>Output: </strong>1<strong>
Explanation: </strong>19 is a lucky number because <br>it does not get deleted throughout the process.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. You only need to complete the function <strong>isLucky()&nbsp;</strong>that takes N&nbsp;as parameter and returns either False&nbsp;if the N&nbsp;is not lucky else True.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(sqrt(N)).<br><strong>Expected Auxiliary&nbsp;Space:&nbsp;</strong>O(sqrt(N)).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= N &lt;= 10<sup>5</sup></span></p></div>