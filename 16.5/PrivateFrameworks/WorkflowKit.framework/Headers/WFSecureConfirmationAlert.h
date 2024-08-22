// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSECURECONFIRMATIONALERT_H
#define WFSECURECONFIRMATIONALERT_H

@class WFAlert, WFDialogAttribution, WFAlertButton;



@interface WFSecureConfirmationAlert : WFAlert

@property (retain, nonatomic) WFDialogAttribution *attribution; // ivar: _attribution
@property (readonly, nonatomic) WFAlertButton *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) id *cancellationHandler; // ivar: _cancellationHandler
@property (readonly, nonatomic) WFAlertButton *continueButton; // ivar: _continueButton
@property (copy, nonatomic) id *failureHandler; // ivar: _failureHandler
@property (copy, nonatomic) id *successHandler; // ivar: _successHandler


-(id)buttons;
-(id)configuredCancelButton;
-(id)configuredContinueButton;
-(id)init;


@end


#endif