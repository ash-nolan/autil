#define AUTIL_IMPLEMENTATION
#include "../autil.h"
#include "perf-bigint-divrem.h"

#define LHS_CSTR                                                               \
    "0x"                                                                       \
    "dc45f0ba665b4bff4b61a6ac1808779c71324a3eeecfbb5863ee3e4f04ebc7cd"         \
    "990e2257e375e0f2a717a9f61ba031b7bf769e43e4658e9f015736b5e2ee1121"         \
    "a8371d5c44da05afa3c98d19f8a298c222e58ff38461e4286a7b4df3db9e5099"         \
    "8a79b0086d361430814bc87f47e56dac49e1daaf22d007bc26167aa8df7a2749"         \
    "c207921033c591e0194d5701e4f3355173632ee9294e34a85de1811cd4f365a8"         \
    "045a5f015061585eb8580b79d4deb6fcfbb2fd502eb5c24430e8d65f2b44b824"         \
    "3aa9e102549c5d7c99390a7de28e9246efacb2a7c183c203221867ce7ad69f9b"         \
    "49d0d962562eadb4d586963821c61fdaa3f3e757375192924b22c4f25197a277"         \
    "4495f8363d9cdeff0ccaa28fce9c45e697b73cf74f7a4ff7ae5be34bff19844e"         \
    "f2da4267b9f428ad56f173bb302e98ae62c0279e3d11744063895fe174c93f35"         \
    "8659dde7ad087621969dace49ff7ff7f2278ff2e575c36330b443e7b77fa2825"         \
    "efbdb85a3aff34a406c83894824a2cf6a14315847760d4e9c93937c6587486cb"         \
    "76b7537af6b032d55a3291c0aabb3c3f67baef174411e7ac7ea8f93a4de07892"         \
    "e391e07dfbec8cd7cbf2bd0c1a5f205e8b16273c4f3e28ab8d3b9d4b33f77078"         \
    "c9debb81f54c8ff408e49207836aab5e231c95bf0954d11ced2d22d477d59910"         \
    "46654364ec95d1628fc49e03ab7ccd08266a0e92715f0aacd1129c55ea44c3bd"
#define RHS_CSTR                                                               \
    "0x"                                                                       \
    "93d50ab1a81f4cc7"

int
main(void)
{
    measure_bigint_divrem(__FILE__, LHS_CSTR, RHS_CSTR);
    return EXIT_SUCCESS;
}
