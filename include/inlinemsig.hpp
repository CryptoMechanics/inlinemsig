#include <eosio/eosio.hpp>
#include <eosio/transaction.hpp>

using namespace eosio;

CONTRACT inlinemsig : public contract {
   public:
      using contract::contract;

      ACTION test(name proposal_name, name proposer, std::vector<permission_level> requested, transaction trx);

};