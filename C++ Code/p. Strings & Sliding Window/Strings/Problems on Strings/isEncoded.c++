#include <bits/stdc++.h> // HEADER FILE

using namespace std;

string encodedString(string str)
{
    string result = "";

    // Traversing the encoded string
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ']')
        {
            result.push_back(str[i]);
        }
        else
        {
            // extract str from result
            string str = "";
            while (!result.empty() && result.back() != '[')
            {
                str.push_back(result.back());
                result.pop_back();
            }

            // reverse the string str
            reverse(str.begin(), str.end());

            // remove last char from result which is [
            result.pop_back();

            // extract num from result
            string num = "";
            while (!result.empty() && (result.back() >= '0' && result.back() <= '9'))
            {
                num.push_back(result.back());
                result.pop_back();
            }

            // reversing the num string
            reverse(num.begin(), num.end());

            // convert string to integer
            int int_num = stoi(num);

            // inserting str in result int_num times
            while (int_num)
            {
                result += str;
                int_num--;
            }
        }
    }
    return result;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    cout << encodedString(s) << endl;

    return 0;
}

/*
#include <bits/stdc++.h> // HEADER FILE

using namespace std;

string encodedString(string str)
{
    string result = "";

    // Traversing the encoded string
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ']')
        {
            // If the current character is not ']', append it to the result string
            result.push_back(str[i]);
        }
        else
        {
            // If the current character is ']', extract the string and number from the result

            // Extracting the string enclosed in '[' and ']' from the result string
            string encodedStr = "";
            while (!result.empty() && result.back() != '[')
            {
                encodedStr.push_back(result.back());
                result.pop_back();
            }

            // Reverse the extracted string to get the original string
            reverse(encodedStr.begin(), encodedStr.end());

            // Remove the last character '[' from the result string
            result.pop_back();

            // Extracting the number that represents the repetition count from the result string
            string numStr = "";
            while (!result.empty() && isdigit(result.back()))
            {
                numStr.push_back(result.back());
                result.pop_back();
            }

            // Reverse the extracted number string to get the actual number
            reverse(numStr.begin(), numStr.end());

            // Convert the number string to an integer
            int repetitionCount = stoi(numStr);

            // Appending the original string to the result 'repetitionCount' times
            while (repetitionCount > 0)
            {
                result += encodedStr;
                repetitionCount--;
            }
        }
    }

    return result;
}

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    // Calling the encodedString function and printing the result
    cout << encodedString(s) << endl;

    return 0;
}

*/