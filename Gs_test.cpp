// there was a question in OA of gs which can be solved by making a function that should be
// able to generate all possible susbset of a vector
// baaki isse aage jo bhi karna tha that was easy 

// basic maths questions were there (5 que)

// a graph question was there 

// some mcq were there on topic of graph , min heap ,stack 

// one more que was there that was easy but abhi yaad nhi aaraha


// code for generating all subsets 
#include <iostream>
#include <vector>
using namespace std;

void backtrack(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& allSubsets) {
    if (index == nums.size()) {
        allSubsets.push_back(current);
        return;
    }

    // Include nums[index]
    current.push_back(nums[index]);
    backtrack(index + 1, nums, current, allSubsets);

    // Exclude nums[index]
    current.pop_back();
    backtrack(index + 1, nums, current, allSubsets);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> allSubsets;
    vector<int> current;

    backtrack(0, nums, current, allSubsets);

    for (auto& subset : allSubsets) {
        cout << "{ ";
        for (int val : subset)
            cout << val << " ";
        cout << "}" << endl;
    }

    return 0;
}
