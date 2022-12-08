#include<iostream>
using namespace std;

class complex {
    private:
    float real,img;

    public:
    complex() {
        real=0;
        img=0;
    }
    friend ostream &operator<<(ostream &output, complex &D) {
        output<<D.real<<"+"<<D.img<<"i\n";
        return output;
    }
    friend istream &operator>>(istream &input, complex &D) {
        cout<<"Enter the real part";
        input>>D.real;
        cout<<"Enter the imaginary part";
        input>>D.img;
        return input;
    }
    complex operator +(complex &num2) {
        complex a;
        a.real=real+num2.real;
        a.img=img+num2.img;
        return a;
    }
    complex operator -(complex &num2) {
        complex a;
        a.real=real-num2.real;
        a.img=img-num2.img;
        return a;
    }
    complex operator *(complex &num2) {
        complex a;
        a.real=(real*num2.real)-(img*num2.img);
        a.img=(real*num2.img)+(img*num2.real);
        return a;
    }
};
int main() {
    complex x,y,add,sub,mul;
    cin>>x;
    cin>>y;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication";
    cout<<"which operation do you want to perform?";
    int ch;
    cin>>ch;
    while(true) {
        switch(ch) {
            case 1:
            add=x+y;
            cout<<"The addition of two numbers is: "<<add;
            break;

            case 2:
            sub=x-y;
            cout<<"The subtraction of two numbers is: "<<sub;
            break;

            case 3:
            mul=x*y;
            cout<<"The multiplication of two numbers is: "<<mul;
            break;

            default:
            cout<<"invalid choice";
            break;
        }
    return 0;
    }
}