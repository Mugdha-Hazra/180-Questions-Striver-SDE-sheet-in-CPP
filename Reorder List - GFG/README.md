# Reorder List
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a singly linked list<em>: A</em><sub>0</sub>→<em>A</em><sub>1</sub>→...→<em>A</em><sub><em>n</em>-2</sub>→<em>A</em><sub>n-1</sub>, reorder it to: <em>A</em><sub>0</sub>→<em>A</em><sub><em>n-1</em></sub>→<em>A</em><sub>1</sub>→<em>A</em><sub><em>n</em>-2</sub>→<em>A</em><sub>2</sub>→<em>A</em><sub><em>n</em>-3</sub>→...</span><br>
<span style="font-size:18px"><span style="color:#000000">For example: Given 1-&gt;2-&gt;3-&gt;4-&gt;5 its reorder is 1-&gt;5-&gt;2-&gt;4-&gt;3.</span></span></p>

<p><span style="font-size:18px"><strong>Note: It is recommended do this in-place without altering the node's&nbsp;values.</strong></span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:
</strong><strong>LinkedList:</strong> 1-&gt;2-&gt;3
<strong>Output: </strong>1 3 2
<strong>Explanation:
</strong>Here n=3, so the correct
order is<em> A</em><sub>0</sub>→<em>A</em><sub><em>2</em></sub>→<em>A</em><sub><em>1</em></sub></span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">Explanation: 1-&gt;7-&gt;3-&gt;4
<strong>Output: </strong>1 4 7 3
<strong>Explanation:
</strong>Here n=4, so the correct
order is<em> A</em><sub>0</sub>→<em>A</em><sub><em>3</em></sub>→<em>A</em><sub><em>1</em></sub>→<em>A</em><sub><em>2</em></sub></span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>reorderList</strong>() which should reorder the list as required. The reorder list is automatically printed by the driver's code.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: Try to solve without using any auxilliary space.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 5*10<sup>5</sup><br>
1 &lt;= A[ i ]&nbsp;&lt;= 10<sup>5</sup></span></p>
</div>