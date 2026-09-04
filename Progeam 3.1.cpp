#include<iostream>
#include<string>
using namespace std;

class bankaccount {
    private:
    string owner;
    double balance;

    public:
    void open(const string &name, double initial) {
        owner =name;
        balance =(initial >0)?initial :0;
     }
    void deposit(double amt) {if (amt>0)balance += amt;}
    bool withdraw(double amt)
    {
        if(amt>0&&amt<=balance)
        {balance -=amt; return true;}
        return false;
        }
    double getbalance()const{return balance;}
    string getowner()const{return owner;}
};
int main(){
    bankaccount a;
    a.open("liki",100);
    a.deposit(500);
    if(!a.withdraw (2000))
    cout<<"withdraw linked insufficient\n";
a.withdraw(300);
cout<<a.getowner()<<"balance="<<a.getbalance()<<endl;
return 0;
}