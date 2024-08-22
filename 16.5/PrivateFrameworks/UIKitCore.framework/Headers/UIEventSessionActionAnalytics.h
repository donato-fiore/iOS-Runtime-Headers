// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIEVENTSESSIONACTIONANALYTICS_H
#define UIEVENTSESSIONACTIONANALYTICS_H

@class NSMutableSet, NSString, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_UIEventSessionAction.h"
#import "UIEventSessionTouchEventAnalyzer.h"

@interface UIEventSessionActionAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _UIEventSessionAction *_lastAction;
    NSMutableSet *_accumulators;
    NSUInteger _maxDepth;
    UIEventSessionTouchEventAnalyzer *touchAnalyzer;
    NSInteger _magicKeyboardState;
    NSInteger _lastMagicKeyboardState;
    NSInteger _hardwareKeyboardState;
    NSInteger _lastHardwareKeyboardState;
    NSInteger _uiInterfaceOrientation;
    NSInteger _lastUIInterfaceOrientation;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSNumber *sessionID; // ivar: _sessionID


+(id)sharedInstance;
-(BOOL)getAIDState;
-(id)_instanceOfActionClass:(Class)arg0 source:(NSInteger)arg1 ;
-(id)allAccumulatorNames;
-(id)init;
-(void)addAccumulator:(id)arg0 ;
-(void)didHardwareConfigurationChange:(id)arg0 ;
-(void)didKeyCommand:(id)arg0 ;
-(void)didPointerClick:(id)arg0 withLocationInWindow:(struct CGPoint )arg1 withWindowBounds:(struct CGRect )arg2 ;
-(void)didPointerHover:(id)arg0 withLocationInWindow:(struct CGPoint )arg1 withWindowBounds:(struct CGRect )arg2 ;
-(void)didScroll:(id)arg0 withSource:(NSInteger)arg1 ;
-(void)didShowContextualMenuFromLocation:(struct CGPoint )arg0 withSource:(NSInteger)arg1 ;
-(void)didTap:(id)arg0 withSource:(NSInteger)arg1 ;
-(void)didTextSelectionWithSource:(NSInteger)arg0 ;
-(void)didTouch:(id)arg0 withLocationInWindow:(struct CGPoint )arg1 withWindowBounds:(struct CGRect )arg2 withTrackpadFingerDownCount:(NSInteger)arg3 ;
-(void)didTypingWithSource:(NSInteger)arg0 ;
-(void)q_addAccumulator:(id)arg0 ;
-(void)q_addActionAndUpdate:(id)arg0 ;
-(void)q_enumerateAnalytics:(id)arg0 ;
-(void)q_flushRecentActions;
-(void)q_setupDefaultAnalytics;
-(void)q_updateAnalyticsFromAccumulators;
-(void)q_updateHardwareState;
-(void)q_updateUIInterfaceOrientation;
-(void)q_writeAnalytics;
-(void)updateAIDState;
-(void)updateHardwareKeyboardState;
-(void)updateUIInterfaceOrientation;
-(void)writeAnalytics;
-(void)writeEventWithFields:(id)arg0 andName:(id)arg1 ;


@end


#endif