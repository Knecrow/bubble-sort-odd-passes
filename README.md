These programs sorts an array using a modified Bubble Sort algorithm. The twist: it only performs sorting on odd-numbered passes (1st, 3rd, 5th, etc.). Even-numbered passes are skipped.

🔍 How it works

The outer loop simulates the sorting passes.

Sorting happens only when the outer loop index is even (which corresponds to 1st, 3rd, etc. since indexing starts at 0).

In those passes, adjacent elements are compared and swapped like standard Bubble Sort.
