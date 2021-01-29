// https://leetcode.com/problems/partition-labels
// Time: O(n) single pass
// Space: O(1), constant output size, up to 26
// Idea: imagine a bus moving forward and passengers jumping in telling the driver their terminal stop
// when the last passenger leaves the bus, we create a new partition as this passenger will no longer be there
// hence, satisfying problem conditions

vector<int> partitionLabels(string S) {
    vector<int> out;
    int arr_id[26] = {0};
    for(int i = 0; i < S.length(); i++)
        arr_id[S[i]-'a'] = i;

    int anchor = 0, max_id = -1;
    for(int i = 0; i < S.length(); i++)
    {
        max_id = max(max_id, arr_id[S[i] - 'a']);
        if(max_id == i){
            out.push_back(i - anchor + 1);
            anchor = i + 1;
        }
    }
    return out;
}