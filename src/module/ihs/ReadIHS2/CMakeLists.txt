SET(HEADERS
)
SET(SOURCES
  ReadIHS2.cpp
)
covise_add_module(IO ReadIHS2 ${EXTRASOURCES} ${SOURCES} ${HEADERS})
target_link_libraries(ReadIHS2 coApi coAppl coCore)
