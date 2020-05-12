/* https://www.hackerrank.com/challenges/migratory-birds/problem */

int migratoryBirds(vector<int> arr) {
    // set vars for the most common type of bird and its index
    int max_birds = 0;
    int bird_index;
    
    // use a map to achieve O(n) time complexity
    unordered_map<int, int> bird_map;
    // populate the map with array values
    for(int i = 0; i < arr.size(); i++)
    {
        bird_map[arr[i]] += 1;
    }
    // iterate through the map to find the most common type of brid and return its index
    for(int i = 0; i < bird_map.size(); i++)
    {
        if(bird_map[i] > max_birds)
            {
                max_birds = bird_map[i];
                bird_index = i;
            }
    }
    return bird_index;
}