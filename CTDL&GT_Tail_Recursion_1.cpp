//https://www.geeksforgeeks.org/
class tailRecursion{

    static int tailRecursion(int n)
    {
        if (n == 0)
            return 1;
 
        return n * tailRecursion(n - 1);
    }
