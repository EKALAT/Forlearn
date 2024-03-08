#include <stdio.h>
int main()
{
    int score,number;
    char grade;
    printf("nhap diem cua ban(1-100):");
    scanf("%d",&score);
    number = score/10;
    switch(number){
        case 9: grade = 'A';
        break;
        case 8: grade = 'B';
        break;
        case 7: grade = 'C';
        break;
        case 6: grade = 'D';
        break;
        default : grade ='F';
    }printf("Grade is : %c", grade);
}