// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWSERVICEDUMMYPOPOVERCONTROLLER_H
#define _UIVIEWSERVICEDUMMYPOPOVERCONTROLLER_H

@protocol _UIViewServiceDummyPopoverControllerDelegate;


#import "UIPopoverController.h"

@interface _UIViewServiceDummyPopoverController : UIPopoverController

@property (weak, nonatomic) NSObject<_UIViewServiceDummyPopoverControllerDelegate> *dummyPopoverControllerDelegate; // ivar: _dummyPopoverControllerDelegate


+(Class)_popoverViewClass;
-(BOOL)_attemptsToAvoidKeyboard;
-(void)_popoverView:(id)arg0 didSetUseToolbarShine:(BOOL)arg1 ;
-(void)_super_setPopoverContentSize:(struct CGSize )arg0 ;
-(void)setPopoverContentSize:(struct CGSize )arg0 animated:(BOOL)arg1 ;


@end


#endif