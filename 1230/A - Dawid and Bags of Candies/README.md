<h2><a href="https://codeforces.com/contest/1230/problem/A" target="_blank" rel="noopener noreferrer">1230A — Dawid and Bags of Candies</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1230A](https://codeforces.com/contest/1230/problem/A) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Dawid and Bags of Candies</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Dawid has four bags of candies. The $$$i$$$-th of them contains $$$a_i$$$ candies. Also, Dawid has two friends. He wants to give each bag to one of his two friends. Is it possible to distribute the bags in such a way that each friend receives the same amount of candies in total?</p><p>Note, that you can't keep bags for yourself or throw them away, each bag should be given to one of the friends.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains four integers $$$a_1$$$, $$$a_2$$$, $$$a_3$$$ and $$$a_4$$$ ($$$1 \leq a_i \leq 100$$$) — the numbers of candies in each bag.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output <span class="tex-font-style-tt">YES</span> if it's possible to give the bags to Dawid's friends so that both friends receive the same amount of candies, or <span class="tex-font-style-tt">NO</span> otherwise. Each character can be printed in any case (either uppercase or lowercase).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020617215084776597" id="id009287236499455536" class="input-output-copier">Copy</div></div><pre id="id0020617215084776597">1 7 11 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004783789950845698" id="id009372820745083846" class="input-output-copier">Copy</div></div><pre id="id004783789950845698">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0034371922928464704" id="id005605185741242339" class="input-output-copier">Copy</div></div><pre id="id0034371922928464704">7 3 2 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003401933147692754" id="id004992303648146953" class="input-output-copier">Copy</div></div><pre id="id003401933147692754">NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample test, Dawid can give the first and the third bag to the first friend, and the second and the fourth bag to the second friend. This way, each friend will receive $$$12$$$ candies.</p><p>In the second sample test, it's impossible to distribute the bags.</p></div>