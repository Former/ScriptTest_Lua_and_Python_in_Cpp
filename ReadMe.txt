Сравнение C++, LUA и Python

Результат с оптимизацией (O3) и без (O0):

Run SPEED_TEST O0
[==========] Running 8 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 8 tests from SPEEDTEST
[ RUN      ] SPEEDTEST.Cpp_for10kin10k
[       OK ] SPEEDTEST.Cpp_for10kin10k (259 ms)
[ RUN      ] SPEEDTEST.Cpp_2in4000
[       OK ] SPEEDTEST.Cpp_2in4000 (140 ms)
[ RUN      ] SPEEDTEST.Lua_init
[       OK ] SPEEDTEST.Lua_init (0 ms)
[ RUN      ] SPEEDTEST.Lua_for10kin10k
[       OK ] SPEEDTEST.Lua_for10kin10k (8791 ms)
[ RUN      ] SPEEDTEST.Lua_2in4000
[       OK ] SPEEDTEST.Lua_2in4000 (2399 ms)
[ RUN      ] SPEEDTEST.Python_init
[       OK ] SPEEDTEST.Python_init (27 ms)
[ RUN      ] SPEEDTEST.Python_for10kin10k
[       OK ] SPEEDTEST.Python_for10kin10k (21241 ms)
[ RUN      ] SPEEDTEST.Python_2in4000
[       OK ] SPEEDTEST.Python_2in4000 (4648 ms)
[----------] 8 tests from SPEEDTEST (37505 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 1 test suite ran. (37505 ms total)
[  PASSED  ] 8 tests.
Run SPEED_TEST O3
[==========] Running 8 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 8 tests from SPEEDTEST
[ RUN      ] SPEEDTEST.Cpp_for10kin10k
[       OK ] SPEEDTEST.Cpp_for10kin10k (0 ms)
[ RUN      ] SPEEDTEST.Cpp_2in4000
[       OK ] SPEEDTEST.Cpp_2in4000 (32 ms)
[ RUN      ] SPEEDTEST.Lua_init
[       OK ] SPEEDTEST.Lua_init (0 ms)
[ RUN      ] SPEEDTEST.Lua_for10kin10k
[       OK ] SPEEDTEST.Lua_for10kin10k (3988 ms)
[ RUN      ] SPEEDTEST.Lua_2in4000
[       OK ] SPEEDTEST.Lua_2in4000 (1125 ms)
[ RUN      ] SPEEDTEST.Python_init
[       OK ] SPEEDTEST.Python_init (28 ms)
[ RUN      ] SPEEDTEST.Python_for10kin10k
[       OK ] SPEEDTEST.Python_for10kin10k (21664 ms)
[ RUN      ] SPEEDTEST.Python_2in4000
[       OK ] SPEEDTEST.Python_2in4000 (4581 ms)
[----------] 8 tests from SPEEDTEST (31419 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 1 test suite ran. (31419 ms total)
[  PASSED  ] 8 tests.


