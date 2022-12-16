# 2D Hopscotch
## Medium
<div class="problems_problem_content__Xm_eO"><p>Aakriti, Avantika and Mehak are playing 2D Hopscotch. The arena is in the form of a n*m 2D matrix. But the position of the cells is slightly modified as shown below.&nbsp;<br>
<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/hopscotch-1.jpg"></p>

<p>Mehak starts the game from tile (i,j) while Avantika and Aakriti direct her. In each turn Mehak will collect all the stones present (1 or 2) steps away from where she is standing. Avantika can direct Mehak to take 1 step and and Aakriti can direct Mehak to take 2 steps.&nbsp;<br>
If the director ty is known to you as ty = 0 being Avantika and 1 being Aakriti, find the number of stones that Mehak will collect.&nbsp;</p>

<p><br>
<strong>Example 1:</strong></p>

<pre><strong>Input: </strong>
n = 3, m = 3
mat = {{5, 9, 7}, 
       {6, 4, 5}, 
       {8, 1, 2}}
ty = 0, 
i = 1, j = 1
<strong>Output:</strong> 31
<strong>Explaination: </strong>
ty=0, so Avantika is the director. 
ie- Mehak will move only one step in 
any direction to collect the stones.
(0,1), (1,0), (1,2), (2,1), (2,2), (2,0) 
are at a distance of 1 from (1,1). 
Adding them 9+6+5+8+1+2=31.</pre>

<p><br>
<strong>Example 2:</strong></p>

<pre><strong>Input: </strong>
n = 3, m = 3
mat = {{5, 9, 7}, 
       {6, 4, 5}, 
       {8, 1, 2}}
ty = 1, 
i = 1, j = 1
<strong>Output:</strong> 12
<strong>Explaination: </strong>
ty=1, so Aakriti is the director. 
ie- Mehak can move 2 steps. 
(0,0) and (0,2) are the only tiles that 
are at a distance of two from (1,1). 
Adding them gives 5+7=12.</pre>

<p><br>
<strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>hopscotch() </strong>which takes n, m, mat, ty, i and j as input parameters and returns the number of collected stones.</p>

<p><br>
<strong>Expected Time Complexity:</strong> O(1)<br>
<strong>Expected Auxiliary Space: </strong>O(1)</p>

<p><br>
<strong>Constraints:</strong><br>
1 ≤ n, m ≤ 1000000<br>
0 ≤ i &lt; n<br>
0 ≤ j &lt; m&nbsp;</p>
</div>