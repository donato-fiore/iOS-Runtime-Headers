// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONINPUTMODE_H
#define UIDICTATIONINPUTMODE_H

@class NSMutableDictionary;


#import "UISpecializedInputMode.h"
#import "UIKeyboardInputMode.h"
#import "UITouch.h"

@interface UIDictationInputMode : UISpecializedInputMode {
    NSMutableDictionary *_cachedIcons;
}


@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // ivar: _currentInputModeForDictation
@property (retain, nonatomic) UITouch *triggeringTouch; // ivar: _triggeringTouch
@property (nonatomic) BOOL usingTypeAndTalk; // ivar: _usingTypeAndTalk


+(BOOL)currentInputModeSupportsDictation;
-(BOOL)includeBarHeight;
-(BOOL)showSWLayoutWithHWKeyboard;
-(Class)viewControllerClass;
-(id)indicatorIconForDictationLanguage:(id)arg0 scaleFactor:(CGFloat)arg1 ;


@end


#endif