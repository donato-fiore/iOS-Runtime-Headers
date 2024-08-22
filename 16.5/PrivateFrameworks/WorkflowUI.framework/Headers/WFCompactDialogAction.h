// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPACTDIALOGACTION_H
#define WFCOMPACTDIALOGACTION_H

@class WFDialogButton, UIButton;

#import <Foundation/Foundation.h>


@interface WFCompactDialogAction : NSObject

@property (readonly, nonatomic) WFDialogButton *dialogButton; // ivar: _dialogButton
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) UIButton *uiButton; // ivar: _uiButton


+(id)actionForButton:(id)arg0 handler:(id)arg1 ;
-(void)invokeHandler;


@end


#endif