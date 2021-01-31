#include <iostream>

using namespace std;

int main()
{
    string customer_name;
    string items_beensold;
    string customerId;
    string goods[3]={"printer","phone","table"};
    int quantity;
    double vat, priceOfGoods, totalAmount, amountPaid, balance, amountowe;
    string customer_needs;





    cout<<"welcome to BENs supermarket"<<endl;
    cout<<"...................................."<<endl;
    cout<<endl;


    cout<<"enter your name"<<endl;
    cin >>customer_name;
    cout <<"please your ID"<<endl;
    cin >>customerId;
    cout<<endl;

    cout<<"these are the items been sold here"<<endl;
    cout <<goods[0]<<endl;
    cout<<goods[1]<<endl;
    cout<<goods[2]<<endl;
    cout<<endl;


    cout<<"printer is 200GHS"<<endl;
    cout<<"phone is 100GHS"<<endl;
    cout<<"table is 50GHS"<<endl;
    cout<<endl;


    cout<<"press P if you want printer"<<endl;
    cout<<"press PH if you want phone"<<endl;
    cout<<"press T if you want table"<<endl;
    cin>>customer_needs;
    cout<<endl;

    if (customer_needs == "P") {
        customer_needs = goods[0];
        priceOfGoods = 200;
    }

    else if (customer_needs == "PH") {
        customer_needs = goods[1];
        priceOfGoods = 100;
    }

    else if (customer_needs=="T"){
        customer_needs = goods[2];
        priceOfGoods = 50;
    }
    else {

        cout << "Unavailable" << endl;
        return 0;

    }


    cout<<"quantity of goods u want"<<endl;
    cin>>quantity;
    cout<<endl;

    vat = 0.12 * priceOfGoods;
    totalAmount = priceOfGoods * quantity + vat;

   cout<<"this is how much you owe: " << totalAmount << endl;
   cout<<endl;

   cout<< "please enter you are paying"<<endl;
   cin>>amountPaid;

   if (amountPaid >= totalAmount) {
        cout << "Money received"<< endl;

   }
   else {
    amountowe = totalAmount - amountPaid;
    cout << "Amount is not enough" << endl;
    cout << "You owe us GHS"<< amountowe << endl;
    //cout <<"pay the amount you owe"<<endl;
   }
    balance=amountPaid-totalAmount;

   cout << endl;



   cout<< "Customer name: "<<customer_name<< endl;
   cout<< "the unique ID: "<<customerId<<endl;
   cout<< "item bought: "<<customer_needs<<endl;
   cout<< "quantity bought: "<<quantity<<endl;
   cout<< "vat amount: GHS "<<vat<<endl;
   cout<< "total cost: GHS "<<totalAmount<<endl;
   cout<< "total amount paid: "<<amountPaid<<endl;
   cout<< "balance: GHS "<< balance <<endl;












    return 0;
}
