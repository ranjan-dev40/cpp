#include<bits/stdc++.h>
#include <cstdlib>
#include <ctime>


using namespace std;


bool isSuccess()
{
    //Sending is done with the probablity.
    //Currently probablity of successful send is 3/4
    return rand()%4;
}


void displaylist(vector<int> &v)
{
    for (auto i : v) {cout<<i<<" ";}
    cout<<"\n";
}


void sendFrameWithProb(int a, int &b, int i, queue<int> &ack)
{
    //a is sender, b is receiver
    if (isSuccess())
    {
        b = a;


        ack.push(i);
    }
}


void selectiveRepeatARQ(vector<int> senderlist, vector<int> &receiverlist, int windowSize)
{
    cout<<"0 means correct data is there at that place, 1 means incorrect/no data is at that place.\n\n";
    cout<<"Sender list : "; displaylist(senderlist); cout<<"\n\n";


    queue<int> ack;


    for (int i = 0; i < windowSize; i++)
    {
        sendFrameWithProb(senderlist[i], receiverlist[i], i, ack);
    }


    cout<<"Rec. list : "; displaylist(receiverlist);
    cout<<"Next Acknowledgement at index = "<< ((ack.size() != 0) ? ack.front() : -1) <<"\n\n";
    int i = 0, j = windowSize;


    while (j < senderlist.size())
    {
        if (ack.front() == i)
        {
            cout<<"ack found\n";
            sendFrameWithProb(senderlist[j], receiverlist[j], j, ack);
                        ack.pop();
        }
        else
        {
            cout<<"ack not found\n";
            receiverlist[i] = senderlist[i]; //Frame will be sent eventually.
        }


        cout<<"Rec. list : "; displaylist(receiverlist);
        cout<<"Next Acknowledgement at index = "<< ((ack.size() != 0) ? ack.front() : -1) <<"\n\n";
        // printQueue(ack);  cout<<"\n";


        i++; j++;
    }


    while (i < senderlist.size())
    {
        if (ack.front() != i)
        {
            cout<<"ack not found\n";
            receiverlist[i] = senderlist[i]; //Frame will be sent eventually.


            cout<<"Rec. list : "; displaylist(receiverlist);
            cout<<"Next Acknowledgement at index = "<< ((ack.size() != 0) ? ack.front() : -1) <<"\n\n";
            // printQueue(ack);  cout<<"\n";
        }
        else
        {

            ack.pop();


            cout<<"ack found\n";
            cout<<"Rec. list : "; displaylist(receiverlist);


            cout<<"Next Acknowledgement at index = "<< ((ack.size() != 0) ? ack.front() : -1) <<"\n\n";
            // printQueue(ack);  cout<<"\n";
        }


        i++;
    }
}


int main()
{
    srand(static_cast<unsigned int>(std::time(nullptr)));


    int n = 2; //bit field size
    int windowSize = pow(2, n); //for both sender and receiver


    cout<<"Window size is : "<<windowSize<<"\n\n";


    vector<int> senderlist(windowSize*2, 1); //suppose it is thrice of window size
    vector<int> receiverlist(windowSize*2, 0);


    selectiveRepeatARQ(senderlist, receiverlist, windowSize);


    return 0;
}