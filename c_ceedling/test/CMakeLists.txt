set(TEST_NAME sample_test_unity)
add_compile_definitions(TEST=true)
include(FetchContent)
set(SOURCE_FILES test_powerbank.c)

FetchContent_Declare(
        Unity
        GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
        GIT_TAG        v2.5.2
)
set(UNITY_EXTENSION_FIXTURE ON CACHE BOOL "Enable Unity Fixture Extension")
set(UNITY_EXTENSION_MEMORY  ON CACHE BOOL "Enable Unity Memory Extension")
FetchContent_MakeAvailable(Unity)

add_executable(${TEST_NAME} test_powerbank.c)
target_link_libraries(${TEST_NAME} src unity)
add_test(test_unity ${TEST_NAME})
