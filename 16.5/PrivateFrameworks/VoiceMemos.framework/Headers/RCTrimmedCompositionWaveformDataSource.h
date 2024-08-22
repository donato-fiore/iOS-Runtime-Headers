// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCTRIMMEDCOMPOSITIONWAVEFORMDATASOURCE_H
#define RCTRIMMEDCOMPOSITIONWAVEFORMDATASOURCE_H

@class NSURL;


#import "RCCompositionWaveformDataSource.h"

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource

@property (readonly, nonatomic) NSURL *destinationWaveformURL; // ivar: _destinationWaveformURL


-(BOOL)preferLoadingFragmentWaveforms;
-(id)generatedWaveformOutputURL;
-(id)initWithSourceComposition:(id)arg0 destinationWaveformURL:(id)arg1 ;


@end


#endif