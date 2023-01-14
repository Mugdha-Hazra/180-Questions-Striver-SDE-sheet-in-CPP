# Maximum Number of Toys
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given <strong>N</strong> toys&nbsp;in a shop&nbsp;.<br>
The cost of each toy is represented by an array <strong>A[]</strong>. You are given Q queries, For ith&nbsp;query, You have a <strong>C</strong> amount of money which you can use to purchase the toys. Also there are K broken toys and you won't purchase them. The task is to calculate the maximum number of toys you can purchase using the C amount of money.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> 1 based indexing is used. Each query is treated independently.&nbsp;<br>
Query definition: The first element represents an integer C where C=Queries[i][0].<br>
The second element represents an integer K, where K = Queries[i][1].<br>
The next K integers represent the indices of broken toys which are Queries[i][j] ,j&gt;1</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
A[] = {8, 6, 9, 2, 5}
Q = 2
Query[][] = {{12,2,3,4},{30,0}}
<strong>Output:</strong>
2 5
<strong>Explanation:</strong>
<strong>Query 1:</strong> C = 12, K = 2 , 
Indices of Broken toys is {3,4}
Indices of Available toys are {1,2,5}
If we purchase the toys 2 and 5 , 
then cost = A[2]+A[5]= 6+5 = 11,
Therefore,We purchase the 2 toys 
using 11 amount of money.
<strong>Query 2:</strong> C = 30, K = 0
There is no broken toy. 
We can purchase all toys,
cost = A[1]+A[2]+A[3]+A[4]+A[5]= 30
Therefore,We purchase the 5 toys
using 30 amount of money.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
A[] = {3,3}
Q = 1
Query[][] = {{1,0}}
<strong>Output:</strong>
0
<strong>Explanation:</strong>
<strong>Query 1:</strong> C = 1, K = 0 , 
There is no broken toy. 
We have not enough amount to purchase 
any toy.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function<strong>&nbsp;maximumToys()</strong>&nbsp;which takes the integer&nbsp;<strong>N</strong>&nbsp;and array&nbsp;<strong>A[ ],&nbsp; </strong>integer<strong> Q </strong>and 2D array<strong>&nbsp;Queries[][]</strong>&nbsp;as input parameters&nbsp;and returns the array of answers of each query.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(NLogMx + Q*K*LogMx + Q*(LogMx)<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(Mx)<br>
Where Mx is the maximum element present in the array A[i].</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp;N ≤&nbsp;10<sup>5</sup><br>
1 ≤ A[i] ≤&nbsp;10<sup>6</sup><br>
1 ≤ Q&nbsp;≤&nbsp;10<sup>4</sup></span><br>
<span style="font-size:18px">1 ≤ C&nbsp;≤&nbsp;10<sup>9</sup><br>
0 ≤ K&nbsp;≤&nbsp;10<br>
1 ≤ Queries[i][j]&nbsp;≤ N, j&gt;1</span></p>
</div>