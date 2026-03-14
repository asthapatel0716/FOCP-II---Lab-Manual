#include<iostream>
using namespace std;
class MovieTicket
{
    string movieName;
    int seatNumber;
    float ticketPrice;
    bool isBooked;
public:
    MovieTicket();
    MovieTicket(string,int,float);
    void bookTicket();
    void cancelTicket();
    void displayTicketDetails();
    float calculateTotalcost(int);
};
MovieTicket::MovieTicket()
{
    movieName = "";
    seatNumber = 0;
    ticketPrice = 200;
    isBooked = false;
}
MovieTicket::MovieTicket(string a, int b, float c)
{
    movieName = a;
    seatNumber = b;
    ticketPrice = c;
    isBooked = false;   
}
void MovieTicket::bookTicket()
{
    if(!isBooked)
    {
        isBooked = true;
        cout << "\nTicket booked successfully.";
    }
    else
    {
        cout << "\nTicket is already booked.";
    }
}
void MovieTicket::cancelTicket()
{
    if(isBooked)
    {
        isBooked = false;
        cout << "\nTicket cancelled successfully.";
    }
    else
    {
        cout << "\nTicket is not booked.";
    }
}
void MovieTicket::displayTicketDetails()
{
    cout << "\nMovie Name: " << movieName;
    cout << "\nSeat Number: " << seatNumber;
    cout << "\nTicket Price: " << ticketPrice;

    if(isBooked)
        cout << "\nTicket Status: Booked";
    else
        cout << "\nTicket Status: Not Booked";
}
float MovieTicket::calculateTotalcost(int numberOfTickets)
{
    return numberOfTickets * ticketPrice;
}

int main()
{
    MovieTicket m1;
    m1.displayTicketDetails();
    MovieTicket m2("Border2", 24, 450);
    m2.displayTicketDetails();
    m1.bookTicket();
    m2.cancelTicket();
    cout << "\nTotal Cost: " << m1.calculateTotalcost(4) << endl;
    m1.displayTicketDetails();
    m2.displayTicketDetails();
    return 0;
}
