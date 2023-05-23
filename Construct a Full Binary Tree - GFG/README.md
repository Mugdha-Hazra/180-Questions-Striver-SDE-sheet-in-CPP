# Construct a Full Binary Tree
## Medium
<div class="problems_problem_content__Xm_eO"><p style="text-align: justify;"><span style="font-size: 18px;">Given two arrays that represent Preorder traversals of a Full binary tree <strong>preOrder[]</strong> and its mirror tree <strong>preOrderMirror[]</strong>, your task is to complete the function&nbsp;<strong>constructBinaryTree()</strong>, that&nbsp;constructs the full binary tree using these two Preorder traversals.</span></p>
<p style="text-align: justify;"><span style="font-size: 16px;"><strong>N</strong></span><span style="font-size: 18px;"><strong>ote</strong>: It is not possible to construct a general binary tree using these two traversal. But it is possible to create a full binary tree using the above traversals without any ambiguity.</span></p>
<p style="text-align: justify;"><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong>
preOrder[] = {0,1,2}
preOrderMirror[] = {0,2,1} </span>

<span style="font-size: 18px;"><strong>Output :</strong></span><span style="font-size: 18px;">
                0
              /   \
             1     2<br></span><span style="font-size: 18px;"><strong>Explanation :<br></strong><span style="font-size: 14pt;">Tree in the output and it's mirror tree matches the </span></span><span style="font-size: 14pt;">preOrder and preOrderMirror.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong>  
preOrder[] = {1,2,4,5,3,6,7}
preOrderMirror[] = {1,3,7,6,2,5,4}

<strong>Output :  </strong>        
&nbsp;                1
               /    \
              2      3
            /   \   /  \
           4     5 6    7<br></span><strong><span style="font-size: 14pt;">Explanation :</span><br></strong><span style="font-size: 14pt;">Tree in the output and it's mirror tree matches the </span><span style="font-size: 14pt;">preOrder and preOrderMirror.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span></p>
<p><span style="font-size: 18px;">You don't need to read, input, or print anything. Your task is to complete the function&nbsp;<strong>constructBTree</strong><strong>,&nbsp;</strong>The function takes three arguments as input, first the array&nbsp;that represent Preorder traversals of a Full binary tree&nbsp;<strong>preOrder[],&nbsp;</strong>second the array that represents the preorder traversal of<strong>&nbsp;</strong>its mirror tree&nbsp;<strong>preOrderMirror[]&nbsp;</strong>and last the&nbsp;<strong>size</strong>&nbsp;of both the array,and returns root of the full binary tree.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N^2)<br><strong>Expected Auxiliary Space:</strong> O(N), where N indicates number of nodes.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 20px;">1&nbsp;</span><span style="font-size: 18px;">&lt;= Number of Nodes &lt;= 10<sup>3</sup></span></p></div>