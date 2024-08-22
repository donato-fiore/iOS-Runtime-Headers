// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKBRTRECOGNIZER_H
#define _UIKBRTRECOGNIZER_H

@class NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue, _UIKBRTRecognizerDelegate, _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerTouchPointTrackingProtocol;

#import <Foundation/Foundation.h>


@interface _UIKBRTRecognizer : NSObject {
    BOOL _isWaiting;
}


@property (retain, nonatomic) NSMutableSet *activeTouches; // ivar: _activeTouches
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activeTouchesQueue; // ivar: _activeTouchesQueue
@property (readonly, nonatomic) NSMutableSet *averagingRules; // ivar: _averagingRules
@property (nonatomic) CGSize clusterRestHaloSize; // ivar: _clusterRestHaloSize
@property (readonly, nonatomic) NSMutableSet *definitiveRules; // ivar: _definitiveRules
@property (nonatomic) NSObject<_UIKBRTRecognizerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (nonatomic) BOOL disableHomeRowReturn; // ivar: _disableHomeRowReturn
@property (retain, nonatomic) NSMutableArray *ignoredTouches; // ivar: _ignoredTouches
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ignoredTouchesQueue; // ivar: _ignoredTouchesQueue
@property (nonatomic) CGFloat maximumNonRestMoveDistance; // ivar: _maximumNonRestMoveDistance
@property (nonatomic) NSUInteger numProlongedTouches; // ivar: _numProlongedTouches
@property (retain, nonatomic) NSMutableArray *touchInfos; // ivar: _touchInfos
@property (nonatomic) CGFloat touchIntervalAverage; // ivar: _touchIntervalAverage
@property (retain, nonatomic) NSObject<_UIKBRTRecognizerTouchLoggingProtocol> *touchLogger; // ivar: _touchLogger
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *touchQueue; // ivar: _touchQueue
@property (retain, nonatomic) NSObject<_UIKBRTRecognizerTouchPointTrackingProtocol> *touchTracker; // ivar: _touchTracker


-(BOOL)addedToActiveTouches:(id)arg0 ;
-(BOOL)makeTouchActive:(id)arg0 ;
-(BOOL)notifyDelegateOfMovedTouch:(id)arg0 ;
-(BOOL)queryDelegateOfIgnoringTouch:(id)arg0 forOtherTouch:(BOOL)arg1 ;
-(BOOL)queryDelegateOfRestingTouch:(id)arg0 ;
-(BOOL)queryDelegateToBeginTouch:(id)arg0 forBeginState:(NSUInteger)arg1 restartIfNecessary:(BOOL)arg2 ;
-(BOOL)removedFromActiveTouches:(id)arg0 ;
-(float)letRulesModifyNewTouchInfo:(id)arg0 ;
-(id)init;
-(void)_doBeginTouchWithTouchInfo:(id)arg0 ;
-(void)_doCancelledTouchWithTouchInfo:(id)arg0 ;
-(void)_doEndedTouchWithTouchInfo:(id)arg0 ;
-(void)_doIgnoreTouchWithTouchInfo:(id)arg0 ;
-(void)_doMarkTouchProcessedWithTouchInfo:(id)arg0 ;
-(void)_doMovedTouchWithTouchInfo:(id)arg0 ;
-(void)cancelTouchOnLayoutWithTouchInfo:(id)arg0 ;
-(void)explicitlyIgnoreTouch:(id)arg0 withIdentifier:(id)arg1 ;
-(void)kbStatusMessage:(id)arg0 ;
-(void)letRulesModifyPendingTouchInfo:(id)arg0 ;
-(void)makeTouchIgnored:(id)arg0 force:(BOOL)arg1 ;
-(void)makeTouchIgnored:(id)arg0 force:(BOOL)arg1 because:(id)arg2 ;
-(void)makeTouchIgnored:(id)arg0 force:(BOOL)arg1 withMessage:(id)arg2 ;
-(void)markTouchProcessed:(id)arg0 withIdentifier:(id)arg1 ;
-(void)notifyDelegateOfCancelledTouch:(id)arg0 ;
-(void)notifyDelegateOfIgnoringTouch:(id)arg0 ;
-(void)notifyDelegateOfMovedIgnoredTouch:(id)arg0 ;
-(void)notifyDelegateOfRestingTouch:(id)arg0 ;
-(void)notifyDelegateOfSuccessfulTouch:(id)arg0 ;
-(void)processTouchInfo:(id)arg0 ;
-(void)reset;
-(void)setStandardKeyPixelSize:(struct CGSize )arg0 ;
-(void)touchCancelled:(id)arg0 withIdentifier:(id)arg1 ;
-(void)touchDown:(id)arg0 withIdentifier:(id)arg1 canLogTouch:(BOOL)arg2 ;
-(void)touchDragged:(id)arg0 withIdentifier:(id)arg1 ;
-(void)touchUp:(id)arg0 withIdentifier:(id)arg1 ;
-(void)updateIgnoredTouchesForTouchInfo:(id)arg0 whenTouchInfo:(id)arg1 changesStateTo:(char)arg2 ;


@end


#endif