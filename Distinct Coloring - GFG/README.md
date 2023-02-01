# Distinct Coloring
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There is a row of <strong>N</strong>&nbsp;houses, each house can be painted with one of the three colors: red, blue or green. The cost of painting each house with a certain color is different. You have to paint all the houses such that no two adjacent houses have the same color. Find the minimum cost to paint all houses.</span></p>

<p><span style="font-size:18px">The cost of painting each house in&nbsp;red, blue or green colour is given in the array <strong>r[]</strong>, <strong>g[]&nbsp;</strong>and&nbsp;<strong>b[]&nbsp;</strong>respectively.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 3
r[] = {1, 1, 1}
g[] = {2, 2, 2}
b[] = {3, 3, 3}
<strong>Output:</strong>&nbsp;4
<strong>Explanation</strong>: We can color the houses 
in RGR manner to incur minimum cost.
We could have obtained a cost of 3 if 
we coloured all houses red, but we 
cannot color adjacent houses with 
the same color.

</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
r[] = {2, 1, 3}
g[] = {3, 2, 1}
b[] = {1, 3, 2} 
<strong>Output:</strong>&nbsp;3
<strong>Explanation</strong>: We can color the houses
in BRG manner to incur minimum cost.</span></pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>distinctColoring</strong><strong>()</strong>&nbsp;which takes the&nbsp;size <strong>N&nbsp;</strong>and the color arrays <strong>r[]</strong>, <strong>g[]</strong>, <strong>b[]&nbsp;</strong>as input parameters&nbsp;and returns the minimum cost of coloring such that the color of no two houses is same.</span><br>
<br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span><br>
<br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 5*10<sup>4</sup></span><br>
<span style="font-size:18px">1 &lt;= r[i], g[i], b[i] &lt;= 10</span><sup>6</sup></p>
</div>