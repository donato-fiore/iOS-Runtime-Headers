// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTURELAYOUTMETRICS_H
#define SBUISYSTEMAPERTURELAYOUTMETRICS_H


#import <Foundation/Foundation.h>


@interface SBUISystemApertureLayoutMetrics : NSObject

@property (readonly, nonatomic) CGSize compactConcentricAreaSize;
@property (readonly, nonatomic) NSDirectionalEdgeInsets compactLegibleAreaInsets;
@property (readonly, nonatomic) CGSize expandedConcentricAreaSize;
@property (readonly, nonatomic) NSDirectionalEdgeInsets expandedControlsAreaInsets;
@property (readonly, nonatomic) NSDirectionalEdgeInsets expandedLegibleAreaInsets;
@property (readonly, nonatomic) CGRect interSensorRegionInWindowSpace;
@property (readonly, nonatomic) CGSize maximumCompactSize;
@property (readonly, nonatomic) CGFloat maximumContinuousCornerRadius;
@property (readonly, nonatomic) CGSize maximumExpandedSize;
@property (readonly, nonatomic) CGSize maximumHorizontalMinimalViewSize;
@property (readonly, nonatomic) CGSize maximumLeadingTrailingViewSize;
@property (readonly, nonatomic) CGSize maximumMicroNoticeSize;
@property (readonly, nonatomic) CGSize maximumPossibleSizeWhilePresentingMenu;
@property (readonly, nonatomic) CGSize microNoticeConcentricAreaSize;
@property (readonly, nonatomic) CGSize minimumCompactSize;
@property (readonly, nonatomic) CGFloat minimumContinuousCornerRadius;
@property (readonly, nonatomic) CGSize minimumExpandedSize;
@property (readonly, nonatomic) CGSize minimumMicroNoticeSize;
@property (readonly, nonatomic) CGSize minimumMinimalSize;
@property (readonly, nonatomic) NSDirectionalEdgeInsets minimumScreenEdgeInsets;
@property (readonly, nonatomic) CGSize sensorRegionSize;


+(BOOL)_deviceNativeScreenSizeIsLargePhone;
+(CGFloat)_nativeScreenWidth;
+(id)sharedInstanceForEmbeddedDisplay;
-(CGFloat)_maximumWidth;
-(CGFloat)_minimumScreenEdgeInset;
-(struct CGSize )_inertSize;


@end


#endif