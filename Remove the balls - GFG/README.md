# Remove the balls
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Imagine an imaginary array of length N containing balls. Given 2&nbsp;arrays&nbsp;<strong>color </strong>and<strong> radius</strong>&nbsp;of length<strong> N </strong>each<strong>, </strong>where color[i] represents the color of the ith ball while radius[i] represents the radius of ith ball. If two <strong>consecutive </strong>balls have the same color and size, both are&nbsp;removed from the array. Geek wants to know&nbsp;the length of the final imaginary&nbsp;array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 3
color[] = {2, 2, 5}
radius[] = {3, 3, 4}
<strong>Output:</strong>&nbsp;
1
<strong>Explanation</strong>: 
First ball and second ball have same color 2 and 
same radius 3.So,after removing only one ball 
is left.It could not be removed from the array. 
Hence, the final array has length 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
color[] = {1, 3, 3, 1}
radius[] = {2, 5, 5, 2}
<strong>Output:
</strong>0
<strong>Explanation</strong>:
Ball 2 and ball 3 have same color 3 and same radius
5.So,they are removed. Now, we have got our
color[]={1, 1} and radius[]={2, 2}.Both the left
balls are consecutive now and they are having
same color and radius. So,these two balls are
removed as well. Now,we are left with empty
final array. Hence, the length of final array is 0.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp; </strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>finLength(),</strong> which takes integer N and array color[ ] and array radius[ ] as input parameters and returns the size of the final imaginary array.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n)<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp;N&nbsp;≤ 10<sup>5</sup><br>
1 ≤ color[i]&nbsp;≤ 10<sup>9</sup><br>
1 ≤ radius[i]&nbsp;≤ 10<sup>9</sup></span><span style="font-size:18px"><sup>&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</sup></span></p>
</div>