#include <inlinemsig.hpp>


ACTION inlinemsig::test() {

   permission_level pl;

   pl.actor = "inlinemsig11"_n;
   pl.permission = "active"_n;

   std::vector<permission_level> pla;
   pla.push_back(pl);

   transfer_struct ts;

   ts.from = "inlinemsig11"_n;
   ts.to = "gnomegenomes"_n;
   ts.quantity = asset(1, symbol("EOS",4));
   ts.memo = "";

   std::vector<char> b = pack(ts);

   action a;

   a.account = "eosio.token"_n;
   a.authorization = pla;
   a.name = "transfer"_n;
   a.data = b;

   transaction tx;
   tx.actions.push_back(a);

   action act_propose(
      permission_level{get_self(), "active"_n},
      "eosio.msig"_n, "propose"_n,
      std::make_tuple(get_self(), "my.test.prop"_n, pla, tx)
   );
   act_propose.send();


}