add_library(mathutils STATIC add.cpp multiply.cpp)
target_include_directories(mathutils PUBLIC ${PROJECT_INCLUDE_DIR})
target_compile_features(mathutils PUBLIC cxx_std_17)
