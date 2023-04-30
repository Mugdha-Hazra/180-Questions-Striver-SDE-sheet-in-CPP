# Powerfull Integer
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a <strong>2D integer</strong> array of&nbsp;intervals whose length is <strong>n</strong> where <strong>intervals[i]=[start, end]</strong>&nbsp;I.e. all integers from start to end<strong> inclusive</strong>&nbsp;of start and end<strong> </strong>are also present&nbsp;and also we are given an integer <strong>k</strong>. We have to return the <strong>Powerfull Integer</strong>. A powerful Integer is an integer that occurs at <strong>least k</strong> times. If multiple integers have at least <strong>k occurrences,</strong>&nbsp;we have to return the <strong>maximum integer</strong> out of all those elements.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: If no integer occurs at least k times return <strong>-1</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
n=3
intervals={{1,3},{4,6},{3,4}}
k=2
<strong>Output: </strong>4
<strong>Explanation:
</strong>As we can see that 3 and 4 are the 2 integers 
that have 2 occurences(2&gt;=k) so we have 4 
in this case as the Powerfull integer as it 
is the maximum element which satisfies the condition.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
n=4
intervals={{1,4},{12,45},{3,8},{10,12}}
k=3
<strong>Output: </strong>-1
<strong>Explanation:</strong>
As we can see that no integer occurs 
3 times so in that case we have to 
return -1 (see Note).</span>
</pre>

<p><strong><span style="font-size:18px">Example 3:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
n=5
intervals={{16,21},{5,8},{12,17}
&nbsp;          {17,29},{9,24}}
k=3
<strong>Output: 
21</strong>
<strong>Explanation:
</strong>As we can see in the given <strong>range</strong> 17 
occured 4 times while 16,18,19,20 &amp; 21 occured 
3 times. So here we need 3 I.e K occurences 
so we can choose any but we will pick <strong>21</strong>, 
because it is maximum.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>powerfullInteger</strong>() which takes an integer<strong> n, </strong>a <strong>2d array intervals&nbsp;</strong>and an integer&nbsp;<strong>k</strong> respectively and you have to&nbsp;return powerful Integer&nbsp;if it exists else return <strong>-1</strong></span>.</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NlogN)<br>
<strong>Expected Space Complexity:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=<strong>n</strong>&lt;=10<sup>5</sup><br>
1&lt;=<strong>intervals</strong>[i][0]&lt;=<strong>intervals</strong>[i][1]&lt;=10<sup>9</sup><br>
1&lt;=<strong>k</strong>&lt;=10<sup>5</sup><br>
The sum of n over all test cases won't exceed <strong>10<sup>6</sup></strong></span></p>

<p>&nbsp;</p>
</div>