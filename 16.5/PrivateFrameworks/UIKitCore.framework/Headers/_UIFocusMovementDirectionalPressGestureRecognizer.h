// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSMOVEMENTDIRECTIONALPRESSGESTURERECOGNIZER_H
#define _UIFOCUSMOVEMENTDIRECTIONALPRESSGESTURERECOGNIZER_H

@class UIFocusMovementPressGestureRecognizer;



@interface _UIFocusMovementDirectionalPressGestureRecognizer : UIFocusMovementPressGestureRecognizer {
    ? _flags;
}


@property (nonatomic) NSUInteger pressSource; // ivar: _pressSource


-(NSUInteger)focusHeadingForPresses:(id)arg0 ;
-(id)_filterPressesByPressSource:(id)arg0 ;
-(void)configureDefaults;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;


@end


#endif