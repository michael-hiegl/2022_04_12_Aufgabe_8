//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_04_12_Aufgabe_8	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 4/12/2022 6:39:08 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************
int ArraySumme(int myArray[], int AnzahlArrayElemente)
{
	int Summe = 0;

	for (int i = 0; i < AnzahlArrayElemente; i++)
	{
		Summe += myArray[i];
	}
	return Summe;
}


int main(void)
{
	//Variables
	int i_Array[] = { 0,1,2,3,5,8,13,21,34,55 };



	//Code
	printf("%i", ArraySumme(i_Array, sizeof(i_Array) / sizeof(int)));


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}