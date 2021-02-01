int largestAltitude(vector<int>& gain) {
        int high = 0;
        int curr = 0;
        for(int i = 0;  i < gain.size(); i++)
        {
            curr += gain[i];
             if(curr > high)
                 high = curr;

}
        return high;
    }
