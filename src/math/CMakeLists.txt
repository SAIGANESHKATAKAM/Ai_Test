add_library(mathutils STATIC add.cpp multiply.cpp)

target_include_directories(mathutils PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_compile_features(mathutils PUBLIC cxx_std_17)
