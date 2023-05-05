# Good Subtrees
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a <strong>root</strong> node of a binary Tree and each node of the binary tree is assigned a <strong>value</strong> and you&nbsp;are also given an integer <strong>k</strong> and you have to return the <strong>count </strong>of <strong>Good subtrees</strong> of this binary Tree . Good subtree is a subtree such that the <strong>number</strong> of <strong>distinct</strong>&nbsp;<strong>values</strong>&nbsp;in this subtree is less than or equal to k.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: Subtree of a node consists of that node and all nodes of the subtrees of left and right child&nbsp;&nbsp;of that&nbsp;node&nbsp;&nbsp;if they exist .</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<img alt="" src="https://media.geeksforgeeks.org/img-practice/1_page-0001-1664728043.jpg" style="height:222px; width:394px">
</span><span style="font-size:18px"><strong>k=2</strong></span>
<span style="font-size:18px"><strong>Output</strong>: 4
<strong>Explanation:</strong>
We can see all leaves <strong>3,4,5</strong> form good subtrees as number of distinct values in subtrees is 1 which is less than k which is given as <strong>2,</strong>now  subtree which starts at 2 and has 3 as left node  is also a good subtree because the <strong>count</strong> of distinct values is <strong>2</strong> which is equal to k so overall 4 good subtrees.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<img alt="" src="https://media.geeksforgeeks.org/img-practice/2_page-0001-1664728091.jpg" style="height:222px; width:394px">
<span style="font-size:18px">k=1</span>
<span style="font-size:18px"><strong>Output: </strong>4
<strong>Explanation:</strong>
we can see all leaves <strong>2,2</strong> form good subtrees as number of distinct values in subtrees is 1 which is equal to k which is given as 1, now  both subtrees which starts at 2 and has 2 as child also forms  a good subtree because <strong>count</strong> of distinct values is 1 which is equal to k so overall <strong>4</strong> good subtrees.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>goodSubtrees</strong>() which takes <strong>root</strong> of binary tree&nbsp; and an integer&nbsp;<strong>k</strong> respectively and you have to&nbsp; return the <strong>count</strong> of&nbsp;good subtrees .</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n*k)<br>
<strong>Expected Space Complexity:</strong> O(n+n*k), where n is the size of recursion stack.</span><br>
<br>
<span style="font-size:18px"><strong>Constraints</strong>:<br>
1&lt;=n&lt;=10<sup>5</sup>&nbsp;(Number of nodes in binary Tree)<br>
1&lt;=node.data&lt;=25<br>
1&lt;=k&lt;=20<br>
The sum of n over all test cases won't exceed 5*10<sup>5</sup></span></p>
</div>