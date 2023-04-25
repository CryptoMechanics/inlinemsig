#include <inlinemsig.hpp>
ACTION inlinemsig::test(name proposal_name, name proposer, std::vector<permission_level> requested, transaction trx) {

   action act_propose(
      permission_level{proposer, "active"_n},
      "eosio.msig"_n, "propose"_n,
      std::make_tuple(proposer, proposal_name, requested, trx)
   );
   act_propose.send();


}