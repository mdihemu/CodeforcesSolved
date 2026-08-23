<h2><a href="https://codeforces.com/contest/1426/problem/D" target="_blank" rel="noopener noreferrer">1426D — Non-zero Segments</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1426D](https://codeforces.com/contest/1426/problem/D) |

## Topics
`constructive algorithms` `data structures` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Non-zero Segments</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Kolya got an integer array $$$a_1, a_2, \dots, a_n$$$. The array can contain both positive and negative integers, but Kolya doesn't like $$$0$$$, so the array doesn't contain any zeros.</p><p>Kolya doesn't like that the sum of some subsegments of his array can be $$$0$$$. The subsegment is some consecutive segment of elements of the array. </p><p>You have to help Kolya and change his array in such a way that it doesn't contain any subsegments with the sum $$$0$$$. To reach this goal, you can insert any integers between any pair of adjacent elements of the array (integers can be really any: positive, negative, $$$0$$$, any by absolute value, even such a huge that they can't be represented in most standard programming languages).</p><p>Your task is to find the minimum number of integers you have to insert into Kolya's array in such a way that the resulting array doesn't contain any subsegments with the sum $$$0$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$2 \le n \le 200\,000$$$) — the number of elements in Kolya's array.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$-10^{9} \le a_i \le 10^{9}, a_i \neq 0$$$) — the description of Kolya's array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the minimum number of integers you have to insert into Kolya's array in such a way that the resulting array doesn't contain any subsegments with the sum $$$0$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008875734492172938" id="id007877290855624752" class="input-output-copier">Copy</div></div><pre id="id008875734492172938">4
1 -5 3 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006053557104072718" id="id00339795742879465" class="input-output-copier">Copy</div></div><pre id="id006053557104072718">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004714207080121069" id="id008879947955010818" class="input-output-copier">Copy</div></div><pre id="id004714207080121069">5
4 -2 3 -9 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009508612166493338" id="id008198060289414676" class="input-output-copier">Copy</div></div><pre id="id009508612166493338">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008464320315280727" id="id004248379960148644" class="input-output-copier">Copy</div></div><pre id="id008464320315280727">9
-1 1 -1 1 -1 1 1 -1 -1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001062753355852818" id="id003396605055984807" class="input-output-copier">Copy</div></div><pre id="id001062753355852818">6
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006134712984075369" id="id00251913496495887" class="input-output-copier">Copy</div></div><pre id="id006134712984075369">8
16 -5 -11 -15 10 5 4 -4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008966016341938166" id="id0009171826674965167" class="input-output-copier">Copy</div></div><pre id="id008966016341938166">3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Consider the first example. There is only one subsegment with the sum $$$0$$$. It starts in the second element and ends in the fourth element. It's enough to insert one element so the array doesn't contain any subsegments with the sum equal to zero. For example, it is possible to insert the integer $$$1$$$ between second and third elements of the array.</p><p>There are no subsegments having sum $$$0$$$ in the second example so you don't need to do anything.</p></div>