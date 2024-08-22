// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSMOVEMENTTABULATORPRESSGESTURERECOGNIZER_H
#define _UIFOCUSMOVEMENTTABULATORPRESSGESTURERECOGNIZER_H

@class UIFocusMovementPressGestureRecognizer;


#import "UIPress.h"

@interface _UIFocusMovementTabulatorPressGestureRecognizer : UIFocusMovementPressGestureRecognizer

@property (retain, nonatomic) UIPress *trackingPress; // ivar: _trackingPress


-(BOOL)_shouldReceivePress:(id)arg0 ;
-(NSUInteger)focusHeadingForPresses:(id)arg0 ;
-(void)configureDefaults;
-(void)reset;


@end


#endif