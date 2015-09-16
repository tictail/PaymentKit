//
//  TICPZip.h
//  TICPPayment Example
//
//  Created by Alex MacCaw on 2/1/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TICPComponent.h"

@interface TICPAddressZip : TICPComponent {
@protected
    NSString *_zip;
}

@property (nonatomic, readonly) NSString *string;

+ (instancetype)addressZipWithString:(NSString *)string;
- (instancetype)initWithString:(NSString *)string;

@end
