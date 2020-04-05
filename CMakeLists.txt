cmake_minimum_required(VERSION 3.16)
project(AG_Practice C)

set(CMAKE_C_STANDARD 99)

add_executable(LinkStack "LinkStack/main.c" "LinkStack/LinkStack.c" "LinkStack/L.h")

add_executable(SeqQueue "SeqQueue/main.c" "SeqQueue/SeqQueue.c" SeqQueue/SeqQueue.h)

add_executable(NearMatch NearMatch/main.c "NearMatch/LS.h" "NearMatch/LS.c")

add_executable(Infixexpression "Infixexpression/main.c" Infixexpression/Ls.c Infixexpression/Ls.h)

add_executable(InAnswer "InfixexpressionAnswer/L.c" "InfixexpressionAnswer/main.c")