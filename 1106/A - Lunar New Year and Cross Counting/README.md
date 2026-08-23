<h2><a href="https://codeforces.com/contest/1106/problem/A" target="_blank" rel="noopener noreferrer">1106A — Lunar New Year and Cross Counting</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1106A](https://codeforces.com/contest/1106/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Lunar New Year and Cross Counting</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">Lunar New Year is approaching, and you bought a matrix with lots of "crosses".</span></p><p>This matrix $$$M$$$ of size $$$n \times n$$$ contains only '<span class="tex-font-style-tt">X</span>' and '<span class="tex-font-style-tt">.</span>' (without quotes). The element in the $$$i$$$-th row and the $$$j$$$-th column $$$(i, j)$$$ is defined as $$$M(i, j)$$$, where $$$1 \leq i, j \leq n$$$. We define a <span class="tex-font-style-it">cross</span> appearing in the $$$i$$$-th row and the $$$j$$$-th column ($$$1  \lt  i, j  \lt  n$$$) if and only if $$$M(i, j) = M(i - 1, j - 1) = M(i - 1, j + 1) = M(i + 1, j - 1) = M(i + 1, j + 1) = $$$ '<span class="tex-font-style-tt">X</span>'.</p><p>The following figure illustrates a cross appearing at position $$$(2, 2)$$$ in a $$$3 \times 3$$$ matrix.</p><center> <pre class="verbatim"><br>X.X<br>.X.<br>X.X<br></pre> </center><p>Your task is to find out the number of <span class="tex-font-style-it">crosses</span> in the given matrix $$$M$$$. Two <span class="tex-font-style-it">crosses</span> are different if and only if they appear in different rows or columns.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains only one positive integer $$$n$$$ ($$$1 \leq n \leq 500$$$), denoting the size of the matrix $$$M$$$.</p><p>The following $$$n$$$ lines illustrate the matrix $$$M$$$. Each line contains exactly $$$n$$$ characters, each of them is '<span class="tex-font-style-tt">X</span>' or '<span class="tex-font-style-tt">.</span>'. The $$$j$$$-th element in the $$$i$$$-th line represents $$$M(i, j)$$$, where $$$1 \leq i, j \leq n$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single line containing only one integer number $$$k$$$ — the number of <span class="tex-font-style-it">crosses</span> in the given matrix $$$M$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0027863905168025194" id="id003182627809192138" class="input-output-copier">Copy</div></div><pre id="id0027863905168025194">5
.....
.XXX.
.XXX.
.XXX.
.....
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001438471323558086" id="id0011407477449740866" class="input-output-copier">Copy</div></div><pre id="id001438471323558086">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006845222382125461" id="id005045571983143425" class="input-output-copier">Copy</div></div><pre id="id006845222382125461">2
XX
XX
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000886696267124013" id="id00890441144470906" class="input-output-copier">Copy</div></div><pre id="id000886696267124013">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0006519247421115693" id="id008339017284349521" class="input-output-copier">Copy</div></div><pre id="id0006519247421115693">6
......
X.X.X.
.X.X.X
X.X.X.
.X.X.X
......
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003886946801433412" id="id007819149996645663" class="input-output-copier">Copy</div></div><pre id="id003886946801433412">4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, a <span class="tex-font-style-it">cross</span> appears at $$$(3, 3)$$$, so the answer is $$$1$$$.</p><p>In the second sample, no <span class="tex-font-style-it">crosses</span> appear since $$$n  \lt  3$$$, so the answer is $$$0$$$.</p><p>In the third sample, <span class="tex-font-style-it">crosses</span> appear at $$$(3, 2)$$$, $$$(3, 4)$$$, $$$(4, 3)$$$, $$$(4, 5)$$$, so the answer is $$$4$$$.</p></div>