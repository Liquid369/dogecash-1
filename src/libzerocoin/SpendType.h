// Copyright (c) 2018 The PIVX Developers
// Copyright (c) 2020 The PIVX Developers
// Copyright (c) 2020 The DogeCash Developers


// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DOGEC_SPENDTYPE_H
#define DOGEC_SPENDTYPE_H

#include <cstdint>

namespace libzerocoin {
    enum SpendType : uint8_t {
        SPEND, // Used for a typical spend transaction, zDOGEC should be unusable after
        STAKE, // Used for a spend that occurs as a stake
        MN_COLLATERAL, // Used when proving ownership of zDOGEC that will be used for masternodes (future)
        SIGN_MESSAGE // Used to sign messages that do not belong above (future)
    };
}

#endif //DOGEC_SPENDTYPE_H
