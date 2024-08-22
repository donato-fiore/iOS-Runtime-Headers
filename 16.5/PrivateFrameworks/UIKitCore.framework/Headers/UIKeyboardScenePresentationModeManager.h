// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDSCENEPRESENTATIONMODEMANAGER_H
#define UIKEYBOARDSCENEPRESENTATIONMODEMANAGER_H

@protocol UIKeyboardScenePresentationModeManagerDelegate;

#import <Foundation/Foundation.h>


@interface UIKeyboardScenePresentationModeManager : NSObject

@property (nonatomic) NSUInteger currentPresentationMode; // ivar: _currentPresentationMode
@property (weak, nonatomic) NSObject<UIKeyboardScenePresentationModeManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL enhancedWindowingModeEnabled; // ivar: _enhancedWindowingModeEnabled
@property (readonly, nonatomic) NSUInteger presentationMode;


-(NSUInteger)determinePresentationMode;
-(NSUInteger)determineiPadPresentationMode;
-(NSUInteger)determineiPhonePresentationMode;
-(void)_enhancedWindowingModeEnabledDidChange:(id)arg0 ;
-(void)didChangeToPresentationMode:(NSUInteger)arg0 ;
-(void)enhancedWindowingModeEnabledDidChange:(BOOL)arg0 ;


@end


#endif