# Geeks Island
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geeks Island is represented by an&nbsp;<strong>N * M</strong>&nbsp;matrix&nbsp;<strong>mat</strong>. The island is touched by the Indian Ocean from the top and left edges and the Arabian Sea from the right and bottom edges. Each element of the matrix represents the height of the cell.</span></p>

<p><span style="font-size:18px">Due to the rainy season, the island receives a lot of rainfall, and the water can flow in four directions(up, down, left, or right) from one cell to another one with&nbsp;<strong>height equal or lower</strong>.</span></p>

<p><span style="font-size:18px">You need to find the number of cells from where water can flow to both the Indian Ocean and the Arabian Sea.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N = 5, M = 5</span>
<span style="font-size:18px">mat[][] =    {{1, 3, 3, 2, 4},
               </span><span style="font-size:18px">{4, 5, 6, 4, 4},</span>
               <span style="font-size:18px">{2, 4, 5, 3, 1},</span>
               <span style="font-size:18px">{6, 7, 1, 4, 5},</span>
               <span style="font-size:18px">{6, 1, 1, 3, 4}}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">8</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">Indian    ~   ~   ~   ~   ~
Ocean  ~  1   3   3   2  (4) *
        ~  4   5  (6) (4) (4) *
        ~  2   4  (5)  3   1  *
        ~ (6) (7)  1   4   5  *
        ~ (6)  1   1   3   4  *           
&nbsp;          *   *   *   *   * Arabian Sea</span>
<span style="font-size:18px">Water can flow to both ocean and sea from the cells
denoted by parantheses().For example at index(1,2), the height of that island is 6. If a water drop falls on that island, water can flow to up direction(as 3&lt;=6) and reach to Indian Ocean. ALso, water can flow to right direction(as 6&gt;=4&gt;=4) and reach to Arabian Sea.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">N = 3, M = 2</span>
<span style="font-size:18px">mat[][] =    {{1, 1, 1},</span>
               <span style="font-size:18px">{1, 1, 1}}</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">6 </span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">Water can flow from all cells to both Indian Ocean and Arabian Sea as the height of all islands are same.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">Your task is to complete the function <strong>water_flow()&nbsp;</strong>which takes an integer array <strong>mat</strong>, integer <strong>N</strong> and integer <strong>M</strong>&nbsp;as the input parameter and returns an integer, denoting the number of cells from which water can to both ocean and sea.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(</span><span style="font-size:18px">N*M</span><span style="font-size:18px">)<br>
<strong>Expected Auxiliary Space</strong> : O(N*M)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= N, M &lt;= 10<sup>3</sup></span></li>
	<li><span style="font-size:18px">1 &lt;= mat[i][j] &lt;= 10<sup>6</sup></span></li>
</ul>
</div>