//
//  TICPPaymentField.h
//  TICPPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TICPCard.h"
#import "TICPCardNumber.h"
#import "TICPCardExpiry.h"
#import "TICPCardCVC.h"
#import "TICPAddressZip.h"
#import "TICPUSAddressZip.h"

@class TICPView, TICPTextField;

@protocol TICPViewDelegate <NSObject>
@optional
- (void)paymentView:(TICPView *)paymentView withCard:(TICPCard *)card isValid:(BOOL)valid;
@end

@interface TICPView : UIView

- (BOOL)isValid;

@property (nonatomic, readonly) UIView *opaqueOverGradientView;
@property (nonatomic, readonly) TICPCardNumber *cardNumber;
@property (nonatomic, readonly) TICPCardExpiry *cardExpiry;
@property (nonatomic, readonly) TICPCardCVC *cardCVC;
@property (nonatomic, readonly) TICPAddressZip *addressZip;

@property IBOutlet UIView *innerView;
@property IBOutlet UIView *clipView;
@property IBOutlet TICPTextField *cardNumberField;
@property IBOutlet TICPTextField *cardExpiryField;
@property IBOutlet TICPTextField *cardCVCField;
@property IBOutlet UIImageView *placeholderView;
@property (nonatomic, weak) id <TICPViewDelegate> delegate;
@property (readonly) TICPCard *card;

@end
