/*
https://www.hackerrank.com/challenges/happy-ladybugs/problem
*/

string happyLadybugs(string b) {
    // empty string case
    if(b == "")
        return "NO";
    int underscoreCounter = 0;
    int map[26] = {0};
    // increment cells to see if all cells can be happy
    bool notInOrder = false;
    for(int i = 0; i < b.length(); i++)
    {
        if(b[i] == '_')
            underscoreCounter++;
        else
            map[b[i] - 'A']++;
    }
    if(b.length() > 2)
    {
    for(int i = 0; i < b.length() - 2; i++)
    {
        if(b[i] != b[i + 1] && b[i + 1] != b[i + 2])
        {    
            notInOrder = true;
        }
    }
    }
    
    // no empty spots
    if(underscoreCounter == 0 && notInOrder)
        return "NO";
    // check if there are no happy bugs, at least on is enough
    for(int i = 0; i < 26; i++)
    {
        if(map[i] == 1)
            return "NO";
    }
    return "YES";
}