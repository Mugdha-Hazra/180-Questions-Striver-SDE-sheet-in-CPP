# Wifi Range
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are&nbsp;<strong>N</strong> rooms in a straight line in Geekland State University's hostel, you are given a binary string <strong>S</strong> of length <strong>N</strong> where <strong>S[i] = '1'</strong> represents that there is a wifi in <strong>i<sup>th</sup></strong> room or&nbsp;<strong>S[i] = '0'</strong>&nbsp;represents no wifi. Each wifi has range <strong>X</strong> <em>i.e.</em> if there is a wifi in i<sup>th</sup> room then its range will go upto <strong>X</strong> more rooms on its left as well as right. You have to find whether students in&nbsp;all rooms can use wifi.</span></p>

<p><span style="font-size:18px"><strong>Example 1:&nbsp;</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3, X = 0
S = "010"
<strong>Output:</strong>
0
<strong>Explanation</strong>: 
Since the range(X)=0, So Wifi is only 
accessible in second room &amp; 1st &amp; 2nd
room have no wifi.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:&nbsp;</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5, X = 1
S = "10010"
<strong>Output:</strong>
1
<strong>Explanation</strong>: 
Index 0 : Wifi is available
Index 1 : Since range of 0th Index is 1
&nbsp;         so, here wifi will be available.
Index 2 : Since range of 3rd Index is 1
&nbsp;         so, here also wifi available.
Index 3 : Wifi is available
Index 4 : here range of 3rd Index is available.
So all the rooms have wifi, so return true.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>wifiRange( )</strong>&nbsp;which takes integer&nbsp;<strong>N</strong>, string <strong>S</strong> and integer <strong>X</strong> as input parameters and returns true if&nbsp;students in&nbsp;all rooms can use wifi or false otherwise.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>:O(N)</span><br>
<span style="font-size:18px"><strong>Expected Space Complexity</strong>:O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 10<sup>6</sup><br>
0 ≤ X&nbsp;≤ 10<sup>6</sup></span></p>
</div>