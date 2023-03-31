# Even Swap
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array<strong> a</strong> and you need to generate an array <strong>b</strong>. You are allowed to apply only one type of operation on the array <strong>a,&nbsp;</strong>any number of times. In one operation you can swap <strong>a<sub>i</sub></strong>,&nbsp;<strong>a<sub>i+1</sub></strong> if <strong>a<sub>i</sub>+a<sub>i+1</sub></strong> is even.</span><br>
<span style="font-size:18px">Array <strong>b </strong>should be generated after applying the above operation any number of times on array <strong>a</strong> and array <strong>b</strong> should be lexicographically the largest among all arrays that can be generated from array <strong>a,</strong>&nbsp;after applying the above operation any number of times.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=3
a[]={1,3,5}
<strong>Output:</strong>
5,3,1
<strong>Explanation: </strong>[1,3,5],[1,5,3],[3,1,5],[3,5,1],
[5,1,3] and [5,3,1] are all possible
values of array <strong>b</strong> while the last one is 
lexicographically largest.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=4
a[]={1,3,4,2}
<strong>Output:</strong>
b[]={3,1,4,2}
<strong>Explanation:</strong> [1,3,4,2],[1,3,2,4],[3,1,2,4] and 
[3,1,4,2] are all possible values of <strong>b</strong> among 
which the last one is lexicographically largest one.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>lexicographically Largest()</strong>&nbsp;which takes the array arr[], and its size N<strong>&nbsp;</strong>as input parameters&nbsp;and returns the array b.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NlogN)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10</span><sup><span style="font-size:15px">5</span></sup><br>
<span style="font-size:18px">1&lt;= arr[i] &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">Array may contain duplicate elements.&nbsp;</span></p>
</div>