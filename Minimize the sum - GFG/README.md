# Minimize the sum
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given&nbsp;<strong>N</strong>&nbsp;elements, you can remove any two elements from the list, note their sum, and add the sum to the list. Repeat these steps while there is more than a single element in the list. The task is to <strong>minimize</strong> the sum of these chosen sums.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
arr[] = {1, 4, 7, 10}

<strong>Output:
</strong>39

<strong>Explanation:</strong>
Choose 1 and 4, Sum = 1 + 4 = 5.
arr[] = {5, 7, 10}&nbsp;
Choose 5 and 7, Sum = 5 + (5 + 7) = 17.
arr[] = {12, 10}&nbsp;
Choose 12 and 10,&nbsp;<strong>Sum = 17 + (12 + 10) = 39.</strong>
arr[] = {22}</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
arr[] = {1, 3, 7, 5, 6}

<strong>Output:
</strong>48
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong></span></p>

<p><span style="font-size:18px">You don't need to read input or print anything. The task is to complete the function <strong>minimizeSum()</strong>&nbsp;which takes&nbsp;N as size of arr array&nbsp;and a arr&nbsp;array. Your&nbsp;task is to <strong>minimize</strong> the sum of these chosen sums and return it.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N * log(N))<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 &lt;= N, arr[i]&nbsp;&lt;= 10<sup>5</sup></span></p>
</div>