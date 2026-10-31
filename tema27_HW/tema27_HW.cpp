#include "Passport.h"
#include "ForeignPassport.h"
#include "Visa.h"

int main()
{
    Passport a(222,1,"Pipenko","Mariia","Oleksandrivna","29.08.2010","Kharkiv",
        "29.09.2024","Employee","Kharkiv");
    a.showInfo();

    ForeignPassport c(222, 1, "Pipenko", "Mariia",
        "29.08.2010", "Kharkiv", "29.09.2024", "Employee");
    c.showInfo();
    int menu = 0;
    while(menu!=99){
        cout << "1 - Add Visa \n 2 - Show all visas \n 99 - Exit \n >>>";
        cin >> menu;
        if (menu == 1) {
            string country;
            string openDate;
            string closeDate;

            cout << "Enter country: ";
            cin >> country;
            cout << "Enter open date: ";
            cin >> openDate;
            cout << "Enter close date: ";
            cin >> closeDate;
            Visa g(country, openDate, closeDate);
            c.addVisa(g);
            g.showVisa();
        }
        else if (menu == 2) {
            c.showAllVises();
        }
        else if(menu == 99){
            cout << "Exit";
        }
         else {
             return 0;
        }
    }


}