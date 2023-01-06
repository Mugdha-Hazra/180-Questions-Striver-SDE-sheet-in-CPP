# Shortest Prime Path
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given two four digit prime numbers <strong>Num1 </strong>and <strong>Num2.</strong>&nbsp;Find the distance of the shortest path from Num1 to Num2 that can be attained by altering only one&nbsp;single digit at a time. Every number obtained after changing a digit should be a four digit prime number with no leading zeros.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">Num1 = 1033 
Num2 = 8179</span>
<span style="font-size:18px"><strong>Output: </strong></span><span style="font-size:18px">6</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">1033 -&gt; 1<strong>7</strong>33 -&gt; <strong>3</strong>733 -&gt; 373<strong>9</strong> -&gt; 37<strong>7</strong>9
                 -&gt; <strong>8</strong>779 -&gt; 8<strong>1</strong>79.</span>
<span style="font-size:18px">There are only 6 steps required to reach
Num2 from Num1, a</span><span style="font-size:18px">nd all the intermediate
numbers are 4 digit prime numbers.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">Num1 = 1033 
Num2 = 1033</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">0</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong>&nbsp;&nbsp;<br>
You don't need to read input or print anything. Your task is to </span></p>

<ol>
	<li><span style="font-size:18px">Complete the <strong>constructor of the class Solution</strong> to precompute a list of prime numbers.&nbsp;&nbsp;</span></li>
	<li><span style="font-size:18px">Complete&nbsp;function&nbsp;<strong>shortestPath</strong>() which takes two integers&nbsp;Num1 and Num2&nbsp;as input parameters&nbsp;and returns the distance of the shortest path from Num1 to Num2.&nbsp;If it is unreachable then return -1.</span></li>
</ol>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(NlogN)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1000 </span> <span style="font-size:18px">≤ Num1,Num2 </span> <span style="font-size:18px">≤</span> <span style="font-size:18px">9999<br>
Num1 and Num2 are prime numbers.</span></p>
</div>