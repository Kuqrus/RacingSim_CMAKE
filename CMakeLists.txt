cmake_minimum_required (VERSION 3.22.0)
project (RacingSim)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(CPP_EXE RacingSim.cpp userInputs.cpp registration.cpp race.cpp)
set(H_EXE  userInputs.h registration.h race.h)

add_executable(startRace ${CPP_EXE} ${H_EXE})

set(CPP_FILES participants.cpp vehiclesMain.cpp vehiclesLand.cpp vehiclesAir.cpp )
set(H_FILES participants.h vehiclesMain.h vehiclesLand.h vehiclesAir.h)

add_library(dynamicLib SHARED ${CPP_FILES} ${H_FILES})

target_link_libraries(startRace dynamicLib)