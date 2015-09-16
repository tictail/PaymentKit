//
//  TICPCardType.h
//  TICPPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#ifndef TICPCardType_h
#define TICPCardType_h

typedef enum {
    TICPCardTypeVisa,
    TICPCardTypeMasterCard,
    TICPCardTypeAmex,
    TICPCardTypeDiscover,
    TICPCardTypeJCB,
    TICPCardTypeDinersClub,
    TICPCardTypeUnknown
} TICPCardType;

#endif
