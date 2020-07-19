int toys(vector<int> w) {
    int count = 0, minItem = -1;
    sort(w.begin(), w.end());
    for(int i = 0 ; i < w.size() ; i++)
        {
            if(w[i] > minItem)
            {
                minItem = w[i] + 4;
                count++;
            }
        }
    return count;
}