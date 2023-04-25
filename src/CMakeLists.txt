project(inlinemsig)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( inlinemsig inlinemsig inlinemsig.cpp )
target_include_directories( inlinemsig PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( inlinemsig ${CMAKE_SOURCE_DIR}/../ricardian )