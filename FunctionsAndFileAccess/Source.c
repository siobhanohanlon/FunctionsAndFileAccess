#include <stdio.h>

//Instructions
void Instruction()
{
	printf("Please enter three integer values to get average\n");
}

//Average
float Average(int num1, int num2, int num3)
{
	//Declare variable
	float average;

	//Calculations
	average = (num1 + num2 + num3)/ 3;

	//Return 
	return average;
}

//Display
void Display(float result)
{
	//Declare File Name
	FILE* out;

	//Print Result
	printf("The average result is %.2f\n", result);

	//Open & Write to file
	out = fopen("Result.txt", "w");

	//Check if file is open
	if (out == NULL)
	{
		printf("Sorry File could not be opened\n");
	}

	else
	{
		fprintf(out, "The average result is %.2f\n", result);

		//Close File
		fclose(out);
	}
}


//Main
void main()
{
	//Declare Variables
	int num1, num2, num3;
	float averageNum;

	//Call Instructions
	Instruction();

	//Ask user for Intergers
	scanf("%d %d %d", &num1, &num2, &num3);

	//Average
	averageNum = Average(num1, num2, num3);

	//Display
	printf("The value of num1 is %d\n", num1);

	//Call Display
	Display(averageNum);
}