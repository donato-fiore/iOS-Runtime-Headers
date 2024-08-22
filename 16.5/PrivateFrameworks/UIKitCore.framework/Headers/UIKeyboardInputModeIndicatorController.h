// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDINPUTMODEINDICATORCONTROLLER_H
#define UIKEYBOARDINPUTMODEINDICATORCONTROLLER_H

@class NSString, NSDate;
@protocol UIKeyboardInputModeIndicatorControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIDelayedAction.h"

@interface UIKeyboardInputModeIndicatorController : NSObject

@property (weak, nonatomic) NSObject<UIKeyboardInputModeIndicatorControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIDelayedAction *dismissAction; // ivar: _dismissAction
@property (retain, nonatomic) NSString *focusedSceneID; // ivar: _focusedSceneID
@property (retain, nonatomic) UIDelayedAction *idleAction; // ivar: _idleAction
@property (retain, nonatomic) NSDate *lastPresentedTime; // ivar: _lastPresentedTime


+(BOOL)enabled;
-(BOOL)enabled;
-(void)clear;
-(void)didBecomeActive;
-(void)dismissIndicator;
-(void)focusChanged;
-(void)focusedSceneChanged:(id)arg0 ;
-(void)hardwareKeyboardDettached;
-(void)idle;
-(void)inputModeChanged;
-(void)keyPressed;
-(void)keyboardWindowEnabled:(BOOL)arg0 ;
-(void)presentIndicator;
-(void)setNeedsIndicatorShow;
-(void)showIndicator;
-(void)willResignActive;


@end


#endif