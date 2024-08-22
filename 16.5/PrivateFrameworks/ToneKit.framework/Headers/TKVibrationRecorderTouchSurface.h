// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKVIBRATIONRECORDERTOUCHSURFACE_H
#define TKVIBRATIONRECORDERTOUCHSURFACE_H

@class TLVibrationPattern;
@protocol NSCopying, TKVibrationRecorderTouchSurfaceDelegate;


#import "TKVibrationRecorderRippleView.h"
#import "TKVibrationRecorderTouchSurfaceRecordedDataWrapper.h"

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView {
    BOOL _isRecordingModeEnabled;
    CGFloat _vibrationPatternMaximumDuration;
    TKVibrationRecorderTouchSurfaceRecordedDataWrapper *_recordedDataWrapper;
    BOOL _shouldIgnoreCurrentTouch;
    BOOL _isReplayModeEnabled;
    TLVibrationPattern *_vibrationPatternToReplay;
    CGFloat _replayModeWasEnteredStartTime;
    id<NSCopying> *_displayLinkManagerObserverToken;
}


@property (weak, nonatomic) NSObject<TKVibrationRecorderTouchSurfaceDelegate> *delegate; // ivar: _delegate


-(id)initWithVibrationPatternMaximumDuration:(CGFloat)arg0 styleProvider:(id)arg1 ;
-(void)_recordTouchLocation:(struct CGPoint )arg0 touchPhase:(int)arg1 ;
-(void)_updateTouchLocationForReplayMode:(id)arg0 ;
-(void)currentVibrationComponentShouldEnd;
-(void)dealloc;
-(void)enterRecordingMode;
-(void)enterReplayModeWithVibrationPattern:(id)arg0 ;
-(void)exitRecordingMode;
-(void)exitReplayMode;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif