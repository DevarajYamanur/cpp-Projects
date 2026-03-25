#include "Booking.hpp"
#include "Guest.hpp"
#include "Room.hpp"
#include<iostream>
#include<iomanip>

Booking::Booking(std::string bookId, Guest* guest, Room* room, 
    std::string checkInDate, std::string checkOutDate, int numberOfNights)
    : bookId(bookId), guest(guest), room(room), checkInDate(checkInDate), checkOutDate(checkOutDate),
      numberOfNights(numberOfNights), status(BookingStatus::CONFIRMED) 
    {
        calculateTotalAmount();
    }

std::string Booking::getBookingId() const {return bookId;}

Guest* Booking::getGuest() const {return guest;}

Room* Booking::getRoom() const {return room;}

std::string Booking::getCheckInDate() const {return checkInDate;}

std::string Booking::getCheckOutDate() const {return checkOutDate;}

int Booking::getNumberOfNights() const {return numberOfNights;}

double Booking::getTotalAmount() const {return totalAmount;}

BookingStatus Booking::getStatus() const {return status;}

void Booking::calculateTotalAmount()
{
    totalAmount = room->getPricePerNight() * numberOfNights;
}

void Booking::setStatus(BookingStatus status)
{
    this->status = status;
}

void Booking::displayInfo()
{
    std::cout<<"Booking Details:"<<std::endl;
    std::cout<<"Booking ID: "<<bookId<<std::endl;
    std::cout<<"Guest: "<<guest->getName()<<std::endl;
    std::cout<<"Room: "<<room->getRoomNumber()<<std::endl;
    std::cout<<"Check-in Date: "<<checkInDate<<std::endl;
    std::cout<<"Check-out Date: "<<checkOutDate<<std::endl;
    std::cout<<"Number of Nights: "<<numberOfNights<<std::endl;
    std::cout<<"Total Amount: Rs"<<std::fixed<<std::setprecision(2)<<totalAmount<<std::endl;
    std::cout<<"Status: ";
    switch(status)
    {
        case BookingStatus::CONFIRMED:
            std::cout<<"Confirmed"<<std::endl;
            break;

        case BookingStatus::CHECKED_IN:
            std::cout<<"Checked In"<<std::endl;
            break;
        
        case BookingStatus::CHECKED_OUT:
            std::cout<<"Checked Out"<<std::endl;
            break;

        case BookingStatus::CANCELLED:
            std::cout<<"Cancelled"<<std::endl;
            break;    
    }
}