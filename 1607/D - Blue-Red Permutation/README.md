<h2><a href="https://codeforces.com/contest/1607/problem/D" target="_blank" rel="noopener noreferrer">1607D — Blue-Red Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1607D](https://codeforces.com/contest/1607/problem/D) |

## Topics
`greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Blue-Red Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array of integers $$$a$$$ of length $$$n$$$. The elements of the array can be either different or the same. </p><p>Each element of the array is colored either blue or red. There are no unpainted elements in the array. One of the two operations described below can be applied to an array in a single step:</p><ul> <li> either you can select any blue element and decrease its value by $$$1$$$; </li><li> or you can select any red element and increase its value by $$$1$$$. </li></ul><p>Situations in which there are no elements of some color at all are also possible. For example, if the whole array is colored blue or red, one of the operations becomes unavailable.</p><p>Determine whether it is possible to make $$$0$$$ or more steps such that the resulting array is a permutation of numbers from $$$1$$$ to $$$n$$$?</p><p>In other words, check whether there exists a sequence of steps (possibly empty) such that after applying it, the array $$$a$$$ contains in some order all numbers from $$$1$$$ to $$$n$$$ (inclusive), each exactly once.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of input data sets in the test.</p><p>The description of each set of input data consists of three lines. The first line contains an integer $$$n$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$) — the length of the original array $$$a$$$. The second line contains $$$n$$$ integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$-10^9 \leq a_i \leq 10^9$$$) — the array elements themselves.</p><p>The third line has length $$$n$$$ and consists exclusively of the letters '<span class="tex-font-style-tt">B</span>' and/or '<span class="tex-font-style-tt">R</span>': $$$i$$$th character is '<span class="tex-font-style-tt">B</span>' if $$$a_i$$$ is colored blue, and is '<span class="tex-font-style-tt">R</span>' if colored red.</p><p>It is guaranteed that the sum of $$$n$$$ over all input sets does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ lines, each of which contains the answer to the corresponding test case of the input. Print <span class="tex-font-style-tt">YES</span> as an answer if the corresponding array can be transformed into a permutation, and <span class="tex-font-style-tt">NO</span> otherwise.</p><p>You can print the answer in any case (for example, the strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span>, and <span class="tex-font-style-tt">YES</span> will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003196033492898609" id="id0034971525771609646" class="input-output-copier">Copy</div></div><pre id="id0003196033492898609">8
4
1 2 5 2
BRBR
2
1 1
BB
5
3 1 4 2 5
RBRRB
5
3 1 3 1 3
RBRRB
5
5 1 5 1 5
RBRRB
4
2 2 2 2
BRBR
2
1 -2
BR
4
-2 -1 4 0
RRRR
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0004152630977584193" id="id005495781158757358" class="input-output-copier">Copy</div></div><pre id="id0004152630977584193">YES
NO
YES
YES
NO
YES
YES
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the example, the following sequence of moves can be performed:</p><ul> <li> choose $$$i=3$$$, element $$$a_3=5$$$ is blue, so we decrease it, we get $$$a=[1,2,4,2]$$$; </li><li> choose $$$i=2$$$, element $$$a_2=2$$$ is red, so we increase it, we get $$$a=[1,3,4,2]$$$; </li><li> choose $$$i=3$$$, element $$$a_3=4$$$ is blue, so we decrease it, we get $$$a=[1,3,3,2]$$$; </li><li> choose $$$i=2$$$, element $$$a_2=2$$$ is red, so we increase it, we get $$$a=[1,4,3,2]$$$. </li></ul><p>We got that $$$a$$$ is a permutation. Hence the answer is <span class="tex-font-style-tt">YES</span>.</p></div>