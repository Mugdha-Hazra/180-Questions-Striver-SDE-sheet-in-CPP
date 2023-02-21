# Connect Nodes at Same Level
## Medium
<div class="problems_problem_content__Xm_eO"><div class="entry-content">
<p><span style="font-size:18px">Given a binary tree, connect the nodes that are at the same level. The structure of the tree Node contains&nbsp;an addition&nbsp;<strong>nextRight&nbsp;</strong>pointer for this purpose.</span></p>

<p><span style="font-size:18px"><strong>Initially</strong>, all the <strong>nextRight </strong>pointers point to <strong>garbage </strong>values. <strong>Your function</strong> should set these pointers to point next right for each node.</span><br>
<br>
<strong><span style="font-size:18px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; 10 ------&gt; NULL<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; / \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp; 3&nbsp;&nbsp; 5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; =&gt; &nbsp;&nbsp;&nbsp; 3 ------&gt; 5 --------&gt; NULL<br>
&nbsp;&nbsp;&nbsp; / \&nbsp; &nbsp;&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp;&nbsp;&nbsp; /&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp; 4&nbsp;&nbsp; 1&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp;&nbsp; 4 --&gt; 1 -----&gt; 2 -------&gt; NULL</span></strong></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>     3
&nbsp;  /  \
&nbsp; 1    2
<strong>Output:
</strong>3 1 2
1 3 2<strong>
Explanation:</strong>The connected tree is
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3 ------&gt; NULL
&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; \
&nbsp;&nbsp;  1---&gt; 2 -----&gt; NULL</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>      10
&nbsp;   /   \
&nbsp;  20   30
&nbsp; /  \
 40  60
<strong>Output:
</strong>10 20 30 40 60
40 20 60 10 30<strong>
Explanation:</strong>The connected tree is
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10 ---&gt; NULL
&nbsp;&nbsp;&nbsp;  &nbsp; /&nbsp;&nbsp;&nbsp;\
&nbsp;&nbsp;&nbsp;&nbsp; 20---&gt; 30 ---&gt; NULL
&nbsp;&nbsp; /&nbsp;&nbsp; \
&nbsp;40---&gt; 60 ---&gt; NULL</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't have to read input or print anything.&nbsp;Complete the function <strong>connect()&nbsp;</strong>that takes the&nbsp;<strong>root </strong>of the tree as&nbsp; input parameter and connects the nodes that lie at the&nbsp;same level.</span><span style="font-size:18px">&nbsp;<br>
<br>
<strong>Note:&nbsp;</strong>The generated&nbsp;output will contain 2 lines.&nbsp;First line contains the&nbsp;level order traversal of the tree and second line contains the&nbsp;inorder traversal of the tree.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>
</div>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of nodes ≤ 10<sup>5</sup><br>
0 ≤ Data of a node ≤ 10<sup>5</sup></span></p>
</div>