cmake_minimum_required(VERSION 3.16.0)
project(kdl_example)



find_package(orocos_kdl REQUIRED)




#link_directories(${orocos_kdl_INCLUDE_DIRS})
add_executable(${PROJECT_NAME}_executable kdl_try.cpp kuka_iiwa.cpp)

target_link_libraries(${PROJECT_NAME}_executable
       ${orocos_kdl_LIBRARIES}

)