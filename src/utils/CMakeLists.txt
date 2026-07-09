add_library(utils STATIC logger.cpp)
target_include_directories(utils PUBLIC ${PROJECT_INCLUDE_DIR})
target_compile_features(utils PUBLIC cxx_std_17)
