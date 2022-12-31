# Find minimum number of Laptops required
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are <strong>N</strong>&nbsp;jobs and the start and finish time of the jobs are given in arrays <strong>start[]</strong> and <strong>end[]</strong> respectively. Each job requires one laptop and laptops can't be shared. Find the minimum number of laptops required given that you can give your laptop to someone else when you are not doing your job.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
start[] = {1, 2, 3}
end[] = {4, 4, 6}
<strong>Output:
</strong>3
<strong>Explanation:</strong>
We can clearly see that everyone's supposed to
be doing their job at time 3. So, 3 laptops
will be required at minimum.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
start[] = {1, 5, 2}
end[] = {2, 6, 3}
<strong>Output :</strong>
1
<strong>Explanation:</strong>
All jobs can be done using 1 laptop only.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minLaptops()</strong>&nbsp;which takes an integer N and two arrays start and end denoting starting and ending time of N jobs and returns minimum laptops required.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*logN)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 10<sup>5&nbsp;</sup><br>
1<sup>&nbsp;</sup>≤ start[i] &lt; end[i] ≤ 10<sup>9</sup></span></p>
</div>