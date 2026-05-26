#include <iostream>
using namespace std;

// int main()
// {
//     // FOR LOOPS - Initialization , Condition ,Updation

//     // Question - 01[Square Patterns]
//     int count_A = 4;
//     for (int j = 0; j != count_A; j++)
//     {
//         for (int i = 1; i != count_A + 1; i++)
//         {
//             cout << " " << i;
//         }
//         cout << "\n";
//     }

//     //Question - 02
//     int count_B = 5;
//     int num = 1;

//     for (int k = 0; k != count_B; k++)
//     {
//         for (int l = 0; l != count_B; l++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

// return 0;
// }

// Alphabet Order Pattern
// int main()
// {
//     // 65 95
//     int num_char = 65;
//     int count_C = 3;
//     // cout<< char_num;

//     for (int i = 0; i != count_C; i++)
//     {
//         for (int i = 0; i < count_C; i++)
//         {
//             char char_num = (int)num_char;
//             cout << char_num << " ";
//             if (!num_char <= 95)
//             {
//                 num_char++;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Reverse Triangular Patterns
int main(){
    int count_D =4;
    for (int i = 1; i != count_D+1; i++)
    {
        cout << i << endl;
        for (int j = i; j > count_D; j--)
        {
            cout << j;
        }
        
    }
    
    
    return 0;
}

// Triangular Patterns
// int main()
// {
//     int count_D = 4; // Input Value

//     for (int i = 0; i != count_D; i++)
//     {
//         for (int j = 0; j != i + 1; j++)
//         {
//             // printf("*");// For * Triangular Patterns
//             // cout << i+1;// For Numeric Patters
//         }
//         cout << endl;
//     }
//     return 0;
// }
