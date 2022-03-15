cmake_minimum_required(VERSION 3.10)
project(Script_Test
    DESCRIPTION "Script_Test project"
)

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

set(INSTALL_DIR "${CMAKE_BINARY_DIR}/bin")
# set(OPTIMIZE_COMPILE_OPTION -O3)

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

# 16 bit
add_executable(Script_Test 
    ${SOURCES}
    Script_Test.cpp
    )
target_link_libraries(Script_Test pthread m ${PYTHON_LIBRARIES})
target_compile_definitions(Script_Test PRIVATE SPEED_TEST)

# target_compile_definitions(lc3sim_c16trace PRIVATE LC3_16BIT TRACE)

#add_library(liblc3sim_c16 STATIC 
#    ${SOURCES}
#    )
#SetOptionts(liblc3sim_c16 LC3_16BIT)
