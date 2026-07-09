add_executable(pipeline_app main.cpp)
target_include_directories(pipeline_app PRIVATE ${PROJECT_INCLUDE_DIR})
target_link_libraries(pipeline_app PRIVATE mathutils utils)
