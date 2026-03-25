# Hotel Management System (C++)

A C++ based Hotel Management System that handles guests, room allocations, bookings, and check-in/out workflows.

## 🚀 Features
- **Guest Management**: Register and track guest details.
- **Room Management**: Support for multiple room types (Standard, Deluxe, Suite).
- **Booking System**: Create, confirm, and track bookings.
- **Stay Cycles**: Full check-in and check-out logic.
- **Booking History**: Track all previous stays for a specific guest.

## 🛠️ Compilation
To compile and run the project locally (using g++):
```powershell
g++ Booking.cpp Guest.cpp HotelDemo.cpp HotelManager.cpp Room.cpp -o hotel.exe
.\hotel.exe
```

## 📂 Project Structure
- `Booking.hpp/cpp`: Logic for managing room reservations.
- `Guest.hpp/cpp`: Guest profile management.
- `Room.hpp/cpp`: Room properties and availability status.
- `HotelManager.hpp/cpp`: Central system to coordinate interactions.
- `HotelDemo.cpp`: Entry point for testing the system.
