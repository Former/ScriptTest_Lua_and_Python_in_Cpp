cmake_minimum_required(VERSION 3.10)
project(Script_Speed_Test_Cpp_Lua_Python
    DESCRIPTION "Script_Speed_Test_Cpp_Lua_Python project"
)

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

set(INSTALL_DIR "${CMAKE_BINARY_DIR}/bin")
set(BIN_DIR "${CMAKE_BINARY_DIR}/")
set(OPTIMIZE_COMPILE_OPTIONO0 -O0)
set(OPTIMIZE_COMPILE_OPTIONO3 -O3)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gtest)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/luascript)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/luascript/lua)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/gtest/gtest-all.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/luascript/luascript.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/luascript/luascript_unittest.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/luascript/lua/all.c
    ${CMAKE_CURRENT_SOURCE_DIR}/SPEED_TEST/speedtest_cpp.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SPEED_TEST/speedtest_lua.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SPEED_TEST/speedtest_python.cpp
    )

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_STANDARD 11)

# enable_testing()

# O0
add_executable(Script_TestO0 
    ${SOURCES}
    Script_Test.cpp
    )
target_link_libraries(Script_TestO0 pthread m ${PYTHON_LIBRARIES})
target_compile_definitions(Script_TestO0 PRIVATE SPEED_TEST)
target_compile_options(Script_TestO0 PRIVATE ${OPTIMIZE_COMPILE_OPTIONO0})

# add_test(run_SPEED_TEST_O0 ${BIN_DIR}Script_TestO0)

# O3
add_executable(Script_TestO3 
    ${SOURCES}
    Script_Test.cpp
    )
target_link_libraries(Script_TestO3 pthread m ${PYTHON_LIBRARIES})
target_compile_definitions(Script_TestO3 PRIVATE SPEED_TEST)
target_compile_options(Script_TestO3 PRIVATE ${OPTIMIZE_COMPILE_OPTIONO3})

# add_test(run_SPEED_TEST_O3 ${BIN_DIR}Script_TestO3)
