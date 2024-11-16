
add_library(TrainingLib TrainingLib.cpp)
target_include_directories(TrainingLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(Training main.cpp)
target_link_libraries(Training PRIVATE TrainingLib)
