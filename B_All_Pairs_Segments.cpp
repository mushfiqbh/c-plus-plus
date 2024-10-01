// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())

// Function to join a vector of strings with a delimiter
string join(const vector<string> &v, const string &delimiter)
{
    string result;
    for (size_t i = 0; i < v.size(); ++i)
    {
        result += v[i];
        if (i < v.size() - 1)
        {
            result += delimiter;
        }
    }
    return result;
}

// Function to process a test case and calculate the answer
string process_test_case(int n, int q, const vector<int> &x, const vector<int> &queries)
{
    unordered_map<int, int> freq;
    for (int c = 1; c <= n; ++c)
    {
        // Calculate coverage at p = X_C
        int k_p = (c - 1) * (n - c + 1) + (n - c);
        freq[k_p]++;

        if (c < n)
        {
            int delta = x[c] - x[c - 1] - 1;
            if (delta > 0)
            {
                int k_between = c * (n - c);
                freq[k_between] += delta;
            }
        }
    }

    // Prepare answers for queries
    vector<string> answers;
    for (int ki : queries)
    {
        answers.push_back(to_string(freq[ki]));
    }

    return join(answers, " ");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    vector<string> results;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> x(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> x[j];
        }
        vector<int> queries(q);
        for (int j = 0; j < q; ++j)
        {
            cin >> queries[j];
        }
        string result = process_test_case(n, q, x, queries);
        results.push_back(result);
    }
    cout << join(results, "\n") << endl;

    return 0;
}
