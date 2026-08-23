<h2><a href="https://codeforces.com/contest/1139/problem/A" target="_blank" rel="noopener noreferrer">1139A — Even Substrings</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1139A](https://codeforces.com/contest/1139/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Even Substrings</div><div class="time-limit"><div class="property-title">time limit per test</div>0.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s=s_1s_2\dots s_n$$$ of length $$$n$$$, which only contains digits $$$1$$$, $$$2$$$, ..., $$$9$$$.</p><p>A substring $$$s[l \dots r]$$$ of $$$s$$$ is a string $$$s_l s_{l + 1} s_{l + 2} \ldots s_r$$$. A substring $$$s[l \dots r]$$$ of $$$s$$$ is called <span class="tex-font-style-it">even</span> if the number represented by it is even. </p><p>Find the number of even substrings of $$$s$$$. Note, that even if some substrings are equal as strings, but have different $$$l$$$ and $$$r$$$, they are counted as <span class="tex-font-style-bf">different</span> substrings.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ ($$$1 \le n \le 65000$$$) — the length of the string $$$s$$$.</p><p>The second line contains a string $$$s$$$ of length $$$n$$$. The string $$$s$$$ consists only of digits $$$1$$$, $$$2$$$, ..., $$$9$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the number of even substrings of $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008154372534993874" id="id0011178511534633262" class="input-output-copier">Copy</div></div><pre id="id008154372534993874">4
1234
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008896747408337556" id="id0029418665793269827" class="input-output-copier">Copy</div></div><pre id="id008896747408337556">6</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002869167751328875" id="id005346445936576923" class="input-output-copier">Copy</div></div><pre id="id002869167751328875">4
2244
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009715987612543285" id="id006015133548847512" class="input-output-copier">Copy</div></div><pre id="id009715987612543285">10</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the $$$[l, r]$$$ pairs corresponding to even substrings are: </p><ul> <li> $$$s[1 \dots 2]$$$</li><li> $$$s[2 \dots 2]$$$</li><li> $$$s[1 \dots 4]$$$</li><li> $$$s[2 \dots 4]$$$</li><li> $$$s[3 \dots 4]$$$</li><li> $$$s[4 \dots 4]$$$ </li></ul><p>In the second example, all $$$10$$$ substrings of $$$s$$$ are even substrings. Note, that while substrings $$$s[1 \dots 1]$$$ and $$$s[2 \dots 2]$$$ both define the substring "<span class="tex-font-style-tt">2</span>", they are still counted as different substrings.</p></div>