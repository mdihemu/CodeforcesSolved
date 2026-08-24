<h2><a href="https://codeforces.com/contest/1604/problem/D" target="_blank" rel="noopener noreferrer">1604D — Moderate Modular Mode</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1604D](https://codeforces.com/contest/1604/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Moderate Modular Mode</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>YouKn0wWho has two <span class="tex-font-style-bf">even</span> integers $$$x$$$ and $$$y$$$. Help him to find an integer $$$n$$$ such that $$$1 \le n \le 2 \cdot 10^{18}$$$ and $$$n \bmod x = y \bmod n$$$. Here, $$$a \bmod b$$$ denotes the remainder of $$$a$$$ after division by $$$b$$$. If there are multiple such integers, output any. It can be shown that such an integer always exists under the given constraints.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^5$$$)  — the number of test cases.</p><p>The first and only line of each test case contains two integers $$$x$$$ and $$$y$$$ ($$$2 \le x, y \le 10^9$$$, both are <span class="tex-font-style-bf">even</span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^{18}$$$) that satisfies the condition mentioned in the statement. If there are multiple such integers, output any. It can be shown that such an integer always exists under the given constraints.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006407484247278897" id="id004878171808709496" class="input-output-copier">Copy</div></div><pre id="id006407484247278897">4
4 8
4 2
420 420
69420 42068
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004511604422184946" id="id008222041013949275" class="input-output-copier">Copy</div></div><pre id="id004511604422184946">4
10
420
9969128
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$4 \bmod 4 = 8 \bmod 4 = 0$$$.</p><p>In the second test case, $$$10 \bmod 4 = 2 \bmod 10 = 2$$$.</p><p>In the third test case, $$$420 \bmod 420 = 420 \bmod 420 = 0$$$.</p></div>