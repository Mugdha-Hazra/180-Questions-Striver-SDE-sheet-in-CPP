# Length of the longest subarray with positive product
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array&nbsp;<strong>arr[]</strong>&nbsp;consisting of <strong>n</strong>&nbsp;integers</span><span style="font-size:18px">, find&nbsp;the length&nbsp;of the longest subarray with&nbsp;<strong>positive (non zero) product</strong>.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>arr[] ={0, 1, -2, -3, -4} </span>
<span style="font-size:18px"><strong>Output:
</strong>3</span>
<span style="font-size:18px"><strong>Explanation:</strong> 
The longest subarray with positive product is: 
{1, -2, -3}.</span><span style="font-size:18px">Therefore, the required length is 3.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>arr[]={-1, -2, 0, 1, 2}
<strong>Output:
</strong>2
<strong>Explanation:</strong>
The longest subarray with positive products 
are: {-1, -2}, {1, 2}. Therefore, the required 
length is 2.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;</strong>This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function&nbsp;<strong>maxLength</strong>() that takes array<strong>&nbsp;arr[],&nbsp;</strong>and an integer<strong>&nbsp;n</strong>&nbsp;as parameters and return the length of the longest subarray where the product of all of its element is positive.&nbsp;</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p>&nbsp;</p>

<div><span style="font-size:18px"><strong>Constraints:</strong></span></div>

<div><span style="font-size:18px">&nbsp;1&lt;=n&lt;=10<sup>5</sup></span></div>

<div><span style="font-size:18px">-10<sup>9</sup>&lt;=arr[i]&lt;=10<sup>9</sup></span><br>
&nbsp;</div>
</div>