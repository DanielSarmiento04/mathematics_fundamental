#include <iostream>
#include <math.h>

using namespace std;

int solve_1();
int solve_2();
int solve_3();
int solve_4();
int solve_5();

int main()
{
    int first_question = solve_1();
    printf("The answer to the first question is %d \n", first_question);
    int second_question = solve_2();
    printf("The answer to the second question is %d \n", second_question);
    int third_question = solve_3();
    printf("The answer to the third question is %d \n", third_question);
    int fourth_question = solve_4();
    printf("The answer to the fourth question is %d \n", fourth_question);
    int fifth_question = solve_5();
    printf("The answer to the fifth question is %d \n", fifth_question);
    return 0;
}

int solve_1()
{
    // Explanation
    // First, solve the main operation in the equation
    // 1. (-7) * (-8) = 56 
    // 2. multiply by -1
    // 3. 56 * -1 = -56
    // 4. add 56 to both sides
    // 5. -56 -6 -5 = -67
    return (-6) - (-7) * (-8) + (-5);
}

int solve_2()
{
    // Explanation
    // First, solve the both operation inner in the parentesis
    // right operation,  (3 -6 * 2)  = (3 -12 )   = -9
    // left operation,  (93 + 33 + (4 - 26)) = (93 + 33 + (-22)) = 104
    // Second, solve the main operation in the equation
    // 1. (-9) + 104 = 95
    int resp = (93 + 33 + (4 - 26)) + (3 -6 * 2);
    return resp;
}

int solve_3()
{
    // Explanation
    // First, solve the parentesis multiplication
    // (-2)*(-1)*(-3) = -6
    // Second, solve the parentesis with previus operation
    // 12 * -6 = -72
    return 12*(-2)*(-1)*(-3);
}

int solve_4()
{
    // Explanation
    // first. make the multiplication
    // -7 * 33 = -231
    // second , add +8
    // -231 + 8 = -223
    return 8+(-7)*33;
}


int solve_5()
{
    // Explanation
    // First, solve inner parentesis
    // 5+25 = 30 
    // 147+(83+(30))= 147+113=260
    return 147+(83+(5+25));
}