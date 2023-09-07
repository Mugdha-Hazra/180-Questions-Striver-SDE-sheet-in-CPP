# Minimum Multiplications to reach End
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given <strong>start</strong>, <strong>end</strong> and an array <strong>arr</strong> of <strong>n</strong>&nbsp;numbers. At each step, <strong>start</strong> is multiplied with any number in the array and then mod operation with <strong>100000</strong> is done to get the new start. </span></p>
<p><span style="font-size: 18px;">Your task is to find the minimum steps in which <strong>end</strong> can be achieved starting from <strong>start</strong>. If it is not possible to reach <strong>end</strong>, then return <strong>-1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
arr[] = {2, 5, 7}
start = 3, end = 30
<strong>Output:</strong>
2
<strong>Explanation:</strong>
Step 1: 3*2 = 6 % 100000 = 6 
Step 2: 6*5 = 30 % 100000 = 30
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
arr[] = {3, 4, 65}
start = 7, end = 66175
<strong>Output:</strong>
4
<strong>Explanation:</strong>
Step 1: 7*3 = 21 % 100000 = 21&nbsp;
Step 2: 21*3 = 63 % 100000 = 63&nbsp;
Step 3: 63*65 = 4095 % 100000 = 4095&nbsp;
Step 4: 4095*65 = 266175 % 100000 = 66175
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:<br></strong></span><span style="font-size: 18px;">You don't need to print or input anything. Complete the function <strong>minimumMultiplications()</strong> which takes an integer array <strong>arr</strong>, an integer <strong>start</strong> and an integer<strong> end</strong> as the input parameters and returns an integer, denoting the minumum steps to reach in which <strong>end</strong> can be achieved starting from <strong>start</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(10<sup>5</sup>)<br></span><span style="font-size: 18px;"><strong>Expected Space Complexity:</strong> O(10<sup>5</sup>)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span></p>
<ul>
<li><span style="font-size: 18px;">1 &lt;= n &lt;= 10<sup>4</sup></span></li>
<li><span style="font-size: 18px;">1 &lt;= arr[i] &lt;= 10<sup>4</sup></span></li>
<li><span style="font-size: 18px;">1 &lt;= start, end &lt;&nbsp;10<sup>5</sup></span></li>
</ul></div>