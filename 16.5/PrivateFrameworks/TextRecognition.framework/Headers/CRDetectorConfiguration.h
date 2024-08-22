// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRDETECTORCONFIGURATION_H
#define CRDETECTORCONFIGURATION_H

@class NSURL, NSString, NSDictionary;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface CRDetectorConfiguration : NSObject

@property (readonly) BOOL cpuOnly; // ivar: _cpuOnly
@property (readonly) NSURL *customModelURL; // ivar: _customModelURL
@property (readonly) BOOL disableScriptDetection; // ivar: _disableScriptDetection
@property BOOL extractPolygons; // ivar: _extractPolygons
@property (readonly) CGFloat inputLengthLimit; // ivar: _inputLengthLimit
@property (readonly) BOOL logIntermediateResults; // ivar: _logIntermediateResults
@property (readonly) CGSize maximumInputSize; // ivar: _maximumInputSize
@property BOOL mergeFullTile; // ivar: _mergeFullTile
@property int mergingType; // ivar: _mergingType
@property (readonly) NSObject<MTLDevice> *metalDevice; // ivar: _metalDevice
@property (readonly) CGSize minimumInputSize; // ivar: _minimumInputSize
@property (readonly) NSString *prioritization; // ivar: _prioritization
@property BOOL runFineScale; // ivar: _runFineScale
@property BOOL runFullTile; // ivar: _runFullTile
@property (readonly) CGFloat scoreMapScaleFactor; // ivar: _scoreMapScaleFactor
@property (readonly) NSDictionary *scriptRatioThresholds; // ivar: _scriptRatioThresholds
@property (readonly) CGFloat tileOverlap; // ivar: _tileOverlap
@property (readonly) CGSize tileSize; // ivar: _tileSize
@property BOOL useScaleTraversal; // ivar: _useScaleTraversal


-(id)initV1DefaultConfig;
-(id)initV2DefaultConfig;
-(id)initV3DefaultConfig;
-(id)initWithImageReaderOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif