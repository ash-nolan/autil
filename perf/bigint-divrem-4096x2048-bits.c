#define AUTIL_IMPLEMENTATION
#include "../autil.h"
#include "perf-bigint-divrem.h"

#define LHS_CSTR                                                               \
    "0x"                                                                       \
    "b9a54eff384958023cd1f4ef963441c4e8483fc3c4a06cd5c9015d30d6b86fe9"         \
    "abeae461e40c59c2ea1877569adf3f57f081462eac1bb66001cb20274833eb1a"         \
    "156f80cba9df8704df427e9efafd3fabfcee7f3cb23033c60d90acc2f07596c0"         \
    "3f1a5f936f3a7ed2ad0007264d49b721f64b21d09ace0f9b64198912c8a0e901"         \
    "41680c6e122d6e1b16ddbc7d6a2e2191aad102c8650c6ba9fea947ad6ec01b9d"         \
    "6911a563a084777b607279c55c48a8bf89bf94a182c10d19e18ba561d17d077e"         \
    "1a0c53529c2956fb93acbeb37d38f2ff6eae4d2f3a40a2bef333e2e8d177b35b"         \
    "5d286b4cb3a5dbc01e08f15a06577f16b27fed7ec0e4716013fec73540c8c64d"         \
    "33b6cde250255626297dc28405e23fda5f91eca9288ea230a76dcd1092e0df9b"         \
    "775bf76c655051acdb6c9db89e5584bdf396ad3dd2d87578591ec7245e77f4d1"         \
    "8c87f70683cfa58e775896250f0868493e13fbefddd8ae822a0bd5de77c16f9e"         \
    "6b2f997c7dff810f83d7013b69e8bcd06700b25a5b52745f6f2460d73d3a11a6"         \
    "fe65e3326fc63303483e01bc432b09b7c44980dcae620ce6507ce90d4037faed"         \
    "84a37860b8a3d41f402537b3ddbf2f091a33230579d2d9625d7c358da731b0ef"         \
    "110d562efcdaee5032f2810a8f971b3bd6d3af28fcb28bc5e7fd12c7cf05f850"         \
    "6435b51512a768b4a5ef5142b67bd2924385037ff7b726a199660b5dbff7de99"
#define RHS_CSTR                                                               \
    "0x"                                                                       \
    "024f65097f3e3a9f105f992a2f22d1c8765ed7edb0e8e8302562000202884635"         \
    "c78a4e37816080e7fbb5aa447fa854aa590ff6bb75884bfb989a9485a2327fe4"         \
    "2979f64971360c370e11a73cc1187de0787afb61b6b99be6318ad9239a0a14ca"         \
    "82f7a6f1534c6ff763d5bea56536d3130b86b9f25213ebe1924f4060500552cf"         \
    "6ce5a9111426b092cf6c5dd28234e4da3863c9fe0131fae8306dbec8a81fdd8d"         \
    "9f97ece89edee06bb90ebc61216a8f379d57b58354fa8e1e3d1aa696f567199f"         \
    "18ebdc1ca3fba65b30b6c97593b38c39484c915f69c352add20c820f1ce9f700"         \
    "f01eb1d91dfccc6e79f377b7abe2431d641f373264319d4e9552fea58065b49d"

int
main(void)
{
    measure_bigint_divrem(__FILE__, LHS_CSTR, RHS_CSTR);
    return EXIT_SUCCESS;
}
