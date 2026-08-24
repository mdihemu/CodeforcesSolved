<h2><a href="https://codeforces.com/contest/1487/problem/A" target="_blank" rel="noopener noreferrer">1487A — Arena</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1487A](https://codeforces.com/contest/1487/problem/A) |

## Topics
`implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Arena</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>$$$n$$$ heroes fight against each other in the Arena. Initially, the $$$i$$$-th hero has level $$$a_i$$$.</p><p>Each minute, a fight between two different heroes occurs. These heroes can be chosen arbitrarily (<span class="tex-font-style-bf">it's even possible that it is the same two heroes that were fighting during the last minute</span>).</p><p>When two heroes of equal levels fight, nobody wins the fight. When two heroes of different levels fight, the one with the higher level wins, and his level increases by $$$1$$$.</p><p>The winner of the tournament is the first hero that wins in at least $$$100^{500}$$$ fights <span class="tex-font-style-bf">(note that it's possible that the tournament lasts forever if no hero wins this number of fights, then there is no winner)</span>. A <span class="tex-font-style-it">possible winner</span> is a hero such that there exists a sequence of fights that this hero becomes the winner of the tournament.</p><p>Calculate the number of <span class="tex-font-style-it">possible winners</span> among $$$n$$$ heroes.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases.</p><p>Each test case consists of two lines. The first line contains one integer $$$n$$$ ($$$2 \le n \le 100$$$) — the number of heroes. The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 100$$$), where $$$a_i$$$ is the initial level of the $$$i$$$-th hero.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the number of <span class="tex-font-style-it">possible winners</span> among the given $$$n$$$ heroes.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00549016832189833" id="id008982326567215709" class="input-output-copier">Copy</div></div><pre id="id00549016832189833">3
3
3 2 2
2
5 5
4
1 3 3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013981693442005738" id="id008432823851370033" class="input-output-copier">Copy</div></div><pre id="id0013981693442005738">1
0
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the example, the only <span class="tex-font-style-it">possible winner</span> is the first hero.</p><p>In the second test case of the example, each fight between the heroes results in nobody winning it, so the tournament lasts forever and there is no winner.</p></div>