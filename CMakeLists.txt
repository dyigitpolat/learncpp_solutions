# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# project name
project(learncpp)

# creates the variable EXEC as executable name
set(EXEC learncpp)

# set the C++ standard
set(CMAKE_CXX_STANDARD 20)

# /include as directory
include_directories(include)

# puts all .cpp files inside src to the SOURCES variable
file(GLOB SOURCES src/*.cpp)

# library folders
# add_subdirectory(lib/A_LIB_DIR)
# add_subdirectory(lib/A_LIB_DIR)

# enable all warnings and treat them as errors in a portable way
if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})

# link libraries
# target_link_libraries(${EXEC} A_LIB)
# target_link_libraries(${EXEC} A_LIB)