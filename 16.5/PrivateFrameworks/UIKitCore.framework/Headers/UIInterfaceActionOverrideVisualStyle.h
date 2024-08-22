// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINTERFACEACTIONOVERRIDEVISUALSTYLE_H
#define UIINTERFACEACTIONOVERRIDEVISUALSTYLE_H



#import "UIInterfaceActionVisualStyle.h"
#import "UIInterfaceActionHighlightAttributes.h"
#import "UIInterfaceActionSeparatorAttributes.h"

@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle

@property (nonatomic) BOOL alignActionSeparatorLeadingEdgeWithContent; // ivar: _alignActionSeparatorLeadingEdgeWithContent
@property (retain, nonatomic) UIInterfaceActionHighlightAttributes *customActionHighlightAttributes; // ivar: _customActionHighlightAttributes
@property CGFloat customSelectionHighlightContinuousCornerRadius; // ivar: _customSelectionHighlightContinuousCornerRadius
@property (retain, nonatomic) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes; // ivar: _customSeparatorAttributes
@property (copy, nonatomic) id *customTitleLabelFontProviderForViewState; // ivar: _customTitleLabelFontProviderForViewState


+(id)styleOverride;
-(BOOL)isEqual:(id)arg0 ;
-(id)actionTitleLabelFontForViewState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newActionBackgroundViewForViewState:(id)arg0 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg0 ;


@end


#endif