// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKVIBRATIONRECORDERTOUCHSURFACERECORDEDDATAWRAPPER_H
#define TKVIBRATIONRECORDERTOUCHSURFACERECORDEDDATAWRAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {
    CGFloat _vibrationPatternMaximumDuration;
    CGFloat _vibrationPatternDidStartTimestamp;
    NSUInteger _maximumFramesPerSecondRate;
    *void _recordedData;
    NSUInteger _recordedDataElementsCount;
    NSUInteger _recordedDataCursor;
    BOOL _isWarmUpModeEnabled;
    CGFloat _warmUpModeDidStartTimestamp;
    BOOL _displayLinkHasRefreshedAtLeastOnce;
    id<NSCopying> *_displayLinkManagerObserverToken;
}




-(BOOL)getNormalizedTouchLocation:(struct CGPoint *)arg0 touchPhase:(*int)arg1 forTimeInterval:(CGFloat)arg2 ;
-(id)initWithVibrationPatternMaximumDuration:(CGFloat)arg0 ;
-(void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(CGFloat)arg0 ;
-(void)_recordFinalDataWithNormalizedTouchLocation:(struct CGPoint )arg0 touchPhase:(int)arg1 timeIntervalSinceBeginningOfPattern:(CGFloat)arg2 ;
-(void)_updateMaximumFramesPerSecondRate:(id)arg0 ;
-(void)dealloc;
-(void)didStopRecording;
-(void)recordNormalizedTouchLocation:(struct CGPoint )arg0 touchPhase:(int)arg1 ;


@end


#endif