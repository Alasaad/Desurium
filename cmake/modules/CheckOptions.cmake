###############################################################################
# global options
###############################################################################

set(BRANDING "branding_default"
    CACHE STRING "The branding to use for Desura.")
option(DEBUG "enable debug build" OFF)

###############################################################################
# unix-only options
###############################################################################

if(UNIX)
  option(WITH_ARES "build cURL with c-ares support" ON)
endif()

###############################################################################
# windows-only options
###############################################################################
