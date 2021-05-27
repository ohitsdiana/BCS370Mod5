/*
* Module 5 Assignment
*
* Diana Guerrero
* Professor Zhao
* BCS 370
* 10/12/20
*
* Partner: Patrick Adams
*/

#include "MySet.cpp"
#include <iostream>
#include <vector>

int main()
{
	Set setA;           
	setA.insert(10);   
	setA.insert(20);
	setA.insert(30);
	setA.insert(40);

	Set setB;           
	setB.insert(50);   
	setB.insert(60);
	setB.insert(70);
	setB.insert(80);

	// Print Sets
	cout << "Set A is : ";  
	setA.printSet();

	cout << "Set B is : ";
	setB.printSet();

	// Call Set Functions
	Set unionSet = SetUnion(setA, setB);       
	Set intSet = SetIntersection(setA, setB);
	Set diffSetA = SetDifference(setA, setB);
	Set diffSetB = SetDifference(setB, setA);

	// Print Results
	cout << "Union of sets is is: ";          
	unionSet.printSet();

	cout << "Intersection of Sets is: ";
	intSet.printSet();

	cout << "Difference of setA, setB is: ";
	diffSetA.printSet();

	cout << "Difference of setB setA is: ";
	diffSetB.printSet();

	return 0;
}