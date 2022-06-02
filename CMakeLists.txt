CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CXX_STANDARD_REQUIRED 17)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main
    main.cpp
    )

ADD_EXECUTABLE(test 
    ./tests/unit_test.cpp
    )


TARGET_LINK_LIBRARIES(test gtest
)
