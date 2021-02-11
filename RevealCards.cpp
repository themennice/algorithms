// https://leetcode.com/problems/reveal-cards-in-increasing-order/
// O(nlogn) time for sorting and O(n) space for deque

vector<int> deckRevealedIncreasing(vector<int>& deck) {
    sort(deck.rbegin(), deck.rend());
    // for(int j = 0; j < deck.size(); j++)
    //         cout << deck[j] << " ";
    // cout << endl << endl;
    int n = deck.size();
    deque<int> d;
    d.push_back(deck[0]);
    for(int i = 1; i < n; i++)
    {
        d.push_front(d.back());
        d.pop_back();
        d.push_front(deck[i]);
        // for(int j = 0; j < d.size(); j++)
        //     cout << d[j] << " ";
        // cout << endl;
    }   
    vector<int> res(d.begin(), d.end());
    return res;
}