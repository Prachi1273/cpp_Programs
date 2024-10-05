//Program Title : Bank Operations  
//Program Code :
#include<iostream>
#include<string.h>
using namespace std;

class bank
{
    public : 
        char  name [20] ,  atype [20];
        int accno ,balance ;

        bank(char  name [20] , char  atype [20], int accno ,int balance )
        {
            strcpy(name,name);
            strcpy(atype,atype);
            accno = accno;
            balance = balance;
        }

        void assign()
        {
            cout<<"Enter name : ";
            cin>>name;
            cout<<" Acc type : ";
            cin>>atype;
            cout<<"acc no : ";
            cin>>accno;
            cout<<"Balance : ";
            cin>>balance;
        }

        void Deposit(int amt)
        {
            balance+=amt;
            
        }

        void Withdraw(int amt)
        {
            balance-=amt;
            
        }

        void Display()
        {
            cout<<"Your name is : "<<name<<"\n";
            cout<<"Your balance is : "<<balance<<"\n";
        }
};

int main()
{
    char  name [20],  atype [20];
        int accno ,balance ;
    bank bobj( name , atype ,accno ,balance );
    int ch = 0;
    while(1)
    {
        cout<<"\n1.Assign Values\n2.Deposite\n3.Withdraw\n4.Display\n5. Exit\nEnter choice : ";
        cin>>ch;
        int amt = 0;
        switch(ch)
        {
            case 1:
                bobj.assign();
                break;
            case 2:
                
                cout <<"Enter amt : ";
                cin>>amt;
                bobj.Deposit(amt);
                break;
            case 3:
                
                cout <<"Enter amt : ";
                cin>>amt;
                bobj.Withdraw(amt);
                break;
            case 4:
                bobj.Display();
                break;
            case 5:
            	exit(0);
        }
    }

    return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./bank
1.Assign Values
2.Deposite
3.Withdraw
4.Display
5. Exit
Enter choice : 1
Enter name : abc_pqr
 Acc type : savings
acc no : 85
Balance : 5000
1.Assign Values
2.Deposite
3.Withdraw
4.Display
5. Exit
Enter choice : 4
Your name is : abc_pqr
Your balance is : 5000
1.Assign Values
2.Deposite
3.Withdraw
4.Display
5. Exit
Enter choice : 2
Enter amt : 500
1.Assign Values
2.Deposite
3.Withdraw
4.Display
5. Exit
Enter choice : 4
Your name is : abc_pqr
Your balance is : 5500
1.Assign Values
2.Deposite
3.Withdraw
4.Display
5. Exit
Enter choice : 3
Enter amt : 1000
1.Assign Values
2.Deposite
3.Withdraw
4.Display
5. Exit
Enter choice : 4
Your name is : abc_pqr
Your balance is : 4500
1.Assign Values
2.Deposite
3.Withdraw
4.Display
5. Exit
Enter choice : 5
*/
