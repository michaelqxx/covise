SET(HEADERS
   Lib/DTrackDataTypes.h
   Lib/DTrackNet.h
   DTrackSDK.hpp
   DTrackDriver.h
)

SET(SOURCES
   Lib/DTrackNet.cpp
   Lib/DTrackParse.cpp
   Lib/DTrackParser.cpp
   DTrackSDK.cpp
   DTrackDriver.cpp
)

cover_add_plugin(input_dtrack)
