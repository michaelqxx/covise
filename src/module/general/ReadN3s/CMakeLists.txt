SET(HEADERS
  
)

SET(SOURCES
  ReadN3s.cpp
)

SET(EXTRASOURCES
  ReadN3s.h
)

ADD_COVISE_MODULE(IO ReadN3s ${EXTRASOURCES} )
TARGET_LINK_LIBRARIES(ReadN3s  coApi coAppl coCore )

COVISE_INSTALL_TARGET(ReadN3s)
