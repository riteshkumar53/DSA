// plus one (66)

// Brute force

// #include <bits/stdc++.h>
// using namespace std;

// void plus_one(vector<int> vec)
// {
//     int n = vec.size();
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += pow(10, (n - 1 - i)) * vec[i];
//     }

//     sum = sum + 1;

//     int temp = sum;
//     int count = 0;
//     while (temp != 0)
//     {
//         count++;
//         temp = temp / 10;
//     }

//     if (count > n)
//     {
//         vec.resize(count);
//     }
//     int i = 0;
//     while (sum != 0)
//     {
//         int digit = sum % 10;
//         vec[count - i - 1] = digit;
//         sum = sum / 10;
//         i++;
//     }

//     for (int val : vec)
//     {
//         cout << "[" << val << "]";
//     }
// }

// int main()
// {
//     vector<int> vec = {8, 9, 9, 9, 9};
//     plus_one(vec);
//     return 0;
// }

// Plus One (LeetCode 66)

#include <bits/stdc++.h>
using namespace std;

vector<int> plus_one(vector<int> &digits)
{
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);

    return digits;
}

int main()
{
    vector<int> digits = {9, 9, 9};

    digits = plus_one(digits);

    for (int x : digits)
    {
        cout << x << " ";
    }

    return 0;
}