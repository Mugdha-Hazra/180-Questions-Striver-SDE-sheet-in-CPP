# Nearest smaller tower
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array where each element (<strong>arr[i]</strong>) represents the height of the tower. Find for each tower, the nearest possible tower that is shorter than it. You can look left or right on both sides.<br>
<strong>Note :&nbsp;</strong></span></p>

<ul>
	<li>
	<p><span style="font-size:18px">If&nbsp;two smaller towers&nbsp;are at the same distance, pick the smallest tower.</span></p>
	</li>
	<li>
	<p><span style="font-size:18px">If two towers have the same height then we choose the one with a smaller index.</span></p>
	</li>
</ul>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
arr[] = {1,3,2}</span>
<span style="font-size:18px"><strong>Output:</strong> 
{-1,0,0}</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">For <strong>0th</strong> Index : no tower is smallest, so <strong>-1</strong>.
For <strong>1st</strong> Index : For 3, here 1 &amp; 2 both are 
small &amp; at a same distance, so we will pick 1, 
beacuse it has smallest value, so <strong>0(Index)</strong>
For <strong>2nd</strong> Index : here 1 is smaller, so <strong>0(Index)
</strong></span><span style="font-size:18px">So the final output will be which consistes 
Indexes are {-1,0,0}.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input: 
</span></strong><span style="font-size:18px">arr[] = {4,8,3,5,3}</span>
<strong><span style="font-size:18px">Output: 
</span></strong><span style="font-size:18px">{2,2,-1,2,-1}
</span>
<strong><span style="font-size:18px">Explanation:</span></strong> 
<span style="font-size:18px">For <strong>0th</strong> Index : here 3 is the smaller, so <strong>2(Index)</strong> 
For <strong>1st</strong> Index : For 8, here 4 &amp; 3 both are
small &amp; at a same distance, so we will pick 3, so <strong>2(Index)</strong>
For <strong>2nd</strong> Index : no tower is smallest, so <strong>-1</strong>.
For <strong>3rd</strong> Index : For 5, here 3 &amp; 3 both are
small &amp; at a same distance, so we will pick 
<strong>3</strong>(2nd Index) because it smaller Index, so <strong>2(Index)
</strong>For <strong>4th</strong> Index : no tower is smallest, so <strong>-1</strong>.</span>
<span style="font-size:18px">So the final output will be which consistes
Indexes are {2,2,-1,2,-1}.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>nearestSmallerTower()&nbsp;</strong>which takes an array of heights&nbsp;of the towers&nbsp;as input parameter and returns an array of <strong>indexes</strong> of the nearest smaller tower. If there is no smaller tower on both sides then<strong> return -1</strong> for that tower.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= arr[i]&nbsp;&lt;= 10<sup>5</sup></span></p>

<p>&nbsp;</p>
</div>