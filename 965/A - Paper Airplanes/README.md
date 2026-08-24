<h2><a href="https://codeforces.com/contest/965/problem/A" target="_blank" rel="noopener noreferrer">965A — Paper Airplanes</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 965A](https://codeforces.com/contest/965/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Paper Airplanes</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>To make a paper airplane, one has to use a rectangular piece of paper. From a sheet of standard size you can make $$$s$$$ airplanes.</p><p>A group of $$$k$$$ people decided to make $$$n$$$ airplanes each. They are going to buy several packs of paper, each of them containing $$$p$$$ sheets, and then distribute the sheets between the people. Each person should have enough sheets to make $$$n$$$ airplanes. How many packs should they buy?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains four integers $$$k$$$, $$$n$$$, $$$s$$$, $$$p$$$ ($$$1 \le k, n, s, p \le 10^4$$$) — the number of people, the number of airplanes each should make, the number of airplanes that can be made using one sheet and the number of sheets in one pack, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the minimum number of packs they should buy.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007668003079462131" id="id0005133069706648841" class="input-output-copier">Copy</div></div><pre id="id007668003079462131">5 3 2 3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001103294621020392" id="id0015066191602322354" class="input-output-copier">Copy</div></div><pre id="id001103294621020392">4<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00681957297058792" id="id008868993447411536" class="input-output-copier">Copy</div></div><pre id="id00681957297058792">5 3 100 1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007676772682601855" id="id009461876169640933" class="input-output-copier">Copy</div></div><pre id="id007676772682601855">5<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample they have to buy $$$4$$$ packs of paper: there will be $$$12$$$ sheets in total, and giving $$$2$$$ sheets to each person is enough to suit everyone's needs.</p><p>In the second sample they have to buy a pack for each person as they can't share sheets.</p></div>