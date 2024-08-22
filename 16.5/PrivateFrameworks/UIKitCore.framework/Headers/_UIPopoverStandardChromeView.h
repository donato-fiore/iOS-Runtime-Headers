// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPOPOVERSTANDARDCHROMEVIEW_H
#define _UIPOPOVERSTANDARDCHROMEVIEW_H



#import "UIPopoverBackgroundView.h"
#import "UIColor.h"
#import "UIView.h"

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
    NSUInteger _arrowDirection;
    CGFloat _arrowOffset;
}


@property (copy, nonatomic) UIColor *arrowBackgroundColor; // ivar: _arrowBackgroundColor
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) UIColor *contentBlendingColor; // ivar: _contentBlendingColor
@property (nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled; // ivar: _debugMode
@property (copy, nonatomic) UIColor *popoverBackgroundColor; // ivar: _popoverBackgroundColor
@property (nonatomic) BOOL useShortMode; // ivar: useShortMode
@property (weak, nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow; // ivar: viewToMaskWhenContentExtendsOverArrow


+(CGFloat)arrowHeight;
+(Class)legacyChromeViewClass;
+(Class)standardChromeViewClass;
+(struct UIEdgeInsets )contentViewInsets;
-(BOOL)_shouldUseEqualContentInsetsOnAllSides;
-(BOOL)isPinned;
-(BOOL)isRightArrowPinnedToBottom;
-(BOOL)isRightArrowPinnedToTop;
-(BOOL)wouldPinForOffset:(CGFloat)arg0 ;
-(CGFloat)arrowOffset;
-(CGFloat)maxNonPinnedOffset;
-(CGFloat)minNonPinnedOffset;
-(NSInteger)_resolvedBackgroundStyle;
-(NSUInteger)arrowDirection;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_contentViewFrame;
-(struct UIEdgeInsets )safeAreaInsetsForContentView;
-(void)_updateArrowImages;
-(void)setArrowDirection:(NSUInteger)arg0 ;
-(void)setArrowOffset:(CGFloat)arg0 ;


@end


#endif