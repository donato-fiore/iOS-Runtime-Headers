// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBLENDINGHIGHLIGHTVIEW_H
#define _UIBLENDINGHIGHLIGHTVIEW_H

@class NSMutableArray, NSString;
@protocol UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying;


#import "UIView.h"

@interface _UIBlendingHighlightView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>

 {
    NSMutableArray *_blendingViews;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isBorderView;
+(id)_blendingPressedView;
+(id)_blendingSeparatorView;
-(id)initWithCompositingBurnColor:(id)arg0 plusDColor:(id)arg1 ;
-(id)initWithTopLevelFilters:(id)arg0 compositingColors:(id)arg1 compositingFilterModes:(id)arg2 ;
-(struct UIEdgeInsets )_effectiveNonDirectionalContentInsets;
-(void)_enumerateAllBlendingViewsWithBlock:(id)arg0 ;
-(void)_enumerateBlendingBorderViewsWithBlock:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 ;
-(void)setRoundedCornerPosition:(NSUInteger)arg0 ;


@end


#endif