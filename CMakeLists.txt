cmake_minimum_required(VERSION 3.14)
project(3307)

set(CMAKE_CXX_STANDARD 98)

add_executable(3307 RestaurantFactory.cpp RestaurantFactory.h Food.cpp Food.h Table.cpp Table.h Restaurant.cpp Restaurant.h FoodFactory.cpp FoodFactory.h TableFactory.cpp TableFactory.h Customer.cpp Customer.h CustomerFactory.cpp CustomerFactory.h Membership.cpp Membership.h)