// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVLDISPLAYCOLORCALIBRATOR_H
#define TVLDISPLAYCOLORCALIBRATOR_H

@class NSString, NSArray, NSNumber, CUMessageSession;
@protocol TVLRGBColorDetectorDelegate;

#import <Foundation/Foundation.h>

#import "TVLALSDataExtractor.h"
#import "TVLRGBColorDetector.h"

@interface TVLDisplayColorCalibrator : NSObject <TVLRGBColorDetectorDelegate>



@property (retain, nonatomic) TVLALSDataExtractor *alsExtractor; // ivar: _alsExtractor
@property (retain, nonatomic) TVLRGBColorDetector *colorDetector; // ivar: _colorDetector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *detectorMargin; // ivar: _detectorMargin
@property (readonly, nonatomic) NSArray *detectorTarget; // ivar: _detectorTarget
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *maximumMotion; // ivar: _maximumMotion
@property (readonly, nonatomic) NSNumber *pitchMargin; // ivar: _pitchMargin
@property (copy, nonatomic) id *progressEventHandler; // ivar: _progressEventHandler
@property (readonly, nonatomic) NSUInteger role; // ivar: _role
@property (retain, nonatomic) CUMessageSession *session; // ivar: _session
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSNumber *stationaryFrames; // ivar: _stationaryFrames
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useSlowALS; // ivar: _useSlowALS
@property (readonly, nonatomic) NSNumber *yawMargin; // ivar: _yawMargin


-(id)initWithMessageSession:(id)arg0 ;
-(void)_initWithMessageSession:(id)arg0 ;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_postProgressEvent:(NSUInteger)arg0 withInfo:(id)arg1 ;
-(void)_respondAndInvalidateWithError:(id)arg0 responseHandler:(id)arg1 ;
-(void)_sendMessage:(id)arg0 withResponse:(id)arg1 ;
-(void)_startPositioning;
-(void)_startReadings;
-(void)_tearDown;
-(void)activate;
-(void)calibrate;
-(void)colorDetector:(id)arg0 backlightStateChanged:(BOOL)arg1 ;
-(void)colorDetector:(id)arg0 metThresholdConditionsWithColor:(id)arg1 ;
-(void)colorDetector:(id)arg0 movementDetected:(CGFloat)arg1 ;
-(void)invalidate;


@end


#endif