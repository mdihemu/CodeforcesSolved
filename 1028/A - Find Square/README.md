<h2><a href="https://codeforces.com/contest/1028/problem/A" target="_blank" rel="noopener noreferrer">1028A — Find Square</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1028A](https://codeforces.com/contest/1028/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Find Square</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Consider a table of size $$$n \times m$$$, initially fully white. Rows are numbered $$$1$$$ through $$$n$$$ from top to bottom, columns $$$1$$$ through $$$m$$$ from left to right. Some square inside the table with <span class="tex-font-style-bf">odd</span> side length was painted black. Find the center of this square.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 115$$$) — the number of rows and the number of columns in the table.</p><p>The $$$i$$$-th of the next $$$n$$$ lines contains a string of $$$m$$$ characters $$$s_{i1} s_{i2} \ldots s_{im}$$$ ($$$s_{ij}$$$ is '<span class="tex-font-style-tt">W</span>' for white cells and '<span class="tex-font-style-tt">B</span>' for black cells), describing the $$$i$$$-th row of the table.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output two integers $$$r$$$ and $$$c$$$ ($$$1 \le r \le n$$$, $$$1 \le c \le m$$$) separated by a space — the row and column numbers of the center of the black square.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00951128474687495" id="id005321658025586024" class="input-output-copier">Copy</div></div><pre id="id00951128474687495">5 6<br>WWBBBW<br>WWBBBW<br>WWBBBW<br>WWWWWW<br>WWWWWW<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005299794899170904" id="id008202188181871751" class="input-output-copier">Copy</div></div><pre id="id005299794899170904">2 4<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004762839747997154" id="id003292647686285074" class="input-output-copier">Copy</div></div><pre id="id004762839747997154">3 3<br>WWW<br>BWW<br>WWW<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004167029824452111" id="id00909738432742251" class="input-output-copier">Copy</div></div><pre id="id004167029824452111">2 1<br></pre></div></div></div>