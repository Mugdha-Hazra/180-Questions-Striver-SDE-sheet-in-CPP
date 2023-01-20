# Maximum Weight Node
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a maze with&nbsp;<strong>N</strong> cells. Each cell may have multiple entry points but not more than one exit (i.e entry/exit points are unidirectional doors like valves).<br>
You are given an array <strong>Edge[]</strong> of <strong>N </strong>integers,&nbsp;where<strong> Edge[i] </strong>contains the cell index that can be reached from cell<strong>&nbsp;i </strong>in one step. <strong>Edge[i]</strong> is <strong>-1</strong> if the ith cell doesn't have an exit.&nbsp;<br>
The task is to find the cell with&nbsp;<strong>maximum weight </strong>(The weight of a cell is the sum of&nbsp;cell indexes of all cells pointing to that cell). If there are multiple cells with the maximum weight return the cell with&nbsp;highest index.</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>The cells are indexed with an integer value from 0 to N-1.&nbsp;If there is no cell pointing to the ith cell then the weight of the i'th cell is zero.</span></p>

<p><span style="font-size:18px"><strong><strong>Example 1:</strong></strong></span></p>

<pre><span style="font-size:18px"><strong><strong>Input:</strong>
</strong>N = 4
Edge[] = {2, 0, -1, 2}<strong>
<strong>Output:</strong> </strong>2<strong>
<strong>Explanation</strong>: 
</strong>1 -&gt; 0 -&gt; 2 &lt;- 3
weight of 0th cell = 1
weight of 1st cell = 0 
(because there is no cell pointing to the 1st cell)
weight of 2nd cell = 0+3 = 3
weight of 3rd cell = 0
There is only one cell which has maximum weight
(i.e 2) So, cell 2 is the output.
</span></pre>

<p><span style="font-size:18px"><strong><strong>Example 2:</strong></strong></span></p>

<pre><span style="font-size:18px"><strong><strong>Input:</strong>
</strong>N = 1
Edge[] = {-1}<strong>
<strong>Output:</strong> </strong>0<strong>
<strong>Explanation</strong>:
</strong>weight of 0<sup>th</sup> cell is 0.
There is only one cell so 
cell 0 has maximum weight.
</span></pre>

<p><br>
<span style="font-size:18px"><strong><strong>Your task:</strong></strong><br>
You dont need to read input or print anything. Your task is to complete the function&nbsp;<strong>maxWeightCell</strong>()&nbsp;which takes the integer N&nbsp;denoting the number of cells&nbsp;and the array Edge[]&nbsp;as input parameters and returns the cell which has maximum weight. If there are multiple answers then return the cell with highest index.</span></p>

<p><span style="font-size:18px"><strong><strong>Expected Time Complexity:</strong></strong>&nbsp;O(N)<br>
<strong><strong>Expected Auxiliary Space:&nbsp;</strong></strong>O(N)</span></p>

<p><span style="font-size:18px"><strong><strong>Constraints:</strong></strong><br>
1 ≤ N&nbsp;≤ 10<sup>5</sup><br>
-1 <u>&lt;</u> Edge[i] &lt; N<br>
Edge[i] != i</span></p>
</div>