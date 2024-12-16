// Time Complexity : O(n^3)
#include <iostream>
using namespace std;

// Structure to store word hash and its count
struct Word
{
    string hash; // Hash contains only the first and last character of the word
    int count;   // Count of occurrences
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); // For faster I/O

    Word wordlist[10000] = {}; // Array to store word hash and their count
    int size = 0;              // Count the words in wordlist

    int t;
    cin >> t; // Number of test cases
    for (int tc = 0; tc < t; tc++)
    {
        cout << "Case " << tc + 1 << ":\n"; // Output case number

        int n;
        cin >> n;     // Number of words
        cin.ignore(); // Ignore leftover newline

        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str; // Input word

            // Generate hash from first and last character of the word
            string hash;
            hash += str[0];
            hash += str[str.length() - 1];

            // Check if the hash already exists in wordlist
            bool found = false;
            for (int j = 0; j < size; j++)
            {
                if (wordlist[j].hash == hash) // check if hashes are equal
                {
                    found = true;        // if hash is found at j
                    wordlist[j].count++; // Increment count
                    break;
                }
            }

            // If not found, add a new entry
            if (!found)
            {
                wordlist[size].hash = hash; // Add hash to wordlist
                wordlist[size].count = 1;   // Set count to 1
                size++;                     // Increment size of wordlist
            }
        }

        int m;
        cin >> m;     // Number of sentences
        cin.ignore(); // Ignore leftover newline after reading m

        for (int i = 0; i < m; i++)
        {
            string sentence;
            getline(cin, sentence); // Input sentence

            int total = 0;     // Total occurrences of words in sentence
            string token = ""; // Each word of the sentence is a token

            for (int j = 0; j <= sentence.length(); j++)
            {
                if (j != sentence.length() && sentence[j] != ' ') // If the character is not a space or end of sentence
                {
                    // if the character is not a space, append it to the token
                    token += sentence[j];
                }
                else
                {
                    // If the token is not empty and the character is a space means a word is over
                    if (!token.empty())
                    {
                        // Generate hash from first and last character of the token
                        string hash;
                        hash += token[0];
                        hash += token[token.length() - 1];

                        // Check if hash already exists in wordlist
                        for (int k = 0; k < size; k++)
                        {
                            if (wordlist[k].hash == hash) // check if hashes are equal
                            {
                                total += wordlist[k].count; // If exists, add the count
                                break;
                            }
                        }

                        token = ""; // Reset token
                    }
                }
            }

            // Output
            cout << total << "\n";
        }
    }

    return 0;
}
