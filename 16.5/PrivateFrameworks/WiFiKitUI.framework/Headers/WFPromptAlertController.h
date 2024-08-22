// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPROMPTALERTCONTROLLER_H
#define WFPROMPTALERTCONTROLLER_H

@class UIAlertController;



@interface WFPromptAlertController : UIAlertController

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


+(id)promptAlertControllerWithTitle:(id)arg0 message:(id)arg1 cancelTitle:(id)arg2 successTitle:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif