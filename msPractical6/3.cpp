
  // Hame service time ko bound karna hai

  #include <iostream>
#include <vector>
#include <random>

using namespace std;

struct Customer {
    double arrival_time; 
    double service_time; 
    double departure_time;
};

int main() {
    const int num_customers = 50;
    const double lambda = 0.5; 
    const double mu = 1.0;
    int no_of_customer = 3;

    random_device rd;
    mt19937 gen(rd());
    exponential_distribution<> inter_arrival_dist(lambda);
    exponential_distribution<> service_dist(mu);

    vector<Customer> customers(num_customers);
    double clock = 0.0;
    
    double inter_arrival_time = inter_arrival_dist(gen);
    double service_time = 5;
    clock += inter_arrival_time;
    customers[0].arrival_time = clock;
    customers[0].service_time = service_time;
    customers[0].departure_time = clock + service_time;

    for (int i = 1; i < num_customers; ++i) {
        double inter_arrival_time = inter_arrival_dist(gen);
        double service_time = 5;
        clock += inter_arrival_time;
        customers[i].arrival_time = clock;
        customers[i].service_time = service_time;
        customers[i].departure_time = max(customers[i-1].departure_time,customers[i].arrival_time) + service_time;
    }

    for (const auto& customer : customers) {
        cout << "Arrival time: " << customer.arrival_time 
                  << ", Service time: " << customer.service_time 
                  << ", Departure time: " << customer.departure_time << endl;
    }

    return 0;
}

  



