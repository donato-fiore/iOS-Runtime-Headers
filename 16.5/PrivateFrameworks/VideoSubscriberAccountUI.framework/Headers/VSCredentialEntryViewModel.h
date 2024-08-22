// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSCREDENTIALENTRYVIEWMODEL_H
#define VSCREDENTIALENTRYVIEWMODEL_H

@class NSString, VSExpressionEvaluator, NSArray, NSURL;
@protocol VSCredentialEntryViewModelDelegate;


#import "VSCuratedViewModel.h"
#import "VSCredentialEntryPicker.h"

@interface VSCredentialEntryViewModel : VSCuratedViewModel

@property (copy, nonatomic) NSString *additionalMessage; // ivar: _additionalMessage
@property (retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator; // ivar: _buttonExpressionEvaluator
@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (retain, nonatomic) NSArray *credentialEntryFields; // ivar: _credentialEntryFields
@property (weak, nonatomic) NSObject<VSCredentialEntryViewModelDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *linkTitle; // ivar: _linkTitle
@property (copy, nonatomic) NSURL *linkURL; // ivar: _linkURL
@property (retain, nonatomic) VSCredentialEntryPicker *picker; // ivar: _picker
@property (copy, nonatomic) NSString *recentsMessage; // ivar: _recentsMessage
@property (copy, nonatomic) NSString *recentsTitle; // ivar: _recentsTitle


-(void)_bindField:(id)arg0 ;
-(void)_unbindField:(id)arg0 ;
-(void)buttonTappedAtIndex:(NSUInteger)arg0 ;
-(void)clearFieldsAfterUsername;
-(void)configureWithRequest:(id)arg0 ;
-(void)pickerDidSelectRow:(NSUInteger)arg0 ;
-(void)validateCredentialEntryFields;


@end


#endif