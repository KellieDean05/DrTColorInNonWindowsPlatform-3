//Dr_T Color in Non-Windows Platforms ANSI technique 9-1-2019
//source: https://stackoverflow.com/questions/20608058/c-colour-console-text
//using https://en.wikipedia.org/wiki/ANSI_escape_code

#include <iostream>
using namespace std; 

int main()
{
  
  double char id = ' ';
 

if ( id == 1 )
{
    cout << "Martha" << endl;
}
else
{

    if ( id == 2 || id == 3 )
    {
        cout << "David" <<endl;
    }
    else
    {
        if ( id == 4 )
        {
            cout << "Green Tea" << endl;
        }
        else
        {
            cout << "Commit to Complete" << endl;
        }
    }
}

return 0;
}