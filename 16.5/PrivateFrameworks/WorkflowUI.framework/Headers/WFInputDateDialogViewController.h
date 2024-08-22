// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINPUTDATEDIALOGVIEWCONTROLLER_H
#define WFINPUTDATEDIALOGVIEWCONTROLLER_H

@class UIDatePicker;


#import "WFCompactDialogViewController.h"

@interface WFInputDateDialogViewController : WFCompactDialogViewController

@property (weak, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker


-(BOOL)allowsInteractiveDismiss;
-(void)loadView;


@end


#endif