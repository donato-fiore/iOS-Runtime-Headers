// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEACOUSTICFEATURE_H
#define FTMUTABLEACOUSTICFEATURE_H

@class NSArray;


#import "FTAcousticFeature.h"

@interface FTMutableAcousticFeature : FTAcousticFeature

@property (copy, nonatomic) NSArray *acoustic_feature_per_frame;
@property (nonatomic) float frame_duration;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif