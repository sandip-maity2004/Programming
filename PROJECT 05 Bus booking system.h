//
// Created by 12san on 23-07-2024.
//

#ifndef INTRODUCTION_TO_PROGRAMMING_PROJECT_05_BUS_BOOKING_SYSTEM_H
#define INTRODUCTION_TO_PROGRAMMING_PROJECT_05_BUS_BOOKING_SYSTEM_H

#endif //INTRODUCTION_TO_PROGRAMMING_PROJECT_05_BUS_BOOKING_SYSTEM_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//structure to store bus information

struct Bus {
    int busNumber;
    char Source[50];
    char destination[50];
    int totalSeats;
    int availableSeats;
    float fare;
};

//structure to store passenger information

struct Passenger {
    char name[50];
    int age;
    int seatNumber;
    int busNumber;
};

//structure to store username & password

struct User{
    char username[50];
    char password[50];
};

//function to display Menu

void displayMenu(){
    printf("....Welcome to Bus Reservation system....");
    printf("1. login\n");
    printf("2. exit\n");
    printf("Please choose the option:\n");
}

//function to display the user or Main menu

void displayMainMenu(){
    printf("....Red Bus Main Menu....\n");
    printf("1. Book a Ticket\n");
    printf("2. cancel a Ticket\n");
    printf("3. Check Bus Status\n");
    printf("4. Logout\n");
    printf("Enter your choose from the given options:\n");
}

//function to perform user login
int LoginUser(struct User users[],int numUsers,char username[],char password[]){
    for(int i=0;i<numUsers;i++){
        if(strcmp(users[i].username,username)==0 && strcmp(users[i].password,password)==0){           //strcmp for string comparison
    return i;   //return the index of login user
}
    }
    return -1;

}

//function to book a ticket

void bookTicket(struct Bus buses[],int numBuses,struct Passenger passengers[],int* numPassengers,int userId){
    printf("Enter Bus Number:\n");
    int busNumber;
    scanf("%d",&busNumber);

    //find the bus with the bus number
    int busIndex=-1;
    for(int i=0;i<numBuses;i++){
        if(buses[i].busNumber==busNumber){
    busIndex=i;
    break;
}
    }
    if(busIndex==-1){
        printf("Bus with Bus number %d not found:\n",busNumber);
    }else if(buses[busIndex].availableSeats==0){
        printf("Sorry! the bus is fully booked.\n");
    }else{
        printf("Enter passenger name:\n");
        scanf("%s",passengers[*numPassengers].name);
        printf("Enter Passenger Age:\n");
        scanf("%d",&passengers[*numPassengers].age);

        //assign a seat(seatNumber) to the passenger
        passengers[*numPassengers].seatNumber=buses[busIndex].availableSeats+1;  //here busIndex is -1 so -1+1=0 so one person fill a seat at 0 index update available index

        //update available seats
        buses[busIndex].availableSeats--;
        printf("Ticked booked successfully\n");
        (*numPassengers)++;    //also update the booked number of passengers
    }
}

//function to cancel a ticket
void cancelTicket(struct Bus buses[],struct Passenger passengers[],int numBuses,int userId,int* numPassengers){
    printf("Enter passenger name:\n");
    char name[50];
    scanf("%s",name);
    int found=0;
    for(int i=0;i<*numPassengers;i++){
        if(strcmp(passengers[*numPassengers].name,name)==0 && passengers[*numPassengers].busNumber==buses[userId].busNumber){

            //increase available seats
            int busIndex=-1;
            for(int j=0;j<numBuses;j++){
                if(buses[j].busNumber==passengers[j].busNumber){
                    busIndex=j;
                    break;
                }
            }
            buses[busIndex].availableSeats++; //busIndex=-1 so current value is 0,  0+(-1)=-1

            //remove the passenger entry
            for(int j=){

            }

        }

    }
}