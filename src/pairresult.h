// Copyright (c) 2019 The PIVX Developers
// Copyright (c) 2020 The PIVX Developers
// Copyright (c) 2020 The DogeCash Developers


// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DOGEC_PAIRRESULT_H
#define DOGEC_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //DOGEC_PAIRRESULT_H
