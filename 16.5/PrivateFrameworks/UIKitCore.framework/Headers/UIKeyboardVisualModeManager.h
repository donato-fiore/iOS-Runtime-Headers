// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDVISUALMODEMANAGER_H
#define UIKEYBOARDVISUALMODEMANAGER_H

@protocol UIKeyboardVisualModeManagerDelegate;

#import <Foundation/Foundation.h>


@interface UIKeyboardVisualModeManager : NSObject

@property (weak, nonatomic) NSObject<UIKeyboardVisualModeManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int lastVisualMode; // ivar: _lastVisualMode


+(BOOL)softwareKeyboardAllowedForActiveKeyboardSceneDelegate;
+(BOOL)softwareKeyboardAllowedOnExternalScreen;
+(BOOL)windowingSoftwareKeyboardAllowed;
+(id)visualModeLog;
-(BOOL)expectedInputModeIsSpecialized;
-(BOOL)textEntryFocusOnExternalDisplay;
-(BOOL)useVisualModeWindowed;
-(BOOL)windowingModeEnabled;
-(id)init;
-(int)visualMode;
-(void)enhancedWindowingModeDidChange:(id)arg0 ;
-(void)keyboardCameraNotification:(id)arg0 ;


@end


#endif