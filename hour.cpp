#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{
    char n1;
    char n;
    string result;
    if (s[8]=='P')
    {
        n1='1';
        for (int i=1;i<8;i++)
        {
            if ((s[0]=='0')&&(s[1]==n1))
            {
                n=n1+2;
                result='1';
                s.erase(8,2);
                s.erase(0,2);
                result=result+n;
                result=result+s;
                return result;
            }
        n1=n1+1;
        }
        n1='8';
        for (int i=1;i<3;i++)
        {
            if ((s[0]=='0')&&(s[1]==n1))
            {
                n=n1-8;
                result='2';
                s.erase(8,2);
                s.erase(0,2);
                result=result+n;
                result=result+s;
                return result;
            }
        n1=n1+1;
        }
        n1='0';
        for (int i=0;i<2;i++)
        {
            if ((s[0]=='1')&&(s[1]==n1))
            {
                n=n1+2;
                result='2';
                s.erase(8,2);
                s.erase(0,2);
                result=result+n;
                result=result+s;
                return result;
            }
        n1=n1+1;
        }
        if ((s[0]=='1')&&(s[1]=='2'))
        {
            s.erase(8,2);
            result=s;
            return result;
        }
    }
    if (s[8]=='A')
    {
        if ((s[0]=='1')&&(s[1]=='2'))
        {
            s.erase(8,2);
            s.erase(0,2);
            result="00";
            result=result+s;
            return result;
        }
        else
        {
        s.erase(8,2);
        result=s;
        return result;
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    fout.close();

    return 0;
}

