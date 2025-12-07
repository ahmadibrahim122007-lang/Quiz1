#include <iostream>
using namespace std;
int main()
 {
    int n , i;
    float fees, finalfees;
 cout << "Enter number of patients: ";
    cin >> n;

    for ( i = 1; i <= n; i++) 
    {
        cout << "Enter fees for patient " << i << ": ";
        cin >> fees;

        if (fees > 2500)
         {
            finalfees = fees - (fees * 0.06);
        } 
        else 
        {
            finalfees= fees;
        }

        cout << "finalfees for patient  " << i<<":"<<finalfees<<endl; 
            
    }

    return 0;
}
