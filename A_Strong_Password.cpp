// Author: Mushfiq R.
#include <iostream>
#include <string>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {

        std::string s;
        std::cin >> s;
        long cut(0);
        for (long p = 1; !cut && p < s.size(); p++)
        {
            if (s[p - 1] == s[p])
            {
                cut = p;
                break;
            }
        }

        if (!cut)
        {
            std::cout << (s[0] == 'a' ? 'b' : 'a') << s << std::endl;
        }
        else
        {
            std::cout << (s.substr(0, cut)) << (s[cut - 1] == 'a' ? 'b' : 'a') << s.substr(cut) << std::endl;
        }
    }
    return 0;
}
