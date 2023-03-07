# Max Level Sum in Binary Tree
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Tree having positive and negative nodes. Find the maximum sum of a level in the given Binary Tree.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input :               </strong>
             4
          /    \
         2     -5
        / \    / \
      -1   3  -2  6</span>

<span style="font-size:18px"><strong>Output:</strong> 6</span>

<span style="font-size:18px"><strong>Explanation :</strong>
Sum of all nodes of 0'th level is 4
Sum of all nodes of 1'th level is -3
Sum of all nodes of 2'th level is 6
Hence maximum sum is 6</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :          </strong>
            1
          /   \
         2     3
        / \     \
       4   5     8
                / \
               6   7  </span>

<span style="font-size:18px"><strong>Output : </strong> 17</span>

<span style="font-size:18px"><strong>Explanation: </strong>Maximum sum is at level 2.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>maxLevelSum()</strong> which takes root node as input parameter and returns the maximum sum of any horizontal level in the given Binary Tree.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)</span>, <span style="font-size:18px">where N is no of node.</span><br>
<span style="font-size:18px"><strong>Expected Auxiliary Space:</strong> O(W), Where W is the max width of the tree.</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>4</sup></span></p>
</div>