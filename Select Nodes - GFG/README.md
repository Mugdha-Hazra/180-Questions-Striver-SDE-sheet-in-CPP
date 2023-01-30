# Select Nodes
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given <strong>N&nbsp;</strong>nodes of a tree and a list of edges. Find the minimum number of nodes to be selected to light up all the edges of the tree.<br>
An edge lights up when at least one node at the end of the edge is selected.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 6
edges[] = {(1,2), (1,3), (2,4), (3,5), (3,6)}
<strong>Output:</strong>&nbsp;2
<strong>Explanation</strong>: Selecting nodes 2 and 3 lights
up all the edges.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
arr[] = {(1,2), (1,3)}
<strong>Output:&nbsp;</strong>1
<strong>Explanation</strong>: Selecting Node 1 
lights up all the edges.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>countVertex()</strong>&nbsp;which takes the number of nodes&nbsp;N, and the list of edges as input parameters&nbsp;and returns the minimum number of nodes selected.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ edges ≤ N<br>
Given graph is a valid tree.</span></p>
</div>