/* https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem */

/* Simply replace the given function with my function below.
   This solution keeps track of different rankings Alice held as she progressed
   through the leaderboard.
*/

vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {

    // create a set of distinct scores
    vector<int> scores_set;
    for(int i = 0; i < scores.size(); i++)
    {
        if(scores[i] == scores[i - 1])
            continue;
        scores_set.push_back(scores[i]);
    }

    // create an output vector
    vector<int> rank(alice.size());

    // define the ending index of the set to start with and move backwards
    int index = scores_set.size() - 1;

    // for each score of alice, find the index of the corresponding rank
    for(int i = 0; i < alice.size(); i++)
    {   
        int j;
        for(j = index; j >= 0; j--)
        {
            if(scores_set[j] > alice[i])
                break;
        }
        if(index == 0 && scores_set[j] < alice[i])
            rank[i] = 1;
        else 
            rank[i] = j + 2;
        // no need to start from the beginning, simply start at last known score, since it is all ascending
        index = j;
    }
    return rank;
}