# Count Lucky Permutations
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>arr[ ]&nbsp;</strong>of integers having <strong>N&nbsp;</strong>elements and a non-weighted&nbsp;undirected graph having <strong>N</strong> nodes and&nbsp;<strong>M&nbsp;</strong>edges. The details of each edge in the graph is given to you in the form of list of list.&nbsp;<br>
Your task is to find the number of lucky permutations of the&nbsp;given array.<strong>&nbsp;</strong></span></p>

<blockquote>
<p><span style="font-size:18px">An array permutation is said to be lucky if for every node <strong>V<sub>i&nbsp; </sub>[1 &lt; i &lt; N-1]</strong> in the array there exists an edge between the nodes&nbsp;<strong>V</strong><sub><strong>i</strong>&nbsp;</sub>and <strong>V<sub>i+1&nbsp;</sub></strong>in the given graph.</span></p>
</blockquote>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3, M = 2
arr = {1, 2, 3}
graph = {{3, 1}, {1, 2}}
<strong>Output:
</strong>2
<strong>Explanation:
</strong>All possible permutations of the 
array are as follows-
{1,2,3}: There is an edge between 1 and 
2 in the graph but not betwen 2 and 3.

{2,1,3}: There is an edge between (2,1)
and (1,3) in the graph.

{3,1,2}: There is an edge between (3,1)
and (1,2) in the graph.

Out of the 3 possible permutations, 
2 are lucky. Therefore, answer is 2.</span>

</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 2, m = 1
arr = {1, 1}
graph = {{1, 2}}
<strong>Output :</strong>
0
<strong>Explanation:</strong>
There is no lucky permutation in the 
given graph. 
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>luckyPermutations()</strong>&nbsp;which takes the two integers <strong>N </strong>and <strong>M,&nbsp;</strong>an array <strong>arr[ ]&nbsp;</strong>and a list of lists named <strong>graph&nbsp;</strong>of size <strong>M</strong>&nbsp;as input parameters and returns the count of lucky permutations.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N<sup>2</sup>*2<sup>N</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(N*2<sup>N</sup>)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ N ≤ 15<br>
1 ≤ M&nbsp;≤ (N*(N-1))/2<br>
1&nbsp;≤&nbsp; arr[i], graph[i][j] ≤ N&nbsp;<br>
There are no self loops and repeated edges in the graph.</span></p>
</div>