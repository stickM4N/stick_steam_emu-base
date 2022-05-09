cmake_minimum_required(VERSION 3.16)

project(stick_steam_emu-base
        VERSION 0.0.0.0
        DESCRIPTION "Steam-free base implementation of steam_api shared object."
        LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 11)


add_subdirectory("third_party/fmt" EXCLUDE_FROM_ALL)
add_subdirectory("third_party/simdjson" EXCLUDE_FROM_ALL)

if (NOT WIN32)
    target_compile_options(fmt PRIVATE -fPIC)
    target_compile_options(simdjson PRIVATE -fPIC)
endif()



add_library(steam_api SHARED
        "source/library.hpp"        "source/library.cpp")

target_compile_definitions(steam_api PUBLIC
        "STEAM_API_EXPORTS"
        "SIMDJSON_EXCEPTIONS")

target_include_directories(steam_api PUBLIC
        "include/")

target_sources(steam_api PRIVATE
        # Header                                            # Implementation
        "source/logger/logger.hpp"                          "source/logger/logger.cpp"

        "source/common.hpp"                                 "source/common.cpp"

        "source/interfaces/AppList.hpp"                     "source/interfaces/AppList.cpp"
        "source/interfaces/Apps.hpp"                        "source/interfaces/Apps.cpp"
        "source/interfaces/AppTicket.hpp"                   "source/interfaces/AppTicket.cpp"
        "source/interfaces/Client.hpp"                      "source/interfaces/Client.cpp"
        "source/interfaces/Controller.hpp"                  "source/interfaces/Controller.cpp"
        "source/interfaces/Friends.hpp"                     "source/interfaces/Friends.cpp"
        "source/interfaces/GameCoordinator.hpp"             "source/interfaces/GameCoordinator.cpp"
        "source/interfaces/GameServer.hpp"                  "source/interfaces/GameServer.cpp"
        "source/interfaces/GameServerStats.hpp"             "source/interfaces/GameServerStats.cpp"
        "source/interfaces/HTMLSurface.hpp"                 "source/interfaces/HTMLSurface.cpp"
        "source/interfaces/HTTP.hpp"                        "source/interfaces/HTTP.cpp"
        "source/interfaces/Input.hpp"                       "source/interfaces/Input.cpp"
        "source/interfaces/Inventory.hpp"                   "source/interfaces/Inventory.cpp"
        "source/interfaces/Matchmaking.hpp"                 "source/interfaces/Matchmaking.cpp"
        "source/interfaces/Music.hpp"                       "source/interfaces/Music.cpp"
        "source/interfaces/MusicRemote.hpp"                 "source/interfaces/MusicRemote.cpp"
        "source/interfaces/Networking.hpp"                  "source/interfaces/Networking.cpp"
        "source/interfaces/NetworkingMessages.hpp"          "source/interfaces/NetworkingMessages.cpp"
        "source/interfaces/NetworkingSockets.hpp"           "source/interfaces/NetworkingSockets.cpp"
        "source/interfaces/NetworkingUtils.hpp"             "source/interfaces/NetworkingUtils.cpp"
        "source/interfaces/ParentalSettings.hpp"            "source/interfaces/ParentalSettings.cpp"
        "source/interfaces/RemotePlay.hpp"                  "source/interfaces/RemotePlay.cpp"
        "source/interfaces/RemoteStorage.hpp"               "source/interfaces/RemoteStorage.cpp"
        "source/interfaces/Screenshots.hpp"                 "source/interfaces/Screenshots.cpp"
        "source/interfaces/UGC.hpp"                         "source/interfaces/UGC.cpp"
        "source/interfaces/User.hpp"                        "source/interfaces/User.cpp"
        "source/interfaces/UserStats.hpp"                   "source/interfaces/UserStats.cpp"
        "source/interfaces/Utils.hpp"                       "source/interfaces/Utils.cpp"
        "source/interfaces/Video.hpp"                       "source/interfaces/Video.cpp"

        "include/steamworks_sdk/steam_api.h"                "source/steam_api.cpp"
        "include/steamworks_sdk/steam_api_flat.h"           "source/steam_api_flat.cpp"
        "include/steamworks_sdk/steam_api_internal.h"       "source/steam_api_internal.cpp"
        "include/steamworks_sdk/steam_gameserver.h"         "source/steam_gameserver.cpp"
        "include/steamworks_sdk/steamencryptedappticket.h"  "source/steam_encrypted_app_ticket.cpp")

if (WIN32)
    target_compile_definitions(steam_api PUBLIC
            "_CRT_SECURE_NO_WARNINGS")

    if (MSVC)
        target_precompile_headers(steam_api PRIVATE
                <ciso646>)
    endif ()
endif()

target_link_libraries(steam_api PRIVATE
        fmt::fmt
        simdjson::simdjson)
