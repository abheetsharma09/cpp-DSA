#include <iostream>
using namespace std;

// Question - 01[Square Patterns]
/*
1234
1234
1234
1234
*/
int sq_pattern(int n)
{
    int num = n + 1;
    for (int i = 1; i != num; i++)
    {
        for (int j = 1; j != num; j++)
        {
            std::cout << j << " ";
        }
        std::cout << endl;
    }
    return 0;
}

// Question - 02[Alphabet Patterns]
/*
ABCD
EFGH
IJKL
MNOP
*/
int sq_alphabet(int n)
{
    // 65 to 95 for Capital Letter ASCII Value
    int charNum = 65;
    for (int i = 0; i != n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char alphaNum = (int)charNum;
            cout << alphaNum << " ";
            charNum++;
        }
        cout << endl;
    }
    return 0;
}

// Question - 03[Square Pattern]
/*
123
456
789
*/
int sq_pattern_num(int n)
{
    int count = 1;
    for (int i = 0; i != n; i++)
    {
        for (int j = 0; j != n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}

// Question - 04(Triangular Patterns)
/*
 *
 * *
 * * *
 * * * *
 */
int tri_Pattern(int n)
{
    for (int i = 1; i != n + 1; i++)
    {
        for (int j = 0; j != i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}

// Question -05[Triangle Number Pattern]
/*
1
22
333
4444
*/
int tri_num_Pattern(int n)
{
    for (int i = 1; i != n + 1; i++)
    {
        for (int j = 0; j != i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// Question -06[Triangle Number Pattern]
/*
1
12
123
1234
*/
int triNumPattern(int n)
{
    for (int i = 1; i != n + 1; i++)
    {
        for (int j = 1; j != i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Question -07[Reverse Triangle Number Pattern]
/*
1
21
321
4321
*/
int reverse_triNumPattern(int n)
{
    for (int i = 1; i != n + 1; i++) // 12345
    {
        for (int j = i; j != 0; j--) // i to 0
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Question - 08[Floyd's Triangular Pattern]
/*
1
2 3
4 5 6
7 8 9 10
*/
int floydPattern(int n)
{
    int count = 1;
    for (int i = 1; i != n + 1; i++)
    {
        for (int j = 0; j != i; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
    return 0;
}

// Question - 09 [Inverted Triangular Pattern]
/*
1 1 1 1
2 2 2
3 3
4
*/
int inverted_triPattern(int n)
{
    int count = 1;
    for (int i = n; i != 0; i--)
    {
        for (int j = 1; j != i + 1; j++)
        {
            cout << count << " ";
        }
        count += 1;
        cout << endl;
    }

    return 0;
}

// Question 10[Pyramid Patterns]
/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
*/
int pyramidPattern(int n)
{
    int main_val = n;
    for (int i = 1; i != main_val + 1; i++)
    {
        int spacesFormulae = main_val - i;
        int numFormulae = main_val - spacesFormulae;
        for (int k = 0; k != spacesFormulae; k++)
        {
            cout << " "
                 << " ";
        }
        for (int l = 1; l != numFormulae + 1; l++)
        {
            cout << l << " ";
        }
        for (int j = 1; j != i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}

int main()
{
    // FOR LOOPS - Initialization , Condition ,Updation
    sq_pattern(4);
    cout << endl;
    sq_alphabet(3);
    cout << endl;
    sq_pattern_num(3);
    cout << endl;
    tri_Pattern(5);
    cout << endl;
    tri_num_Pattern(5);
    cout << endl;
    triNumPattern(5);
    cout << endl;
    reverse_triNumPattern(4);
    cout << endl;
    floydPattern(5);
    cout << endl;
    inverted_triPattern(4);
    cout << endl;
    pyramidPattern(4);
    cout << endl;
    return 0;
}