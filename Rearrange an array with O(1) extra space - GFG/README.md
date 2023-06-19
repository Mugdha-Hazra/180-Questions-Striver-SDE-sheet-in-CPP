# Rearrange an array with O(1) extra space
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;<strong>arr[]</strong>&nbsp;of size <strong>N</strong> where every element is in the range from&nbsp;<strong>0&nbsp;to&nbsp;n-1</strong>. Rearrange the given array so that the transformed array <strong>arr<sup>T</sup>[i]</strong> becomes&nbsp;<strong>arr[arr[i]]</strong>.</span></p>
<p><strong><span style="font-size: 18px;">NOTE:</span></strong><span style="font-size: 18px;">&nbsp;<strong>arr </strong>and&nbsp;<strong>arr<sup>T</sup> </strong>are both same variables, representing the array before and after transformation respectively.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:<br></strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 2
arr[] = {1,0}
<strong>Output: </strong>0 1<strong>
Explanation: 
</strong>arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5
arr[] = {4,0,2,1,3}
<strong>Output: </strong>3 4 2 0 1<strong>
Explanation: 
</strong>arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
and so on.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything.&nbsp;The task is to complete the function <strong>arrange</strong>() which takes arr and N as input parameters and rearranges the elements in the array in-place.<strong>&nbsp;</strong></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= N &lt;= 10<sup>5</sup><br>0 &lt;= Arr[i] &lt; N</span></p></div>