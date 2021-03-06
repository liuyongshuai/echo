PROJECT(echo)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.18)

set(CMAKE_CXX_FLAGS "-pipe -W -fPIC -Wno-deprecated -Wall -g -ggdb -std=c++11")

#如果libprotobuf是使用GCC 4.x或之前版本构建的，会有C++ ABI问题。
#从GCC 5.1开始, std::string 和 std::list 使用了新的C++11的ABI, 即使你显式指定使用老标准.
#参见：https://gcc.gnu.org/onlinedocs/libstdc++/manual/using_dual_abi.html
ADD_DEFINITIONS(-D_GLIBCXX_USE_CXX11_ABI=0)

#判断当前的gcc的版本号，以便判断是否支持-no-pie选项
EXECUTE_PROCESS(COMMAND gcc -dumpversion OUTPUT_VARIABLE tmpGVer1)
string(STRIP ${tmpGVer1} tmpGVer2)
SET(supportPIE "6")
string(SUBSTRING ${tmpGVer2} 0 1 tmpGVer3)
IF (tmpGVer3 STRGREATER supportPIE OR tmpGVer3 STREQUAL supportPIE)
    #gcc 6.0 之后就默认启用"--enable-default-pie",可以加上-no-pie 禁用掉
    #参考：https://blog.csdn.net/ivan240/article/details/5363395
    #参考：https://blog.csdn.net/cclethe/article/details/83387685
    #参考：https://blog.csdn.net/hanyulongseucas/article/details/87715186
    #参考：https://blog.csdn.net/softee/article/details/48064943
    SET(CMAKE_EXE_LINKER_FLAGS " -no-pie")
ENDIF ()

#源码目录
SET(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
MESSAGE(STATUS "SRC_DIR=" ${SRC_DIR})

#静态库目录
SET(THIRD_PARTY_DIR ${CMAKE_SOURCE_DIR}/third-party)
MESSAGE(STATUS "THIRD_PARTY_DIR=" ${THIRD_PARTY_DIR})

#utils
SET(UTILS_DIR ${SRC_DIR}/utils)
MESSAGE(STATUS "====>UTILS_DIR=" ${UTILS_DIR})
AUX_SOURCE_DIRECTORY(${UTILS_DIR} UTILS_SOURCE_LIST)
FOREACH (f ${UTILS_SOURCE_LIST})
    MESSAGE(STATUS "---->\t" ${f})
ENDFOREACH (${f})

#server
SET(SERVER_DIR ${SRC_DIR}/server)
MESSAGE(STATUS "====>SERVER_DIR=" ${SERVER_DIR})
AUX_SOURCE_DIRECTORY(${SERVER_DIR} SERVER_SOURCE_LIST)
FOREACH (f ${SERVER_SOURCE_LIST})
    MESSAGE(STATUS "---->\t" ${f})
ENDFOREACH (${f})

#client
SET(CLIENT_DIR ${SRC_DIR}/client)
MESSAGE(STATUS "====>CLIENT_DIR=" ${CLIENT_DIR})
AUX_SOURCE_DIRECTORY(${CLIENT_DIR} CLIENT_SOURCE_LIST)
FOREACH (f ${CLIENT_SOURCE_LIST})
    MESSAGE(STATUS "---->\t" ${f})
ENDFOREACH (${f})

#proto
SET(PROTO_DIR ${CMAKE_SOURCE_DIR}/proto/include/proto)
MESSAGE(STATUS "====>PROTO_DIR=" ${PROTO_DIR})
AUX_SOURCE_DIRECTORY(${PROTO_DIR} PROTO_SOURCE_LIST)
FOREACH (f ${PROTO_SOURCE_LIST})
    MESSAGE(STATUS "---->\t" ${f})
ENDFOREACH (${f})

#不管用不用得着，所有的源文件
SET(SERVER_BIN_SOURCE_LIST ${SERVER_SOURCE_LIST} ${UTILS_SOURCE_LIST} ${PROTO_SOURCE_LIST})
SET(CLIENT_BIN_SOURCE_LIST ${CLIENT_SOURCE_LIST} ${UTILS_SOURCE_LIST} ${PROTO_SOURCE_LIST})


#第三方库头文件及库文件设置，下面列出的静态库，不管用不用得着，先编进去再说
SET(ECHO_INCLUDE_LIST)
SET(ECHO_LIBRARY_LIST)
LIST(APPEND ECHO_INCLUDE_LIST ${CMAKE_SOURCE_DIR}/proto/include)

#boost
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/boost/include)
FILE(GLOB boostLibs "${THIRD_PARTY_DIR}/boost/lib/libboost*.a")
LIST(APPEND ECHO_LIBRARY_LIST ${boostLibs})
FOREACH (bl ${boostLibs})
    MESSAGE(STATUS "find ${bl}")
ENDFOREACH ()

#readline
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/readline/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/readline/lib/libhistory.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/readline/lib/libreadline.a)

#ncurses
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/ncurses/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libform.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libform_g.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libmenu.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libmenu_g.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libncurses.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libncurses++.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libncurses_g.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libncurses++_g.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libpanel.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/ncurses/lib/libpanel_g.a)

#curl
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/curl/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/curl/lib/libcurl.a)

#openssl
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/openssl/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/openssl/lib/libssl.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/openssl/lib/libcrypto.a)

#gmock
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/gmock/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/gmock/lib/libgmock.a)

#gtest
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/gtest/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/gtest/lib/libgtest.a)

#hiredis
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/hiredis/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/hiredis/lib/libhiredis.a)

#libevent
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/libevent/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/libevent/lib/libevent.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/libevent/lib/libevent_core.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/libevent/lib/libevent_extra.a)

#log4cplus
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/log4cplus/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/log4cplus/lib/liblog4cplus.a)

#mysql
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/mysql/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/mysql/lib/libmysqlclient.a)

#pcre
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/pcre/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/pcre/lib/libpcre.a)

#protobuf
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/protobuf/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/protobuf/lib/libprotobuf.a)

#thrift
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/thrift/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/thrift/lib/libthrift.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/thrift/lib/libthrift_c_glib.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/thrift/lib/libthriftnb.a)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/thrift/lib/libthriftz.a)

#uuid
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/uuid/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/uuid/lib/libuuid.a)

#yaml-cpp
LIST(APPEND ECHO_INCLUDE_LIST ${THIRD_PARTY_DIR}/yaml-cpp/include)
LIST(APPEND ECHO_LIBRARY_LIST ${THIRD_PARTY_DIR}/yaml-cpp/lib/libyaml-cpp.a)

#设置头目录
INCLUDE_DIRECTORIES(BEFORE ${ECHO_INCLUDE_LIST})

#一些比较基础的动态库
LIST(APPEND ECHO_LIBRARY_LIST pthread z dl m)

#客户端二进制文件
ADD_EXECUTABLE(client ${CLIENT_DIR}/client.cpp ${CLIENT_BIN_SOURCE_LIST})
#跟上面的一堆动态、静态库链接起来
TARGET_LINK_LIBRARIES(client ${ECHO_LIBRARY_LIST})

#服务端二进制文件
ADD_EXECUTABLE(server ${SERVER_DIR}/server.cpp ${SERVER_BIN_SOURCE_LIST})
#跟上面的一堆动态、静态库链接起来
TARGET_LINK_LIBRARIES(server ${ECHO_LIBRARY_LIST})
