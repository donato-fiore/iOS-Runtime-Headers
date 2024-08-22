// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT1170_WIDE_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT1170_WIDE_H

@class FixedSplit, NSString;
@protocol _UIStatusBarVisualProvider_CustomSplit;



@interface _UIStatusBarVisualProvider_Split1170_Wide : FixedSplit <_UIStatusBarVisualProvider_CustomSplit>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)additionalBottomLeadingMargin;
+(CGFloat)expandedFontSize;
+(CGFloat)leadingCenteringOffset;
+(CGFloat)nativeDisplayWidth;
+(CGFloat)pillCenteringOffset;
+(CGFloat)trailingEdgeInsetLeadingAdjustment;
+(struct CGSize )notchSize;
-(CGFloat)bottomLeadingTopOffset;
-(CGFloat)expandedIconScale;
-(CGFloat)itemSpacing;
-(CGFloat)lowerExpandedBaselineOffset;
-(struct CGSize )expandedPillSize;
-(struct CGSize )pillSize;


@end


#endif