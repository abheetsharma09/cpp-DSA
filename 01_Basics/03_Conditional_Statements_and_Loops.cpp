#include <iostream>
using namespace std;
////////////////////////////////////CONDITIONAL STATEMENTS////////////////////////////////////

// AGE ADULT OR Not
//  int main(){
//      int age;
//      std::cout << "Enter your Age : ";
//      std::cin >> age;
//      if (age >= 18){
//          std::cout << "Adult Human";
//      }else if (age <= 0)
//      {
//          std::cout << "ERROR!!";
//      }else {
//          std::cout << "Not Adult";
//      }
//      return 0;
//  }

// ODD EVEN FUNCTION
//  int main (){
//      int num;
//      std::cout << "Enter a Number : ";
//      std::cin >> num;
//      if (num % 2 == 0){
//          std::cout << "EVEN\n";
//      } else{
//          std::cout << "ODD";
//      }

// }

// find if the Value is in uppercase or not
//  int main(){
//      char main_char;
//      std::cout << "Enter Letter : ";
//      std::cin >> main_char;
//      int new_main_char = main_char;

//     if (new_main_char >= 65 && new_main_char <= 95){
//         std::cout << "A Capital Letter\n";
//     } else if (new_main_char >= 97 && new_main_char <= 122){
//         std::cout << "A Small Letter\n";
//     }
// }

/////////////////////////LOOPS///////////////////////////////

// While Loops
//  int main(){
//      int num = 0;
//      while (num != 25)
//      {
//          num ++;
//          std::cout << num << std::endl;
//      }
//  }

// For Loops

// Sum number from 1 to n
//  int main(){
//      int count = 10;
//      int count_sum = 0;
//      //Initialization , Condition ,Updation
//      for (int i = 0; i != count+1; i++){
//          std::cout << i << std::endl; //WORK
//          count_sum += i;
//      }
//      std::cout << "--------------------\n";
//      std::cout << count_sum;
//      return 0;
//  }

// SUM of even numbers from 1 to n

// int main(){
//     int count = 20;
//     int count_num = 0;
//     for (int i = 0; i != count+1; i++){
//         if(i % 2 == 0){
//             std::cout << i << "\n";
//             count_num += i;
//         }
//     }
//     std::cout << count_num << "\n";
// }

//Check Whether Prime Number 
int main(){
    //Variables
    int count = 2;
    int inp_num;
    bool is_prime = true;
    //User Input
    cout << "Enter the Number : ";
    cin >> inp_num;
    //Operation
    while (count != inp_num-1){
        if (inp_num % count == 0){
            is_prime = false;
            break;
        }
        count++;
    }
    if(is_prime == true || inp_num == 2){
        printf("Prime Number");
    }else{
        printf("Composite Number");
    }
    return 0;
}