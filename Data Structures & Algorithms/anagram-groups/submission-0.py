class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        # append s in str to solution[sortedkey]
        solution = defaultdict(list);

        for s in strs:
            sortedS = ''.join(sorted(s));

            solution[sortedS].append(s);
        return list(solution.values())




        