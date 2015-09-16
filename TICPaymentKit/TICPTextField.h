//
//  TICPTextField.h
//  PaymentKit Example
//
//  Created by Michaël Villar on 3/20/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TICPTextField;

@protocol TICPTextFieldDelegate <UITextFieldDelegate>

@optional

- (void)pkTextFieldDidBackSpaceWhileTextIsEmpty:(TICPTextField *)textField;

@end

@interface TICPTextField : UITextField

+ (NSString*)textByRemovingUselessSpacesFromString:(NSString*)string;

@property (nonatomic, weak) id<TICPTextFieldDelegate> delegate;

@end

