#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    deque<string> tasks;

    tasks.push_back("Study Math");
    tasks.push_back("Practice Coding");
    tasks.push_back("study Physics");

    tasks.push_front("Submit Assignment");

    cout << "Current Task List:\n";

    for(string t: tasks)
        cout << t << endl;

   cout << "\nProcessing Tasks...\n";

   while(!tasks.empty())
   {
    cout << "Doing: " << tasks.front() << endl;
    tasks.pop_front();
   }

   return 0;
}