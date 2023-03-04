# Best Node
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a tree rooted at node&nbsp;<strong>1</strong>. The tree is given in form of an array&nbsp;<strong>P</strong>&nbsp;where&nbsp;<strong>P<sub>i</sub></strong>&nbsp;denotes the parent of node <strong>i</strong>, Also <strong>P<sub>1</sub></strong>&nbsp;= <strong>-1</strong>, as 1 is the root node.&nbsp;Every node <strong>i</strong>&nbsp;has a value <strong>A<sub>i</sub></strong>&nbsp;associated with it. At first, you have to choose any node to start with, after that from a node you can go to any of its child nodes. You've to keep moving to a child node until you reach a leaf node. Every time you get to a new node, you write its value. Let us assume that the integer sequence in your path is&nbsp;<strong>B</strong>.<br>
Let us define a function&nbsp;<em>f</em>&nbsp;over&nbsp;<strong>B</strong>, which is defined as follows:<br>
<em>f(B) =&nbsp;</em>B<sub>1</sub>&nbsp;- B<sub>2</sub>&nbsp;+ B<sub>3</sub>&nbsp;- B<sub>4</sub>&nbsp;+ B<sub>5</sub>.... + (-1)<sup>(k-1)</sup>B<sub>k</sub>.<br>
You have to find the maximum possible value of&nbsp;<em>f(B)</em>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3,
A = { 1, 2, 3}
P = {-1, 1, 1}
Output:
3
Explanation:
The resulting tree is:
        1(1)
      /     \
     2(2)   3(3)
If we choose our starting node as 3, then the
resulting sequence will be B = { 3 },
which will give the maximum possible value.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3,
A = { 3, 1, 2}
P = {-1, 1, 2}
<strong>Output:
</strong>4<strong>
Explanation:
</strong>The resulting tree is:
  1(3)
  |
  2(1)
  |
  3(2)
If we choose our starting node as 1, then the
resulting sequence will be B = { 3 , 1 , 2 }.
The value which we'll get is, 3-1+2 = 4, which
is the maximum possible value.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function&nbsp;<strong>bestNode()</strong> which takes an&nbsp;integer&nbsp;<strong>N</strong>&nbsp;and&nbsp;two integer arrays <strong>A</strong>,&nbsp;<strong>P</strong>&nbsp;as&nbsp;input parameters&nbsp;and returns the maximum possible value possible.</span></p>

<p><strong><span style="font-size:18px">Expected Time Complexity: O(N)<br>
Expected Space Complexity: O(N)</span></strong></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp; N&nbsp;≤&nbsp;10<sup>5</sup><br>
-10<sup>5</sup> ≤&nbsp; A<sub>i</sub>&nbsp;≤&nbsp;10<sup>5</sup><br>
-1 ≤&nbsp; P<sub>i</sub>&nbsp;≤ N</span></p>
</div>