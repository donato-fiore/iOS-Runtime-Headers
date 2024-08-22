// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSTWOFACTORENTRYVIEWMODEL_H
#define VSTWOFACTORENTRYVIEWMODEL_H

@class VSExpressionEvaluator, NSArray, NSString;
@protocol VSTwoFactorEntryViewModelDelegate;


#import "VSCuratedViewModel.h"
#import "VSTwoFactorEntryTextField.h"

@interface VSTwoFactorEntryViewModel : VSCuratedViewModel

@property (retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator; // ivar: _buttonExpressionEvaluator
@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (weak, nonatomic) NSObject<VSTwoFactorEntryViewModelDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (copy, nonatomic) NSString *originalTwoFacorCode; // ivar: _originalTwoFacorCode
@property (retain, nonatomic) VSTwoFactorEntryTextField *twoFactorTextField; // ivar: _twoFactorTextField


-(id)init;
-(void)buttonAtIndexWasPressed:(NSUInteger)arg0 ;
-(void)configureWithRequest:(id)arg0 ;


@end


#endif