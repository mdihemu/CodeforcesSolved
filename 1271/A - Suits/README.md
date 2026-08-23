<h2><a href="https://codeforces.com/contest/1271/problem/A" target="_blank" rel="noopener noreferrer">1271A — Suits</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1271A](https://codeforces.com/contest/1271/problem/A) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Suits</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A new delivery of clothing has arrived today to the clothing store. This delivery consists of $$$a$$$ ties, $$$b$$$ scarves, $$$c$$$ vests and $$$d$$$ jackets.</p><p>The store does not sell single clothing items — instead, it sells suits of two types:</p><ul> <li> a suit of the first type consists of one tie and one jacket; </li><li> a suit of the second type consists of one scarf, one vest and one jacket. </li></ul><p>Each suit of the first type costs $$$e$$$ coins, and each suit of the second type costs $$$f$$$ coins.</p><p>Calculate the maximum possible cost of a set of suits that can be composed from the delivered clothing items. Note that one item cannot be used in more than one suit (though some items may be left unused).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$a$$$ $$$(1 \le a \le 100\,000)$$$ — the number of ties.</p><p>The second line contains one integer $$$b$$$ $$$(1 \le b \le 100\,000)$$$ — the number of scarves.</p><p>The third line contains one integer $$$c$$$ $$$(1 \le c \le 100\,000)$$$ — the number of vests.</p><p>The fourth line contains one integer $$$d$$$ $$$(1 \le d \le 100\,000)$$$ — the number of jackets.</p><p>The fifth line contains one integer $$$e$$$ $$$(1 \le e \le 1\,000)$$$ — the cost of one suit of the first type.</p><p>The sixth line contains one integer $$$f$$$ $$$(1 \le f \le 1\,000)$$$ — the cost of one suit of the second type.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the maximum total cost of some set of suits that can be composed from the delivered items. </p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0011575326591820123" id="id006636294631755872" class="input-output-copier">Copy</div></div><pre id="id0011575326591820123">4
5
6
3
1
2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003242838382894485" id="id0008840016651156146" class="input-output-copier">Copy</div></div><pre id="id003242838382894485">6
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007638988374339928" id="id008944524689325576" class="input-output-copier">Copy</div></div><pre id="id007638988374339928">12
11
13
20
4
6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005285441508434612" id="id0049691267922732985" class="input-output-copier">Copy</div></div><pre id="id005285441508434612">102
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0027041217900472225" id="id00456603841028949" class="input-output-copier">Copy</div></div><pre id="id0027041217900472225">17
14
5
21
15
17
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003253247059396237" id="id0049849806450886625" class="input-output-copier">Copy</div></div><pre id="id003253247059396237">325
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>It is possible to compose three suits of the second type in the first example, and their total cost will be $$$6$$$. Since all jackets will be used, it's impossible to add anything to this set.</p><p>The best course of action in the second example is to compose nine suits of the first type and eleven suits of the second type. The total cost is $$$9 \cdot 4 + 11 \cdot 6 = 102$$$.</p></div>