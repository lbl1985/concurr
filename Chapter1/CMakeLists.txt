set(list
	p1_1.cpp
)

foreach(item ${list})
	list(APPEND CONCURR_CHAPTER1_SRC ${CMAKE_CURRENT_SOURCE_DIR}/${item})
endforeach()

set(CONCURR_CHAPTER1_SRC ${CONCURR_CHAPTER1_SRC} PARENT_SCOPE)