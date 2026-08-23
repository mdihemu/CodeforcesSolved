<h2><a href="https://codeforces.com/contest/1148/problem/A" target="_blank" rel="noopener noreferrer">1148A — Another One Bites The Dust</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1148A](https://codeforces.com/contest/1148/problem/A) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Another One Bites The Dust</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call a string <span class="tex-font-style-it">good</span> if and only if it consists of only two types of letters — '<span class="tex-font-style-tt">a</span>' and '<span class="tex-font-style-tt">b</span>' and every two consecutive letters are distinct. For example "<span class="tex-font-style-tt">baba</span>" and "<span class="tex-font-style-tt">aba</span>" are good strings and "<span class="tex-font-style-tt">abb</span>" is a bad string.</p><p>You have $$$a$$$ strings "<span class="tex-font-style-tt">a</span>", $$$b$$$ strings "<span class="tex-font-style-tt">b</span>" and $$$c$$$ strings "<span class="tex-font-style-tt">ab</span>". You want to choose some subset of these strings and concatenate them in any arbitrarily order.</p><p>What is the length of the longest good string you can obtain this way?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains three positive integers $$$a$$$, $$$b$$$, $$$c$$$ ($$$1 \leq a, b, c \leq 10^9$$$) — the number of strings "<span class="tex-font-style-tt">a</span>", "<span class="tex-font-style-tt">b</span>" and "<span class="tex-font-style-tt">ab</span>" respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single number — the maximum possible length of the good string you can obtain.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008878676816041439" id="id003346984260699477" class="input-output-copier">Copy</div></div><pre id="id008878676816041439">1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002589787844614917" id="id00014104851118499906" class="input-output-copier">Copy</div></div><pre id="id002589787844614917">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002587760885403755" id="id0019139637406244814" class="input-output-copier">Copy</div></div><pre id="id002587760885403755">2 1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0028951817709798533" id="id002550706221974861" class="input-output-copier">Copy</div></div><pre id="id0028951817709798533">7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00466926769061604" id="id006757043925472269" class="input-output-copier">Copy</div></div><pre id="id00466926769061604">3 5 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009221632723406077" id="id0009755652393841974" class="input-output-copier">Copy</div></div><pre id="id009221632723406077">11
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009670770037543064" id="id006888777305734255" class="input-output-copier">Copy</div></div><pre id="id0009670770037543064">2 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006041493493569231" id="id0015597168656140903" class="input-output-copier">Copy</div></div><pre id="id006041493493569231">6
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006110479420724507" id="id0015202441821569712" class="input-output-copier">Copy</div></div><pre id="id006110479420724507">1000000000 1000000000 1000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0015910821351825455" id="id007581643933098888" class="input-output-copier">Copy</div></div><pre id="id0015910821351825455">4000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example the optimal string is "<span class="tex-font-style-tt">baba</span>".</p><p>In the second example the optimal string is "<span class="tex-font-style-tt">abababa</span>".</p><p>In the third example the optimal string is "<span class="tex-font-style-tt">bababababab</span>".</p><p>In the fourth example the optimal string is "<span class="tex-font-style-tt">ababab</span>".</p></div>