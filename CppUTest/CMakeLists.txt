cmake_minimum_required (VERSION 2.8.9)
project (cpputest_example)
#set (BOOST_INCLUDEDIR /home/hpbiven/documents/third-party-libs/boost_1_61_0/)

find_package(BOOST REQUIRED)
find_package(CppUTest REQUIRED)

enable_testing()

add_executable(cpputest_ex tests/test.cpp tests/main.cpp)
#target_link_libraries(cpputest_ex CppUTest )
#target_link_libraries(cpputest_ex CppUTestExt )

target_link_libraries(  cpputest_ex ${CppUTest_LIBRARIES} )

# add_test(NAME FirstTest COMMAND cpputest_ex)
# add_test(NAME SecondTest COMMAND cpputest_ex)
add_test(NAME AllTest COMMAND cpputest_ex)
# add_test(cpputest_ex)
#enable_testing()

#These definitions are used when testing the Mercury board code
#add_definitions(-DSPU_BOARD -DSPU)
#
#add_subdirectory( ApplicationLayer ) 
#add_subdirectory( HardwareAbstractionLayer )
#add_subdirectory( VerticalLayer )
#add_subdirectory( MechanismLayer )

