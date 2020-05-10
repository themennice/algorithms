/*
https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

This solution counts the number of times a basketball player
breaks their highest and lowest records separated by space, respectively.

Simply replace the given code at the link above with my implementation from below
and run it.
*/
vector<int> breakingRecords(vector<int> scores) {

    vector<int> num_records(2);
    int max_score = scores[0], max_count = 0, min_score = scores[0], min_count = 0;

    for(int i = 1; i < scores.size(); i++)
    {
        if(scores[i] > max_score)
        {
            max_score = scores[i];
            max_count++;
        }
        if(scores[i] < min_score)
        {
            min_score = scores[i];
            min_count++;
        }
    }

    num_records[0] = max_count;
    num_records[1] = min_count;
    return num_records;
}