//
//  TICPCardCVC.h
//  TICPPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TICPCardType.h"
#import "TICPComponent.h"

@interface TICPCardCVC : TICPComponent

@property (nonatomic, readonly) NSString *string;

+ (instancetype)cardCVCWithString:(NSString *)string;
- (BOOL)isValidWithType:(TICPCardType)type;
- (BOOL)isPartiallyValidWithType:(TICPCardType)type;

@end
