/* https://www.hackerrank.com/challenges/bon-appetit/problem?i */

/*
   Solution to calculate if the bill was split fairly between two people
   given that one of the food items was not to be shared.
*/
void bonAppetit(vector<int> bill, int k, int b) {

    int sum = 0;
    for(int i = 0; i < bill.size(); i++)
    {
        if(i != k)
            sum += bill[i];
    }
    if(sum/2 == b)
        cout << "Bon Appetit" << endl;
    else
        cout << b - sum/2;
}