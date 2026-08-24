<h2><a href="https://codeforces.com/contest/1581/problem/B" target="_blank" rel="noopener noreferrer">1581B — Diameter of Graph</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1581B](https://codeforces.com/contest/1581/problem/B) |

## Topics
`constructive algorithms` `graphs` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Diameter of Graph</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>CQXYM wants to create a connected undirected graph with $$$n$$$ nodes and $$$m$$$ edges, and the diameter of the graph must be strictly less than $$$k-1$$$. Also, CQXYM doesn't want a graph that contains self-loops or multiple edges (i.e. each edge connects two different vertices and between each pair of vertices there is at most one edge).</p><p>The diameter of a graph is the maximum distance between any two nodes.</p><p>The distance between two nodes is the minimum number of the edges on the path which endpoints are the two nodes.</p><p>CQXYM wonders whether it is possible to create such a graph.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. </p><p>The first line contains an integer $$$t (1 \leq t \leq 10^5)$$$ — the number of test cases. The description of the test cases follows.</p><p>Only one line of each test case contains three integers $$$n(1 \leq n \leq 10^9)$$$, $$$m$$$, $$$k$$$ $$$(0 \leq m,k \leq 10^9)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print <span class="tex-font-style-tt">YES</span> if it is possible to create the graph, or print <span class="tex-font-style-tt">NO</span> if it is impossible. You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003727844929928936" id="id0032335496103409944" class="input-output-copier">Copy</div></div><pre id="id003727844929928936">5
1 0 3
4 5 3
4 6 3
5 4 1
2 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009312576023788444" id="id005899906120903906" class="input-output-copier">Copy</div></div><pre id="id009312576023788444">YES
NO
YES
NO
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the graph's diameter equal to 0.</p><p>In the second test case, the graph's diameter can only be 2.</p><p>In the third test case, the graph's diameter can only be 1.</p></div>