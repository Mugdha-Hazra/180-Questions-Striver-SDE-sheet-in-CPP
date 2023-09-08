# Binary Tree to BST
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Tree, convert it to Binary Search Tree in such a way <strong>that keeps the original structure of Binary Tree intact</strong>.</span><br>&nbsp;<span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
&nbsp;     </strong>1
&nbsp;   /   \
<strong>   </strong>2     3<strong>
Output: <br></strong>1 2 3<br><strong>Explanation:</strong><br>The converted BST will be <br>      2<br>    /   \<br>   1     3</span></pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>    </span>   <span style="font-size: 18px;">   1
       /    \
     2       3
   /        
 4       </span><span style="font-size: 18px;"><strong>
Output: <br></strong>1 2 3 4<strong>
Explanation:
</strong>The converted BST will be</span>

<span style="font-size: 18px;">        3
      /   \
    2     4
  /
 1</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>binaryTreeToBST()</strong>&nbsp;which takes the root of the Binary tree as input and returns the root of the BST. The driver code will print<strong> inorder</strong> traversal of the converted BST.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(NLogN).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes &lt;= 10<sup>5</sup></span></p></div>