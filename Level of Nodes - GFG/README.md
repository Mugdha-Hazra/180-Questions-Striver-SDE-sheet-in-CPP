# Level of Nodes
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an integer <strong>X</strong> and an undirected acyclic graph with <strong>V nodes</strong>, labeled from <strong>0 </strong>to <strong>V-1</strong>, and <strong>E </strong>edges, find the <strong>level </strong>of node labeled as <strong>X</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Level </strong>is the <strong>minimum </strong>number of edges you must travel from the node 0 to some target.</span></p>
<p><span style="font-size: 18px;">If there doesn't exists such a node that is labeled as <strong>X</strong>, <strong>return -1</strong>.<br></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701248/Web/Other/afb73eb4-8c50-4e77-b161-e3fd4d35939c_1685086954.png" alt="">
<span style="font-size: 18px;"><strong>X</strong> = 4</span>
<span style="font-size: 18px;"><strong>Output:</strong>
2
<strong>Explanation</strong>:
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701248/Web/Other/ef6cced7-96f1-46e4-bf8b-4fc091c04ee7_1685086954.png" alt="">
<span style="font-size: 18px;">We can clearly see that Node 4 lies at Level 2.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701248/Web/Other/79ea2467-b795-4328-a0aa-d2679f671e55_1685086954.png" alt="">
<span style="font-size: 18px;"><strong>X</strong> = 1</span>
<span style="font-size: 18px;"><strong>Output:</strong>
1
<strong>Explanation</strong>:
Node 1 lies at level 1, immediate after Node 0.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your task:</strong></span><br><span style="font-size: 18px;">You dont need to read input or print anything. Your task is to complete the function <strong>nodeLevel()</strong>&nbsp;which takes two integers <strong>V</strong> and <strong>X</strong> denoting the number of vertices and the node, and another adjacency list <strong>adj </strong>as input parameters and returns the level of Node <strong>X</strong>. If node <strong>X</strong> isn't present it returns <strong>-1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(V)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(V)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> V </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> 10<sup>4<br></sup></span><span style="font-size: 18px;">1 ≤<span style="font-size: medium;">&nbsp;</span>E&nbsp;≤<span style="font-size: medium;">&nbsp;</span>10<sup>4</sup><br>0 </span> <span style="font-size: 18px;">≤</span> adj<span style="font-size: 18px;"><sub>i, j</sub>&nbsp;&lt; V</span><br><span style="font-size: 18px;">1 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> X </span> <span style="font-size: 18px;">&lt;</span> V<span style="font-size: 18px;"><br>Graph doesn't contain multiple edges and self loops.</span></p></div>