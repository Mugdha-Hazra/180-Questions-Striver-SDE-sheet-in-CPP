# Walls Coloring II
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There is a row of&nbsp;<strong>N</strong>&nbsp;walls in Geeksland. The king of Geeksland ordered Alexa to color all the walls on the occasion of New Year. Alexa can color each wall with one of the&nbsp;<strong>K</strong>&nbsp;colors. The cost associated with coloring each wall with a particular color is represented by a 2D&nbsp;<strong>costs</strong>&nbsp;array of size&nbsp;<strong>N * K</strong>. For example, costs[0][0] is the cost of coloring wall 0 with color 0; costs[1][2] is the cost of coloring wall 1 with color 2, and so on... Find the minimum cost to color all the walls such that no two adjacent walls have the same color.</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong></span><span style="font-size:18px"><strong>If you are not able to paint&nbsp;all the walls, then you should return -1.</strong></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4, K = 3
costs[][] = {{1, 5, 7},
             {5, 8, 4},
&nbsp;            {3, 2, 9},
&nbsp;            {1, 2, 4}}

<strong>Output:</strong>
8
<strong>Explanation:</strong>
Paint wall 0 with color 0. Cost = 1
Paint wall 1 with color 2. Cost = 4
Paint wall 2 with color 1. Cost = 2
Paint wall 3 with color 0. Cost = 1
Total Cost = 1 + 4 + 2 + 1 = 8</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5, K = 1
costs[][] = {{5},
             {4},
&nbsp;            {9},
&nbsp;            {2},
&nbsp;            {1}}
<strong>Output:</strong>
-1
<strong>Explanation:</strong>
It is not possible to color all the walls under the given conditions.</span></pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:</strong></span></p>

<p><span style="font-size:18px">Your task is to complete the function <strong>minCost()&nbsp;</strong>which takes a 2D integer matrix <strong>costs&nbsp;</strong>as the only argument and returns an integer, representing the minimum cost to paint&nbsp;all the walls.&nbsp;If you are not able to paint all the walls, then you should return -1</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity: O(N*K)<br>
Expected Space Complexity: O(N*K)</strong></span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<ul>
	<li><span style="font-size:18px">0 &lt;= N &lt;= 10<sup>3</sup></span></li>
	<li><span style="font-size:18px">0 &lt;= K &lt;= 10<sup>3</sup></span></li>
	<li><span style="font-size:18px">1 &lt;= costs[i][j] &lt;= 10<sup>5</sup></span></li>
</ul>

<p>&nbsp;</p>
</div>