# Largest Sum Cycle
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a maze with&nbsp;<strong>N</strong>&nbsp;cells. Each cell may have multiple entry points but not more than one exit(i.e entry/exit points are unidirectional doors like valves).<br>
You are given an array&nbsp;<strong>Edge[]</strong>&nbsp;of&nbsp;<strong>N&nbsp;</strong>integers,&nbsp;where Edge[i] contains the cell number that can be reached from of&nbsp;cell&nbsp;i in one step. Edge[i] is -1 if the ith cell doesn't have an exit.&nbsp;<br>
The task is to find the&nbsp;largest sum of a cycle in the maze(Sum of a cycle is the sum of the cell indexes of all cells present in that cycle).</span></p>

<p><span style="font-size:18px"><strong>Note:</strong>The cells are named with an integer value from 0 to N-1. <strong>If there is no cycle in the graph then return -1.</strong></span></p>

<p><span style="font-size:18px"><strong><strong>Example 1:</strong></strong></span></p>

<pre><span style="font-size:18px"><strong><strong>Input:</strong>
</strong>N = 4
Edge[] = {1, 2, 0, -1}<strong>
<strong>Output:</strong> </strong>3<strong>
<strong>Explanation</strong>: 
</strong>There is only one cycle in the graph.
(i.e 0-&gt;1-&gt;2-&gt;0)
Sum of the cell index in that cycle 
= 0 + 1 + 2 = 3.
</span></pre>

<p><span style="font-size:18px"><strong><strong>Example 2:</strong></strong></span></p>

<pre><span style="font-size:18px"><strong><strong>Input:</strong>
</strong>N = 4 
Edge[] = {2, 0, -1, 2}<strong>
<strong>Output:</strong> </strong>-1<strong>
<strong>Explanation</strong>:
</strong>1 -&gt; 0 -&gt; 2 &lt;- 3
There is no cycle in the graph.
</span></pre>

<p><br>
<span style="font-size:18px"><strong><strong>Your task:</strong></strong><br>
You dont need to read input or print anything. Your task is to complete the function&nbsp;<strong>largestSumCycle</strong>()&nbsp;which takes the integer N&nbsp;denoting the number of cells&nbsp;and the array Edge[]&nbsp;as input parameters and returns the sum of the&nbsp;largest sum cycle in the maze.</span></p>

<p><span style="font-size:18px"><strong><strong>Expected Time Complexity:</strong></strong>&nbsp;O(N)<br>
<strong><strong>Expected Auxiliary Space:&nbsp;</strong></strong>O(N)</span></p>

<p><span style="font-size:18px"><strong><strong>Constraints:</strong></strong><br>
1 ≤ N&nbsp;≤ 10<sup>5</sup><br>
-1&nbsp;<u>&lt;</u>&nbsp;Edge[i] &lt; N<br>
Edge[i] != i</span></p>
</div>