#include "Room.hpp"
#include<iostream>
#include<iomanip>

Room::Room(std::string roomNumber, RoomType type, double pricePerNight, int capacity)
    : roomNumber(roomNumber), type(type), status(RoomStatus::AVAILABLE), 
      pricePerNight(pricePerNight), capacity(capacity) {}

std::string Room::getRoomNumber() const {return roomNumber;}

RoomType Room::getType() const {return type;}

RoomStatus Room::getStatus() const {return status;}

double Room::getPricePerNight() const {return pricePerNight;}

int Room::getCapacity() const {return capacity;}

void Room::setStatus(RoomStatus status)
{
    this->status=status;
}

void Room::displayInfo() const
{
    std::cout<<"Room: "<<roomNumber<<std::endl;
    std::cout<<"Type: ";
    switch(type)
    {
        case RoomType::STANDARD:
            std::cout<<"Standard"<<std::endl;
            break;
        case RoomType::DELUXE:
            std::cout<<"Deluxe"<<std::endl;
            break;
        case RoomType::SUITE:
            std::cout<<"Suite"<<std::endl;
            break;        
    }

    std::cout<<"Status: ";
    switch(status)
    {
        case RoomStatus::AVAILABLE:
            std::cout<<"Available"<<std::endl;
            break;
        case RoomStatus::OCCUPIED:
            std::cout<<"Occupied"<<std::endl;
            break;
        case RoomStatus::UNDER_MAINTENANCE:
            std::cout<<"Under Maintenance"<<std::endl;
    }

    std::cout<<"Price per night: Rs"<<std::fixed<<std::setprecision(2)<<pricePerNight<<std::endl;
    std::cout<<"Capacity: "<<capacity<<" persons"<<std::endl;
}

