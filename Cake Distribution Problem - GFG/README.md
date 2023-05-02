# Cake Distribution Problem
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek is organizing a birthday party, so his friends brought a cake for him. The cake consists of <strong>N</strong>&nbsp;chunks, whose individual sweetness is represented by the<strong>&nbsp;sweetness&nbsp;</strong>array.<strong>&nbsp;</strong>Now at the time of distribution, Geek cuts the cake into&nbsp;<strong>K + 1</strong>&nbsp;pieces to distribute among his&nbsp;<strong>K</strong>&nbsp;friends. One piece he took for himself. Each piece consists of some consecutive chunks. He is very kind, so he left the piece with <strong>minimum</strong> sweetness for him.</span></p>

<p><span style="font-size:18px">You need to find the&nbsp;<strong>maximum</strong>&nbsp;sweetness that the Geek can get if he distributes the cake optimally.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N  = 6, K = 2</span>
<span style="font-size:18px">sweetness[] = {6, 3, 2, 8, 7, 5}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">9</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">Geek can divide the cake to [6, 3], [2, 8], [7, 5] 
with</span>&nbsp;<span style="font-size:18px">sweetness level 9, 10 and 12 respectively.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N  = 7, K = 3</span>
<span style="font-size:18px">sweetness[] = {1, 2, 4, 7, 3, 6, 9}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">7</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">Geek can divide the cake to [1, 2, 4], [7], [3, 6], [9] 
with sweetness level 7, 7, 9 and 9 respectively.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You need to complete the <strong>maxSweetness()</strong> function which takes an integer array of&nbsp;<strong>sweetness</strong>, an integer <strong>N</strong> and an integer <strong>K</strong> as the input parameters and returns an integer denoting the maximum sweetness that the Geek can get.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NlogM), where M is the sum of elements in the array.<br>
<strong>Expected Space Complexity:</strong>&nbsp;O(1)</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 &lt;= N &lt;= 10<sup>5</sup><br>
0 &lt;= K &lt; N<br>
1 &lt;= sweetness[i] &lt;= 10<sup>9</sup></span></p>
</div>