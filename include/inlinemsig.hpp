#include <eosio/eosio.hpp>
#include <eosio/transaction.hpp>
#include <eosio/asset.hpp>

using namespace eosio;

CONTRACT inlinemsig : public contract {
   public:
      using contract::contract;

      struct transfer_struct {
         name from;
         name to;
         asset quantity;
         std::string memo;
      };

      ACTION test();

};