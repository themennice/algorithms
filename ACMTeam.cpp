/*
https://www.hackerrank.com/challenges/acm-icpc-team/problem

This solution finds the max number of skills a team of two can have
as well as counts how many such teams with the same number of skills there are.
*/

vector<int> acmTeam(vector<string> topic) {

    vector<int> result = {0,0};
    cout << topic[0].size() << endl;
    cout << topic.size() << endl;
    
    int maxNum = 0;
    int max = 0;
    int size = topic[0].size();
    int size_topic = topic.size();

    for(int i = 0; i < size_topic - 1; i++)
    {
        for(int j = i + 1; j < size_topic; j++)
        {
            int count = size;
            for(int k=0; k < size; k++)
            {

                if(topic[i][k] == '1' || topic[j][k] == '1')
                    count--;
            }
            // store the longest common team of 2 in terms of skills
            if(result[0] < size - count)
            {
                result[0] = size - count;
                // reset the best score count
                result[1] = 1;
            }
            // if found another team of two with the same num of skills, ++
            else if(result[0] == size - count)
            {
                result[1]++;
            }
        }
    }
    return result;
}