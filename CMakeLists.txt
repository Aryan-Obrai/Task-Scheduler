CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
SET(CXX_STANDARD_REQUIRED 17)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main
    main.cpp
    ./src/personal.cpp
    ./src/scheduler.cpp
    ./src/study.cpp
    ./src/task.cpp
    ./src/taskList.cpp
    ./src/work.cpp
    )

ADD_EXECUTABLE(test
    main.cpp 
    ./src/personal.cpp
    ./src/scheduler.cpp
    ./src/study.cpp
    ./src/task.cpp
    ./src/taskList.cpp
    ./src/work.cpp
    )


TARGET_LINK_LIBRARIES(test gtest
)
