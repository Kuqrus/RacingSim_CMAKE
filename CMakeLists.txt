cmake_minimum_required (VERSION 3.22.0)
project (RacingSim)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(startRace RacingSim.cpp)

set(CPP_FILES participants.cpp vehiclesMain.cpp vehiclesLand.cpp vehiclesAir.cpp userInputs.cpp registration.cpp race.cpp)
set(H_FILES participants.h vehiclesMain.h vehiclesLand.h vehiclesAir.h userInputs.h registration.h race.h)

add_library(dynamicLib SHARED ${CPP_FILES} ${H_FILES})

target_link_libraries(startRace dynamicLib)