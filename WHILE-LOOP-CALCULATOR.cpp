#include <iostream>
using namespace std;

int main()
{
   int choice, n1, n2,result;
   cout << "\n\n\tCALCULATOR\n";
   cout << "\tby: Sarah\n\n";

   while(true)
   {
       cout <<  "1. Add\n" <<
                "2. Subtract\n" <<
                "3. Divide\n" <<
                "4. Multiply\n" <<
                "5. Exit\n\n"<<
                "What operator do you want to perform?\n" <<
                "Just enter a number from the menu: ";
                
        cin >> choice;

        if(choice == 5)
            break;
        cout << "\nPlease enter the first value: ";
        cin >> n1;
        cout << "\nPlease enter the second value: ";
        cin >> n2;
    {
	if(choice == 1)
        result = n1 + n2;
    else if(choice == 2)
        result = n1 - n2;
    else if(choice == 3)
        result = n1 / n2;
    else if(choice == 4)
        result = n1 * n2;

    cout << "\nThe answer is: " << result << "\n\n" << endl;

	}

}
  cout << "\nBye bye!\n\n";


}
