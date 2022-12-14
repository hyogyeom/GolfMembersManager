cmake_minimum_required(VERSION 3.0.0)

project(rfid)

add_executable(${PROJECT_NAME}
    ./src/main.cpp
    ./src/GolfMembershipManager.cpp
    ./src/app/Listener/Listener.cpp
    ./src/app/Controller/Controller.cpp
    ./src/app/Entity/MembersEntity.cpp
    ./src/hw/rfid/mfrc522.cpp
    ./src/hw/spi/SPI.cpp
    ./src/hw/Monitor/Monitor.cpp
    ./src/hw/rfid/CardReader.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ./src
    ./src/app/Controller
    ./src/app/Listener
    ./src/app/Model
    ./src/app/Entity
    ./src/hw/Monitor
    ./src/hw/rfid
    ./src/hw/spi
)

target_compile_options(${PROJECT_NAME} PUBLIC
    -Wall
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    -lwiringPi
)