#include<stdio.h>


struct data{
    int num1;
    int num2;
};


int main()
{

struct data ptr;
struct data *data_pointer;
data_pointer = &ptr + 1;                  //What is the value of data_pointer 
printf("%p\n",ptr);
printf("%p\n",data_pointer);
	return 0;
}
