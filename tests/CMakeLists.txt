include(FetchContent)

FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(test_math test_math.cpp)
target_include_directories(test_math PRIVATE ${PROJECT_INCLUDE_DIR})
target_link_libraries(test_math PRIVATE mathutils GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(test_math)
