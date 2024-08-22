// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT1080_WIDE_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT1080_WIDE_H

@class FixedSplit, NSString;
@protocol _UIStatusBarVisualProvider_CustomSplit;



@interface _UIStatusBarVisualProvider_Split1080_Wide : FixedSplit <_UIStatusBarVisualProvider_CustomSplit>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)additionalBottomLeadingMargin;
+(CGFloat)expandedEdgeInset;
+(CGFloat)expandedFontSize;
+(CGFloat)height;
+(CGFloat)leadingCenteringOffset;
+(CGFloat)nativeDisplayWidth;
+(CGFloat)referenceScreenScale;
+(struct CGSize )notchSize;
-(CGFloat)baselineBottomInset;
-(CGFloat)bottomLeadingTopOffset;
-(CGFloat)expandedIconScale;
-(CGFloat)itemSpacing;
-(CGFloat)lowerExpandedBaselineOffset;
-(struct CGSize )expandedPillSize;


@end


#endif