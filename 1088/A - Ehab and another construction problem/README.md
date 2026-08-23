<h2><a href="https://codeforces.com/contest/1088/problem/A" target="_blank" rel="noopener noreferrer">1088A — Ehab and another construction problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1088A](https://codeforces.com/contest/1088/problem/A) |

## Topics
`brute force` `constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">A. Ehab and another construction problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an integer $$$x$$$, find 2 integers $$$a$$$ and $$$b$$$ such that: </p><ul> <li> $$$1 \le a,b \le x$$$ </li><li> $$$b$$$ divides $$$a$$$ ($$$a$$$ is divisible by $$$b$$$). </li><li> $$$a \cdot b \gt x$$$. </li><li> $$$\frac{a}{b} \lt x$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains the integer $$$x$$$ $$$(1 \le x \le 100)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>You should output two integers $$$a$$$ and $$$b$$$, satisfying the given conditions, separated by a space. If no pair of integers satisfy the conditions above, print "-1" (without quotes).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008653445107408332" id="id009082309271909811" class="input-output-copier">Copy</div></div><pre id="id008653445107408332">10<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002198350002545133" id="id005254709243736039" class="input-output-copier">Copy</div></div><pre id="id002198350002545133">6 3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006677260754642225" id="id006917009281641299" class="input-output-copier">Copy</div></div><pre id="id006677260754642225">1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007259223354553408" id="id0009492299974692353" class="input-output-copier">Copy</div></div><pre id="id007259223354553408">-1</pre></div></div></div>