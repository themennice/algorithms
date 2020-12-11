// https://www.hackerrank.com/challenges/library-fine/problem
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine = 0;
    
    if(d1 > d2)
        fine = (d1-d2)*15;
    if(m1 > m2)
        fine = (m1-m2)*500;
    if(y1 > y2)
        fine = (y1-y2)*10000;
    if(y1 < y2 || (m1 < m2 && y1 <= y2))
        fine = 0;
    return fine;
}