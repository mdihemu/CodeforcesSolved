<h2><a href="https://codeforces.com/contest/1102/problem/A" target="_blank" rel="noopener noreferrer">1102A — Integer Sequence Dividing</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1102A](https://codeforces.com/contest/1102/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Integer Sequence Dividing</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer sequence $$$1, 2, \dots, n$$$. You have to divide it into two sets $$$A$$$ and $$$B$$$ in such a way that each element belongs to <span class="tex-font-style-bf">exactly one</span> set and $$$|sum(A) - sum(B)|$$$ is minimum possible.</p><p>The value $$$|x|$$$ is the absolute value of $$$x$$$ and $$$sum(S)$$$ is the sum of elements of the set $$$S$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the minimum possible value of $$$|sum(A) - sum(B)|$$$ if you divide the initial sequence $$$1, 2, \dots, n$$$ into two sets $$$A$$$ and $$$B$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003766633717390955" id="id008966859941062479" class="input-output-copier">Copy</div></div><pre id="id0003766633717390955">3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009987949359125536" id="id007984585570620524" class="input-output-copier">Copy</div></div><pre id="id009987949359125536">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009856438616192573" id="id0028514828298568295" class="input-output-copier">Copy</div></div><pre id="id009856438616192573">5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003167742190318602" id="id003718305542467255" class="input-output-copier">Copy</div></div><pre id="id003167742190318602">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008066155208332041" id="id002939447361576114" class="input-output-copier">Copy</div></div><pre id="id008066155208332041">6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000118971773781551" id="id005756177500861885" class="input-output-copier">Copy</div></div><pre id="id000118971773781551">1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Some (not all) possible answers to examples:</p><p>In the first example you can divide the initial sequence into sets $$$A = \{1, 2\}$$$ and $$$B = \{3\}$$$ so the answer is $$$0$$$.</p><p>In the second example you can divide the initial sequence into sets $$$A = \{1, 3, 4\}$$$ and $$$B = \{2, 5\}$$$ so the answer is $$$1$$$.</p><p>In the third example you can divide the initial sequence into sets $$$A = \{1, 4, 5\}$$$ and $$$B = \{2, 3, 6\}$$$ so the answer is $$$1$$$.</p></div>