// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCMUTABLEWAVEFORM_H
#define RCMUTABLEWAVEFORM_H

@class NSMutableArray;


#import "RCWaveform.h"

@interface RCMutableWaveform : RCWaveform

@property (readonly) NSMutableArray *segments;


-(BOOL)clipToTimeRange:(struct ? )arg0 ;
-(id)classForCoder;
-(void)addSegment:(id)arg0 ;
-(void)addSegments:(id)arg0 ;
-(void)removeAllSegments;
-(void)removeSegment:(id)arg0 ;


@end


#endif