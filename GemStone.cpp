/*
https://www.hackerrank.com/challenges/gem-stones/problem
*/

int gemstones(vector<string> arr) {
    // intialize a map of frequencies
    int umap[26]{0};

    for(int i = 0; i < arr.size(); i++)
    {
        string str = arr[i];
        for(int j = 0; j < str.size(); j++)
        {
            // if the frequency of the character is the same as the number of elememt from arr
            if(umap[str[j] - 'a'] == i)
                {umap[str[j] - 'a']++; cout << umap[str[j] - 'a'] << " ";}
        }
    }
    int count = 0;
    for(int i = 0; i < 26; i++)
    {
        if(umap[i] == arr.size())
            count++;
    }
    return count;
}