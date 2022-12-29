# Asteroid Collision
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">We are given an integer array <strong>asteroids</strong>&nbsp;of size <strong>N</strong> representing asteroids in a row. For&nbsp;each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.<br>
Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are of&nbsp;same size, both will explode. Two asteroids moving in the same direction will never meet.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 3<br>
asteroids[ ] = {3,&nbsp;5, -3}<br>
<strong>Output:&nbsp;</strong>{3, 5}<br>
<strong>Explanation:</strong>&nbsp;The asteroid 5 and -3&nbsp;collide resulting in 5. The 5 and 3 never collide.</span></div>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 2<br>
asteroids[ ] = {10, -10}<br>
<strong>Output:&nbsp;</strong>{ }<br>
<strong>Explanation:</strong>&nbsp;The asteroid -10&nbsp;and 10&nbsp;collide exploding each other.</span></div>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>asteroidCollision()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers <strong>asteroids&nbsp;</strong>and <strong>N&nbsp;</strong>as parameters and returns the state of asteroids after all collisions.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
-1000 ≤ asteroids<sub>i&nbsp; </sub>≤ 1000<br>
asteroids[i]!=0</span></p>
</div>