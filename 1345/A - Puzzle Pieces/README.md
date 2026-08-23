<h2><a href="https://codeforces.com/contest/1345/problem/A" target="_blank" rel="noopener noreferrer">1345A — Puzzle Pieces</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1345A](https://codeforces.com/contest/1345/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Puzzle Pieces</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a special jigsaw puzzle consisting of $$$n\cdot m$$$ identical pieces. Every piece has three tabs and one blank, as pictured below.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/e027c86e788da03880212687719c6404d938ab5a.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>The jigsaw puzzle is considered solved if the following conditions hold:</p><ol> <li> The pieces are arranged into a grid with $$$n$$$ rows and $$$m$$$ columns. </li><li> For any two pieces that share an edge in the grid, a tab of one piece fits perfectly into a blank of the other piece. </li></ol><p>Through rotation and translation of the pieces, determine if it is possible to solve the jigsaw puzzle.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1\le t\le 1000$$$) — the number of test cases. Next $$$t$$$ lines contain descriptions of test cases.</p><p>Each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n,m \le 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output a single line containing "<span class="tex-font-style-tt">YES</span>" if it is possible to solve the jigsaw puzzle, or "<span class="tex-font-style-tt">NO</span>" otherwise. You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008227171346299952" id="id007699146702086966" class="input-output-copier">Copy</div></div><pre id="id008227171346299952">3
1 3
100000 100000
2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004807053135003192" id="id0031771312223235226" class="input-output-copier">Copy</div></div><pre id="id004807053135003192">YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, this is an example solution: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/d07fc1d8f5f9e5adb180e840fdbb41442dadb7a9.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>For the second test case, we can show that no solution exists.</p><p>For the third test case, this is an example solution:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/462d3df16f53a3a73d6ae88c13bd6e1abf21008b.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>