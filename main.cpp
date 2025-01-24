#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    // PROBLEM 1
   /* string name;
    int age;
    cout << " Please,enter your name: " << endl;;
    cin >> name;
    cout << " Ok, " << name << endl;
    cout << "How old are you:" << endl;
    cin >> age;
    cout << " Great " << name << " your are " << age << " years old." << endl;*/

    // Problem 2

  /*  cout << setw(5) << "1" << endl;
    cout << setw(5) << "2" << endl;
    cout << setw(5) << "3" << endl;
    cout << setw(5) << "4" << endl;
    cout << setw(5) << "5" << endl;*/

    //Problem 3
  /*  int x,y,temp;

    cin >> x >> y;
    temp = x;
    x = y;
    y = temp;
    cout << x << setw(5)<< y << endl;*/

    //Problem 4
   /* int i;
    int n;
    cout << "Enter number of rows: ";
    cin >> i;

    for (int i = 1; i <= n; i++);
    {
        cout << setw(10) << i << setw(10) << i*i << endl;
    }*/

    //Problem 5
    string text;
    int m;
    cout << "Enter text: ";
    cin >> text;
    m = (50 - text.length())/2;
    cout << setw(m) <<  text << setw(m) << endl;



    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.