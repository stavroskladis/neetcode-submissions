class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        L, length = 0, 0
        counts = {}
        max_freq = 0

        for R in range(len(s)):

            counts[s[R]] = counts.get(s[R], 0) + 1
            max_freq = max(max_freq, counts.get(s[R], 0))

            # replacements needed = window length - (most commmon letter in the window)
            # replacements needed > k
            if (R - L + 1) - max_freq > k:
                counts[s[L]] -= 1
                L += 1

            length = max(length, R - L + 1)

        return length
