// Marcel Amie jr
// this is my own work
#include <iostream>
#include <fstream>
#include <string>

//Question 1

using namespace std;
int main() {
    //Declaring variables
    int largest = -100, smallest = 100;
    int num;

    //Getting the numbers entered by the user
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number:";
        cin >> num;
        if (largest < num)
        {
            largest = num;
        }
        if (smallest > num)
        {
            smallest = num;
        }
    }

    //Displaying the output
    cout << "Smallest Number is:" << smallest << endl;
    cout << "Largest Number is:" << largest << endl;

    //Question 2

    using namespace std;

    int sum = 0, numb = 1, cnt = 0;

    do
    {
        if (numb % 7 == 0)
        {
            sum += numb;
            cnt++;
        }
        numb++;

    } while (cnt != 50);


    cout << "The sum of first 50 Numbers which are multiples of 7 :" << sum << endl;
    //Question 4

    int main(); {
        char string1[20];
        int i, length;
        int flag = 0;
        // calculating the sum
        cout << "Enter a string: "; cin >> string1;

        length = strlen(string1);

        for (i = 0; i < length; i++) {
            if (string1[i] != string1[length - i - 1]) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            cout << string1 << " is not a palindrome" << endl;
        }
        else {
            cout << string1 << " is a palindrome" << endl;
        }

    }
    //Question 5
    int main();
    {
        int n, i;
        bool isPrime = true;
        cout << "Enter a positve integer ";
        cin >> n;
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << " is prime" << endl;
        else 
            cout << " is not prime" << endl;
        
    }

    //Question 6
    int main(); {
        //Declaring variables

        int num, sum = 0;

        cout << "How many integers would you like enter?" << endl;
        cin >> num;

        int arr[100];

        for (int i = 0; i < num; i++)
        {
            cout << "Enter a number" << (i) << ":";
            cin >> arr[i];
        }

        for (int i = 0; i < num; i++)
        {
            sum += arr[i];
        }

        cout << "The average is :" << ((double)sum) / num << endl;
    }

    //Question 7

    ifstream fin("input.in");

    // validate file input object
    if (!fin) {
        cerr << "File not found...";

    }
    int numStrings;
    cout << "please enter a number of strings to read:";
    cin >> numStrings;

    string* strArr = new string[numStrings];

    string str;
    int i = 0;
    while (i < numStrings) {


        fin >> strArr[i];

        i++;
    }
    for (int i = 0; i < numStrings; i++)

        cout << strArr[i].size() << endl;

    string max = strArr[0];
    for (int i = 1; i < numStrings; i++)
    {
        if (strArr[i].size() > max.size())max = strArr[i];
    }
    cout << "the largest string in the array is " << max << endl;

    //Question 3

    using namespace std;

    int calFactorial(int num);

    int main(); {
        //Declaring variables
        for (int i = 1; i <= 10; i++)
        {
            int res = calFactorial(i);
            cout << res << endl;

        }
    }
    return 0;
}

int calFactorial(int num)
{
    int res;


    if (num == 0)
    {
        res = 1;
    }
    else if (num == 1)
    {
        res = 1;
    }
    else if (num > 1)
    {

        cout << num << "*";
        if (num - 1 == 1)
        {
            cout << "1=";
        }

        res = num * calFactorial(num - 1);
    }
    return res;

}
    




       


    


    

    



    




    
    
    
