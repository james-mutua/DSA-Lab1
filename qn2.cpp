#include <iostream>
using namespace std;
void printarray (int arg[], int length) {
for (int n=0; n<length; n++)
cout << arg[n] << " "; cout << "\n";
}
int main (){
int firstarray[] = {5, 10, 15};
int secondarray[] = {2, 4, 6, 8, 10};
printarray (firstarray,2);
printarray (secondarray,5);
return 0;
}
/*The fumction printarray prints out the number of elements specified in length starting from the first index, 0.
firstarray will output  the integers stored in the first 2 indices i.e. 5 and 10.
secondarray will output all the integers stored in the array as it contains 5 elements.*/
