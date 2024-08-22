// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI20TIMINGCURVEPARAMETER_H
#define _TTC8VIDEOSUI20TIMINGCURVEPARAMETER_H

@class SwiftObject, UICubicTimingParameters, UISpringTimingParameters;
@protocol UITimingCurveProvider;



@interface _TtC8VideosUI20TimingCurveParameter : SwiftObject <UITimingCurveProvider>



@property (nonatomic, retain) UICubicTimingParameters *cubicTimingParameters; // ivar: cubicTimingParameters
@property (nonatomic, retain) UISpringTimingParameters *springTimingParameters; // ivar: springTimingParameters
@property (nonatomic) NSInteger timingCurveType; // ivar: timingCurveType


-(id)copyWithZone:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif