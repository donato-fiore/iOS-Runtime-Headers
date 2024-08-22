// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKUIALERT_H
#define TSKUIALERT_H

@class UIAlertView, NSString;
@protocol UIAlertViewDelegate;


#import "TSKAbstractAlert.h"

@interface TSKUIAlert : TSKAbstractAlert <UIAlertViewDelegate>

 {
    UIAlertView *_alertView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)alertWithTitle:(id)arg0 message:(id)arg1 cancelButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 ;
+(void)setUseMockUIAlert:(BOOL)arg0 ;
-(NSInteger)addButtonWithTitle:(id)arg0 ;
-(NSInteger)cancelButtonIndex;
-(NSInteger)firstOtherButtonIndex;
-(NSInteger)numberOfButtons;
-(id)buttonTitleAtIndex:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 cancelButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 cancelButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 otherOtherButtonTitle:(id)arg4 ;
-(void)alertView:(id)arg0 clickedButtonAtIndex:(NSInteger)arg1 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)alertView:(id)arg0 willDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didPresentAlertView:(id)arg0 ;
-(void)dismissWithClickedButtonIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)setCancelButtonIndex:(NSInteger)arg0 ;
-(void)showAlert;
-(void)willPresentAlertView:(id)arg0 ;


@end


#endif