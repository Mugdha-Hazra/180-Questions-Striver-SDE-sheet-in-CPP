# Wine Buying and Selling
## Medium
<div class="problems_problem_content__Xm_eO"><p>Given an array, Arr[] of size N represents N house&nbsp;built along a straight line with equal distance between adjacent houses. Each house has a certain number of wine and they want to buy/sell those wines to other houses. Transporting one bottle of wine from one house to an adjacent house results in one unit of work. The task is to find the minimum number of work is required to fulfill all the demands of those N houses.</p>

<ol>
	<li>if arr[i] &lt;&nbsp;0, then ith house wants to sell arr[i] number of a wine bottle to other houses.</li>
	<li>if arr[i] &gt;&nbsp;0, then ith house wants to buy&nbsp;arr[i] number of a wine bottle from&nbsp;other houses.</li>
</ol>

<p><strong>Note:</strong> One have to print the minimum number such that, all the house can buy/sell wine to each other.<br>
It is guaranteed that sum of all the elements of the array will be 0.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> N = 5,
Arr[] = {5, -4, 1, -3, 1}
<strong>Output:</strong> 9
<strong>Explanation: </strong>
1th house can sell 4 wine bottles to 0th house,
total work needed 4*(1-0) = 4, new arr[] = 1,0,1,-3,1
now 3rd house can sell wine to 0th, 2th and 4th.
so total work needed = 1*(3-0)+1*(3-2)+1*(4-3) = 5
So total work will be 4+5 = 9</pre>

<p><strong>Example 2:&nbsp;</strong></p>

<pre><strong>Input:</strong> N = 6,
Arr[]={-1000, -1000, -1000, 1000, 1000, 1000}
<strong>Output:</strong> 9000
<strong>Explanation: </strong> 
0th house sell 1000 wine bottles to 3rd house, 
total work needed 1000*(3-0) = 3000. 
1st house sell 1000 wine bottles to 4th house,
total work needed 3000 + 1000*(3-0) = 6000.
2nd house sell 1000 wine bottles to 5th house,
total work needed 6000 + 1000*(3-0) = 9000. 
So total work will be 9000 unit.
</pre>

<p><strong>Your Task: &nbsp;</strong><br>
You don't need to read input or print anything. Complete the function <strong>wineSelling()</strong>&nbsp;which takes the array Arr[] and its size N as input parameters and returns an integer as output.</p>

<p><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</p>

<p><br>
<strong>Constraints:</strong><br>
1 ≤ N ≤ 10^5<br>
-10^6 ≤ Arr[i] ≤ 10^6</p>
</div>