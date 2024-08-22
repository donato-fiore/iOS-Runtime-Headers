// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOSHOWTOUCHACTION_TESTINGONLY_H
#define _UIOSHOWTOUCHACTION_TESTINGONLY_H

@class UIOAction;


#import "UIView.h"

@interface _UIOShowTouchAction_TestingOnly : UIOAction {
    UIView *_indicatorView;
}




-(BOOL)isPermitted;
-(id)initWithPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)_removeIndicatorView;
-(void)performActionFromConnection:(id)arg0 ;


@end


#endif