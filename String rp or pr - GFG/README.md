# String rp or pr
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string S. In one operation, you can remove the substring "pr" from the string S and get amount X or you can remove the substring "rp" and get the amount Y.&nbsp;<br>
Find the maximum amount you can get if you perform zero or more such operations optimally.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Note :&nbsp;</strong></span></p>

<ul>
	<li><span style="font-size:18px">Substring of a string S is defined as a continuous sequence of characters in S.</span></li>
	<li><span style="font-size:18px">After removing pr or rp, the order of remaining letters should remain the same<strong>.</strong></span></li>
</ul>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">X = 5, Y = 4
S = "abppprrr"</span>
<strong><span style="font-size:18px">Output:</span> </strong><span style="font-size:18px">15</span>
<span style="font-size:18px"><strong>Explanation: </strong></span>
<span style="font-size:18px">Here, S <strong>= "</strong>abppprrr" </span>
<span style="font-size:18px">X= 5, Y=4.</span>
<span style="font-size:18px">Remove "pr", new string S = "abpprr".</span>
<span style="font-size:18px">Remove "pr", new string S = "abpr".</span>
<span style="font-size:18px">Remove "pr", new string S = "ab".</span>
<span style="font-size:18px">In total, we removed "pr" 3 times, 
so total score is 3*X + 0*Y = 3*5 =15.</span>
</pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">X = 7, Y = 7
S = "prpptppr"</span>
<strong><span style="font-size:18px">Output:</span> </strong><span style="font-size:18px">14</span>
<span style="font-size:18px"><strong>Explanation: </strong></span>
<span style="font-size:18px">Here, S <strong>= "</strong>prpptppr" </span>
<span style="font-size:18px">X= 7, Y=7.
As both have the same amount we can first 
remove either pr or rp. Here we start with pr</span>
<span style="font-size:18px">Remove "pr", new string S = "pptppr".</span>
<span style="font-size:18px">Remove "pr", new string S = "pptp".</span>
<span style="font-size:18px">In total, we removed "pr" 2 times, 
so total score is 2*X + 0*Y = 2*7 =14.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function<strong>&nbsp;solve()</strong>&nbsp;which takes the X ,Y and string S&nbsp;as input parameters&nbsp;and&nbsp;returns the maximum amount you can get after performing the above operations.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(|S|)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(|S|)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints</strong>:<br>
1 ≤ |S| ≤ 10<sup>5</sup><br>
1 ≤ X,Y ≤ 10<sup>5</sup><br>
S contains&nbsp;lowercase English letters only.</span></p>
</div>