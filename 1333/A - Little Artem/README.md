<h2><a href="https://codeforces.com/contest/1333/problem/A" target="_blank" rel="noopener noreferrer">1333A — Little Artem</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1333A](https://codeforces.com/contest/1333/problem/A) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">A. Little Artem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Young boy Artem tries to paint a picture, and he asks his mother Medina to help him. Medina is very busy, that's why she asked for your help.</p><p>Artem wants to paint an $$$n \times m$$$ board. Each cell of the board should be colored in white or black. </p><p>Lets $$$B$$$ be the number of black cells that have at least one white neighbor adjacent by the side. Let $$$W$$$ be the number of white cells that have at least one black neighbor adjacent by the side. A coloring is called <span class="tex-font-style-bf">good</span> if $$$B = W + 1$$$. </p><p>The first coloring shown below has $$$B=5$$$ and $$$W=4$$$ (all cells have at least one neighbor with the opposite color). However, the second coloring is not <span class="tex-font-style-bf">good</span> as it has $$$B=4$$$, $$$W=4$$$ (only the bottom right cell doesn't have a neighbor with the opposite color).</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/6c0115fad7a6ab02f40802cf485c82184b58bea4.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>Please, help Medina to find any <span class="tex-font-style-bf">good</span> coloring. It's guaranteed that under given constraints the solution always exists. If there are several solutions, output any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. </p><p>The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 20$$$). Each of the next $$$t$$$ lines contains two integers $$$n, m$$$ ($$$2 \le n,m \le 100$$$) — the number of rows and the number of columns in the grid.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$n$$$ lines, each of length $$$m$$$, where $$$i$$$-th line is the $$$i$$$-th row of your colored matrix (cell labeled with <span class="tex-font-style-tt">'B'</span> means that the cell is black, and <span class="tex-font-style-tt">'W'</span> means white). Do not use quotes.</p><p>It's guaranteed that under given constraints the solution always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004719312602317294" id="id006563713545718133" class="input-output-copier">Copy</div></div><pre id="id004719312602317294">2
3 2
3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002776420805446179" id="id006179375109739286" class="input-output-copier">Copy</div></div><pre id="id002776420805446179">BW
WB
BB
BWB
BWW
BWB</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase, $$$B=3$$$, $$$W=2$$$.</p><p>In the second testcase, $$$B=5$$$, $$$W=4$$$. You can see the coloring in the statement.</p></div>