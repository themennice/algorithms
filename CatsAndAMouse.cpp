/* https://www.hackerrank.com/challenges/cats-and-a-mouse/problem */

/* Cats and a mouse one-liner. The solution finds which cat will reach the mouse first */
string catAndMouse(int x, int y, int z) {

    // if(abs(z - x) < abs(z - y))
    //     return "Cat A";
    // else if(abs(z - x) > abs(z - y))
    //     return "Cat B";
    // else
    //     return "Mouse C";
    return (abs(z - x) < abs(z - y)) ? "Cat A" : (abs(z - x) > abs(z - y)) ? "Cat B" : "Mouse C";
}