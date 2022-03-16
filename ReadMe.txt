Сравнение C++, LUA и Python

Результат с оптимизацией (O3) и без (O0):

Run SPEED_TEST O0
[==========] Running 8 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 8 tests from SPEEDTEST
[ RUN      ] SPEEDTEST.Cpp_for10kin10k
[       OK ] SPEEDTEST.Cpp_for10kin10k (255 ms)
[ RUN      ] SPEEDTEST.Cpp_2in4000
[       OK ] SPEEDTEST.Cpp_2in4000 (137 ms)
[ RUN      ] SPEEDTEST.Lua_init
[       OK ] SPEEDTEST.Lua_init (0 ms)
[ RUN      ] SPEEDTEST.Lua_for10kin10k
[       OK ] SPEEDTEST.Lua_for10kin10k (9046 ms)
[ RUN      ] SPEEDTEST.Lua_2in4000
[       OK ] SPEEDTEST.Lua_2in4000 (2373 ms)
[ RUN      ] SPEEDTEST.Python_init
[       OK ] SPEEDTEST.Python_init (25 ms)
[ RUN      ] SPEEDTEST.Python_for10kin10k
[       OK ] SPEEDTEST.Python_for10kin10k (19426 ms)
[ RUN      ] SPEEDTEST.Python_2in4000
[       OK ] SPEEDTEST.Python_2in4000 (4290 ms)
[----------] 8 tests from SPEEDTEST (35552 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 1 test suite ran. (35552 ms total)
[  PASSED  ] 8 tests.
Run SPEED_TEST O3
[==========] Running 8 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 8 tests from SPEEDTEST
[ RUN      ] SPEEDTEST.Cpp_for10kin10k
[       OK ] SPEEDTEST.Cpp_for10kin10k (0 ms)
[ RUN      ] SPEEDTEST.Cpp_2in4000
[       OK ] SPEEDTEST.Cpp_2in4000 (30 ms)
[ RUN      ] SPEEDTEST.Lua_init
[       OK ] SPEEDTEST.Lua_init (0 ms)
[ RUN      ] SPEEDTEST.Lua_for10kin10k
[       OK ] SPEEDTEST.Lua_for10kin10k (3864 ms)
[ RUN      ] SPEEDTEST.Lua_2in4000
[       OK ] SPEEDTEST.Lua_2in4000 (1095 ms)
[ RUN      ] SPEEDTEST.Python_init
[       OK ] SPEEDTEST.Python_init (25 ms)
[ RUN      ] SPEEDTEST.Python_for10kin10k
[       OK ] SPEEDTEST.Python_for10kin10k (23241 ms)
[ RUN      ] SPEEDTEST.Python_2in4000
[       OK ] SPEEDTEST.Python_2in4000 (4857 ms)
[----------] 8 tests from SPEEDTEST (33112 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 1 test suite ran. (33112 ms total)
[  PASSED  ] 8 tests.

