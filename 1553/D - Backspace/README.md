<h2><a href="https://codeforces.com/contest/1553/problem/D" target="_blank" rel="noopener noreferrer">1553D — Backspace</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1553D](https://codeforces.com/contest/1553/problem/D) |

## Topics
`dp` `greedy` `strings` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. Backspace</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two strings $$$s$$$ and $$$t$$$, both consisting of lowercase English letters. You are going to type the string $$$s$$$ character by character, from the first character to the last one.</p><p>When typing a character, instead of pressing the button corresponding to it, you can press the "Backspace" button. It deletes the last character you have typed among those that aren't deleted yet (or does nothing if there are no characters in the current string). For example, if $$$s$$$ is "<span class="tex-font-style-tt">abcbd</span>" and you press Backspace instead of typing the first and the fourth characters, you will get the string "<span class="tex-font-style-tt">bd</span>" (the first press of Backspace deletes no character, and the second press deletes the character '<span class="tex-font-style-tt">c</span>'). Another example, if $$$s$$$ is "<span class="tex-font-style-tt">abcaa</span>" and you press Backspace instead of the last two letters, then the resulting text is "<span class="tex-font-style-tt">a</span>".</p><p>Your task is to determine whether you can obtain the string $$$t$$$, if you type the string $$$s$$$ and press "Backspace" instead of typing several (maybe zero) characters of $$$s$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$q$$$ ($$$1 \le q \le 10^5$$$) — the number of test cases.</p><p>The first line of each test case contains the string $$$s$$$ ($$$1 \le |s| \le 10^5$$$). Each character of $$$s$$$ is a lowercase English letter.</p><p>The second line of each test case contains the string $$$t$$$ ($$$1 \le |t| \le 10^5$$$). Each character of $$$t$$$ is a lowercase English letter.</p><p>It is guaranteed that the total number of characters in the strings over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">YES</span>" if you can obtain the string $$$t$$$ by typing the string $$$s$$$ and replacing some characters with presses of "Backspace" button, or "<span class="tex-font-style-tt">NO</span>" if you cannot.</p><p>You may print each letter in any case (<span class="tex-font-style-tt">YES</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> will all be recognized as positive answer, <span class="tex-font-style-tt">NO</span>, <span class="tex-font-style-tt">no</span> and <span class="tex-font-style-tt">nO</span> will all be recognized as negative answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0017658925482617782" id="id0048799527500876616" class="input-output-copier">Copy</div></div><pre id="id0017658925482617782">4
ababa
ba
ababa
bb
aaa
aaaa
aababa
ababa
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0028503488692994805" id="id0011098040119289543" class="input-output-copier">Copy</div></div><pre id="id0028503488692994805">YES
NO
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Consider the example test from the statement.</p><p>In order to obtain "<span class="tex-font-style-tt">ba</span>" from "<span class="tex-font-style-tt">ababa</span>", you may press Backspace instead of typing the first and the fourth characters.</p><p>There's no way to obtain "<span class="tex-font-style-tt">bb</span>" while typing "<span class="tex-font-style-tt">ababa</span>".</p><p>There's no way to obtain "<span class="tex-font-style-tt">aaaa</span>" while typing "<span class="tex-font-style-tt">aaa</span>".</p><p>In order to obtain "<span class="tex-font-style-tt">ababa</span>" while typing "<span class="tex-font-style-tt">aababa</span>", you have to press Backspace instead of typing the first character, then type all the remaining characters.</p></div>