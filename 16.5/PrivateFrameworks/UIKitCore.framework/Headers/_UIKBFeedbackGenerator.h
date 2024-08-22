// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKBFEEDBACKGENERATOR_H
#define _UIKBFEEDBACKGENERATOR_H

@class NSUserDefaults, NSDate, AVSystemController, CHHapticEngine, NSDictionary, NSString;
@protocol _UIKBFeedbackGenerating, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIKBFeedbackGenerator : NSObject <_UIKBFeedbackGenerating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_soundsDefaults;
    int _ringerStateNotifyToken;
    BOOL _isActive;
    NSDate *_engineStartDate;
    CGFloat _engineActiveDuration;
    NSUInteger _engineStartCount;
    NSUInteger _actionCount;
    AVSystemController *_avSystemController;
    float _volume;
    BOOL _isFeedbackDisabled;
    BOOL _isAudioOnly;
    CHHapticEngine *_engine;
    NSDictionary *_players;
    NSDictionary *_systemSounds;
    CGFloat _lastActionTime;
    BOOL __isEngineRunning;
    NSInteger __mode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isActive;
-(id)init;
-(void)_dictationDidBeginNotification:(id)arg0 ;
-(void)_dictationDidEndNotification:(id)arg0 ;
-(void)_effectiveVolumeDidChangeNotification:(id)arg0 ;
-(void)_keyboardPreferencesDidUpdateNotification:(id)arg0 ;
-(void)_serverConnectionDiedNotification:(id)arg0 ;
-(void)_stopEngineDueToIdle;
-(void)_stopEngineForApplicationNotification:(id)arg0 ;
-(void)actionOccurred:(NSInteger)arg0 ;
-(void)actionOccurred:(NSInteger)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)activateWithCompletionBlock:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif