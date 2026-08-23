<h2><a href="https://codeforces.com/contest/1146/problem/A" target="_blank" rel="noopener noreferrer">1146A — Love "A"</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1146A](https://codeforces.com/contest/1146/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Love "A"</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alice has a string $$$s$$$. She really likes the letter "<span class="tex-font-style-tt">a</span>". She calls a string good if strictly more than half of the characters in that string are "<span class="tex-font-style-tt">a</span>"s. For example "<span class="tex-font-style-tt">aaabb</span>", "<span class="tex-font-style-tt">axaa</span>" are good strings, and "<span class="tex-font-style-tt">baca</span>", "<span class="tex-font-style-tt">awwwa</span>", "" (empty string) are not.</p><p>Alice can erase some characters from her string $$$s$$$. She would like to know what is the longest string remaining after erasing some characters (possibly zero) to get a good string. It is guaranteed that the string has at least one "<span class="tex-font-style-tt">a</span>" in it, so the answer always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a string $$$s$$$ ($$$1 \leq |s| \leq 50$$$) consisting of lowercase English letters. It is guaranteed that there is at least one "<span class="tex-font-style-tt">a</span>" in $$$s$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer, the length of the longest good string that Alice can get after erasing some characters from $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0027901242653786096" id="id008159832952304569" class="input-output-copier">Copy</div></div><pre id="id0027901242653786096">xaxxxxa
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0016373502214750246" id="id0034940023844163526" class="input-output-copier">Copy</div></div><pre id="id0016373502214750246">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010159761209006923" id="id003824612124391974" class="input-output-copier">Copy</div></div><pre id="id0010159761209006923">aaabaa
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007559389367094134" id="id0018336269786926573" class="input-output-copier">Copy</div></div><pre id="id007559389367094134">6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, it's enough to erase any four of the "<span class="tex-font-style-tt">x</span>"s. The answer is $$$3$$$ since that is the maximum number of characters that can remain.</p><p>In the second example, we don't need to erase any characters.</p></div>