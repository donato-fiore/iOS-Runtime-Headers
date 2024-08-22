// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUINOWPLAYINGTVADVISORYFEATURE_H
#define VUINOWPLAYINGTVADVISORYFEATURE_H

@class NSArray, NSString;
@protocol VUINowPlayingTVAdvisoryFeature;


#import "VUINowPlayingTimeBoundFeature.h"

@interface VUINowPlayingTVAdvisoryFeature : VUINowPlayingTimeBoundFeature <VUINowPlayingTVAdvisoryFeature>



@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSArray *advisoryDisabledTimeRanges; // ivar: _advisoryDisabledTimeRanges
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSkippable) BOOL skippable;
@property (nonatomic) CGFloat startTime;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;
@property (retain, nonatomic) id *userInfo;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 startTime:(CGFloat)arg1 duration:(CGFloat)arg2 ;


@end


#endif