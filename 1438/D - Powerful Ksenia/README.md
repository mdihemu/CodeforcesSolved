<h2><a href="https://codeforces.com/contest/1438/problem/D" target="_blank" rel="noopener noreferrer">1438D — Powerful Ksenia</a></h2>

| | |
|---|---|
| **Difficulty** | 2200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1438D](https://codeforces.com/contest/1438/problem/D) |

## Topics
`bitmasks` `constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">D. Powerful Ksenia</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ksenia has an array $$$a$$$ consisting of $$$n$$$ positive integers $$$a_1, a_2, \ldots, a_n$$$. </p><p>In one operation she can do the following: </p><ul> <li> choose three distinct indices $$$i$$$, $$$j$$$, $$$k$$$, and then </li><li> change all of $$$a_i, a_j, a_k$$$ to $$$a_i \oplus a_j \oplus a_k$$$ simultaneously, where $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>. </li></ul><p>She wants to make all $$$a_i$$$ equal <span class="tex-font-style-bf">in at most $$$n$$$ operations</span>, or to determine that it is impossible to do so. She wouldn't ask for your help, but please, help her!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$3 \leq n \leq 10^5$$$) — the length of $$$a$$$.</p><p>The second line contains $$$n$$$ integers, $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) — elements of $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print <span class="tex-font-style-tt">YES</span> or <span class="tex-font-style-tt">NO</span> in the first line depending on whether it is possible to make all elements equal in at most $$$n$$$ operations.</p><p>If it is possible, print an integer $$$m$$$ ($$$0 \leq m \leq n$$$), which denotes the number of operations you do.</p><p>In each of the next $$$m$$$ lines, print three distinct integers $$$i, j, k$$$, representing one operation. </p><p>If there are many such operation sequences possible, print any. Note that you do <span class="tex-font-style-bf">not</span> have to minimize the number of operations.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00383730797472808" id="id007918815429491928" class="input-output-copier">Copy</div></div><pre id="id00383730797472808">5
4 2 1 7 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006451705724022596" id="id00756869135093058" class="input-output-copier">Copy</div></div><pre id="id006451705724022596">YES
1
1 3 4</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010352453872587675" id="id008611421648625646" class="input-output-copier">Copy</div></div><pre id="id0010352453872587675">4
10 4 49 22
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005428287198173172" id="id006286241118314012" class="input-output-copier">Copy</div></div><pre id="id005428287198173172">NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the array becomes $$$[4 \oplus 1 \oplus 7, 2, 4 \oplus 1 \oplus 7, 4 \oplus 1 \oplus 7, 2] = [2, 2, 2, 2, 2]$$$.</p></div>