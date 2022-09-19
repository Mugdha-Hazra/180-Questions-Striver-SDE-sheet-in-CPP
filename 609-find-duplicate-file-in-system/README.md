<h2><a href="https://leetcode.com/problems/find-duplicate-file-in-system/">609. Find Duplicate File in System</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a list <code style="user-select: auto;">paths</code> of directory info, including the directory path, and all the files with contents in this directory, return <em style="user-select: auto;">all the duplicate files in the file system in terms of their paths</em>. You may return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">A group of duplicate files consists of at least two files that have the same content.</p>

<p style="user-select: auto;">A single directory info string in the input list has the following format:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"root/d1/d2/.../dm f1.txt(f1_content) f2.txt(f2_content) ... fn.txt(fn_content)"</code></li>
</ul>

<p style="user-select: auto;">It means there are <code style="user-select: auto;">n</code> files <code style="user-select: auto;">(f1.txt, f2.txt ... fn.txt)</code> with content <code style="user-select: auto;">(f1_content, f2_content ... fn_content)</code> respectively in the directory "<code style="user-select: auto;">root/d1/d2/.../dm"</code>. Note that <code style="user-select: auto;">n &gt;= 1</code> and <code style="user-select: auto;">m &gt;= 0</code>. If <code style="user-select: auto;">m = 0</code>, it means the directory is just the root directory.</p>

<p style="user-select: auto;">The output is a list of groups of duplicate file paths. For each group, it contains all the file paths of the files that have the same content. A file path is a string that has the following format:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"directory_path/file_name.txt"</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> paths = ["root/a 1.txt(abcd) 2.txt(efgh)","root/c 3.txt(abcd)","root/c/d 4.txt(efgh)","root 4.txt(efgh)"]
<strong style="user-select: auto;">Output:</strong> [["root/a/2.txt","root/c/d/4.txt","root/4.txt"],["root/a/1.txt","root/c/3.txt"]]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> paths = ["root/a 1.txt(abcd) 2.txt(efgh)","root/c 3.txt(abcd)","root/c/d 4.txt(efgh)"]
<strong style="user-select: auto;">Output:</strong> [["root/a/2.txt","root/c/d/4.txt"],["root/a/1.txt","root/c/3.txt"]]
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= paths.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= paths[i].length &lt;= 3000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sum(paths[i].length) &lt;= 5 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">paths[i]</code> consist of English letters, digits, <code style="user-select: auto;">'/'</code>, <code style="user-select: auto;">'.'</code>, <code style="user-select: auto;">'('</code>, <code style="user-select: auto;">')'</code>, and <code style="user-select: auto;">' '</code>.</li>
	<li style="user-select: auto;">You may assume no files or directories share the same name in the same directory.</li>
	<li style="user-select: auto;">You may assume each given directory info represents a unique directory. A single blank space separates the directory path and file info.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Imagine you are given a real file system, how will you search files? DFS or BFS?</li>
	<li style="user-select: auto;">If the file content is very large (GB level), how will you modify your solution?</li>
	<li style="user-select: auto;">If you can only read the file by 1kb each time, how will you modify your solution?</li>
	<li style="user-select: auto;">What is the time complexity of your modified solution? What is the most time-consuming part and memory-consuming part of it? How to optimize?</li>
	<li style="user-select: auto;">How to make sure the duplicated files you find are not false positive?</li>
</ul>
</div>