<h2><a href="https://codeforces.com/contest/1438/problem/C" target="_blank" rel="noopener noreferrer">1438C — Engineer Artem</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1438C](https://codeforces.com/contest/1438/problem/C) |

## Topics
`2-sat` `chinese remainder theorem` `constructive algorithms` `fft` `flows`

---

## Problem Statement

<div class="header"><div class="title">C. Engineer Artem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Artem is building a new robot. He has a matrix $$$a$$$ consisting of $$$n$$$ rows and $$$m$$$ columns. The cell located on the $$$i$$$-th row from the top and the $$$j$$$-th column from the left has a value $$$a_{i,j}$$$ written in it. </p><p>If two adjacent cells contain the same value, the robot will break. A matrix is called <span class="tex-font-style-bf">good</span> if no two adjacent cells contain the same value, where two cells are called adjacent if they share a side. </p><p>Artem wants to <span class="tex-font-style-bf">increment the values in some cells by one</span> to make $$$a$$$ good.</p><p>More formally, find a good matrix $$$b$$$ that satisfies the following condition — </p><ul> <li> For all valid ($$$i,j$$$), either $$$b_{i,j} = a_{i,j}$$$ or $$$b_{i,j} = a_{i,j}+1$$$. </li></ul><p>For the constraints of this problem, it can be shown that such a matrix $$$b$$$ always exists. If there are several such tables, you can output any of them. Please note that you do not have to minimize the number of increments.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10$$$). Description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n, m$$$ ($$$1 \le n \le 100$$$, $$$1 \le m \le 100$$$)  — the number of rows and columns, respectively.</p><p>The following $$$n$$$ lines each contain $$$m$$$ integers. The $$$j$$$-th integer in the $$$i$$$-th line is $$$a_{i,j}$$$ ($$$1 \leq a_{i,j} \leq 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each case, output $$$n$$$ lines each containing $$$m$$$ integers. The $$$j$$$-th integer in the $$$i$$$-th line is $$$b_{i,j}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031429137518372696" id="id00035795560196694054" class="input-output-copier">Copy</div></div><pre id="id0031429137518372696">3
3 2
1 2
4 5
7 8
2 2
1 1
3 3
2 2
1 3
2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00607888351907452" id="id006163053320047829" class="input-output-copier">Copy</div></div><pre id="id00607888351907452">1 2
5 6
7 8
2 1
4 3
2 4
3 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In all the cases, you can verify that no two adjacent cells have the same value and that $$$b$$$ is the same as $$$a$$$ with some values incremented by one. </p></div>