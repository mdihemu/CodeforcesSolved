<h2><a href="https://codeforces.com/contest/1618/problem/D" target="_blank" rel="noopener noreferrer">1618D — Array and Operations</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1618D](https://codeforces.com/contest/1618/problem/D) |

## Topics
`dp` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">D. Array and Operations</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of $$$n$$$ integers, and another integer $$$k$$$ such that $$$2k \le n$$$.</p><p>You have to perform <span class="tex-font-style-bf">exactly</span> $$$k$$$ operations with this array. In one operation, you have to choose two elements of the array (let them be $$$a_i$$$ and $$$a_j$$$; they can be equal or different, but <span class="tex-font-style-bf">their positions in the array must not be the same</span>), remove them from the array, and add $$$\lfloor \frac{a_i}{a_j} \rfloor$$$ to your <span class="tex-font-style-it">score</span>, where $$$\lfloor \frac{x}{y} \rfloor$$$ is the maximum integer not exceeding $$$\frac{x}{y}$$$.</p><p>Initially, your <span class="tex-font-style-it">score</span> is $$$0$$$. After you perform exactly $$$k$$$ operations, you add all the remaining elements of the array to the <span class="tex-font-style-it">score</span>.</p><p>Calculate the minimum possible <span class="tex-font-style-it">score</span> you can get.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases.</p><p>Each test case consists of two lines. The first line contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 100$$$; $$$0 \le k \le \lfloor \frac{n}{2} \rfloor$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 2 \cdot 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the minimum possible <span class="tex-font-style-it">score</span> you can get.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0037013594201575817" id="id005881344457827758" class="input-output-copier">Copy</div></div><pre id="id0037013594201575817">5
7 3
1 1 1 2 1 3 1
5 1
5 5 5 5 5
4 2
1 3 3 7
2 0
4 2
9 2
1 10 10 1 10 2 7 10 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006984047309585814" id="id003813232221095778" class="input-output-copier">Copy</div></div><pre id="id006984047309585814">2
16
0
6
16
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let's consider the example test.</p><p>In the first test case, one way to obtain a score of $$$2$$$ is the following one:</p><ol> <li> choose $$$a_7 = 1$$$ and $$$a_4 = 2$$$ for the operation; the score becomes $$$0 + \lfloor \frac{1}{2} \rfloor = 0$$$, the array becomes $$$[1, 1, 1, 1, 3]$$$; </li><li> choose $$$a_1 = 1$$$ and $$$a_5 = 3$$$ for the operation; the score becomes $$$0 + \lfloor \frac{1}{3} \rfloor = 0$$$, the array becomes $$$[1, 1, 1]$$$; </li><li> choose $$$a_1 = 1$$$ and $$$a_2 = 1$$$ for the operation; the score becomes $$$0 + \lfloor \frac{1}{1} \rfloor = 1$$$, the array becomes $$$[1]$$$; </li><li> add the remaining element $$$1$$$ to the score, so the resulting score is $$$2$$$. </li></ol><p>In the second test case, no matter which operations you choose, the resulting score is $$$16$$$.</p><p>In the third test case, one way to obtain a score of $$$0$$$ is the following one:</p><ol> <li> choose $$$a_1 = 1$$$ and $$$a_2 = 3$$$ for the operation; the score becomes $$$0 + \lfloor \frac{1}{3} \rfloor = 0$$$, the array becomes $$$[3, 7]$$$; </li><li> choose $$$a_1 = 3$$$ and $$$a_2 = 7$$$ for the operation; the score becomes $$$0 + \lfloor \frac{3}{7} \rfloor = 0$$$, the array becomes empty; </li><li> the array is empty, so the score doesn't change anymore. </li></ol><p>In the fourth test case, no operations can be performed, so the score is the sum of the elements of the array: $$$4 + 2 = 6$$$.</p></div>