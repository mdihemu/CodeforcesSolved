<h2><a href="https://codeforces.com/contest/1395/problem/C" target="_blank" rel="noopener noreferrer">1395C — Boboniu and Bit Operations</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1395C](https://codeforces.com/contest/1395/problem/C) |

## Topics
`bitmasks` `brute force` `dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Boboniu and Bit Operations</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Boboniu likes bit operations. He wants to play a game with you.</p><p>Boboniu gives you two sequences of non-negative integers $$$a_1,a_2,\ldots,a_n$$$ and $$$b_1,b_2,\ldots,b_m$$$.</p><p>For each $$$i$$$ ($$$1\le i\le n$$$), you're asked to choose a $$$j$$$ ($$$1\le j\le m$$$) and let $$$c_i=a_i\& b_j$$$, where $$$\&$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation</a>. Note that you can pick the same $$$j$$$ for different $$$i$$$'s.</p><p>Find the minimum possible $$$c_1 | c_2 | \ldots | c_n$$$, where $$$|$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise OR operation</a>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1\le n,m\le 200$$$).</p><p>The next line contains $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ ($$$0\le a_i  \lt  2^9$$$).</p><p>The next line contains $$$m$$$ integers $$$b_1,b_2,\ldots,b_m$$$ ($$$0\le b_i  \lt  2^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer: the minimum possible $$$c_1 | c_2 | \ldots | c_n$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008109922172062268" id="id0015464801664371308" class="input-output-copier">Copy</div></div><pre id="id008109922172062268">4 2
2 6 4 0
2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005432822340832989" id="id0083907036428466" class="input-output-copier">Copy</div></div><pre id="id005432822340832989">2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009906386735078705" id="id007732537534615498" class="input-output-copier">Copy</div></div><pre id="id009906386735078705">7 6
1 9 1 9 8 1 0
1 1 4 5 1 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002965389232131995" id="id004014475569279681" class="input-output-copier">Copy</div></div><pre id="id002965389232131995">0</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00008885160672074122" id="id004198215052164809" class="input-output-copier">Copy</div></div><pre id="id00008885160672074122">8 5
179 261 432 162 82 43 10 38
379 357 202 184 197
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005310971359881291" id="id0013630252990412983" class="input-output-copier">Copy</div></div><pre id="id005310971359881291">147</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first example, we have $$$c_1=a_1\& b_2=0$$$, $$$c_2=a_2\& b_1=2$$$, $$$c_3=a_3\& b_1=0$$$, $$$c_4 = a_4\& b_1=0$$$.Thus $$$c_1 | c_2 | c_3 |c_4 =2$$$, and this is the minimal answer we can get.</p></div>