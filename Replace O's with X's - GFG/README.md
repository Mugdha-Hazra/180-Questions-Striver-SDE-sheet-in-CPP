# Replace O's with X's
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a matrix <strong>mat</strong> of size <strong>N x M</strong> where every element is either 'O' or 'X'. Replace all 'O' with 'X' that are surrounded by 'X'. </span></p>
<p><span style="font-size: 18px;">A 'O' (or a set of 'O') is considered to be surrounded by 'X' if there are 'X' at locations just below, just above, just left and just right of it.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> <br>n = 5, m = 4
mat = {{'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'O', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong>Output:</strong> <br>ans = {{'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong>Explanation:</strong> <br>Following the rule the above matrix is the resultant matrix. </span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<p>&nbsp;</p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> <br>n = 5, m = 4
mat = {{'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'O', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong>Output:</strong> <br>ans = {{'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'O', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong>Explanation:</strong> <br>Following the rule the above matrix is the resultant matrix.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>fill()</strong> which takes <strong>N</strong>, <strong>M</strong> and <strong>mat</strong> as input parameters ad returns a 2D array representing the resultant matrix.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n*m)<br><strong>Expected Auxiliary Space:</strong> O(n*m)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n, m ≤ 500</span></p></div>