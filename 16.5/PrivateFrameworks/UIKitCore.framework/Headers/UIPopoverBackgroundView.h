// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPOPOVERBACKGROUNDVIEW_H
#define UIPOPOVERBACKGROUNDVIEW_H

@protocol UIPopoverBackgroundViewMethods;


#import "UIView.h"

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>



@property (nonatomic, setter=_setChromeHidden:) BOOL _chromeHidden; // ivar: __chromeHidden
@property (nonatomic) NSUInteger arrowDirection;
@property (nonatomic) CGFloat arrowOffset;


+(BOOL)wantsDefaultContentAppearance;
+(CGFloat)_contentViewCornerRadiusForArrowDirection:(NSUInteger)arg0 ;
+(CGFloat)arrowBase;
+(CGFloat)arrowHeight;
+(CGFloat)cornerRadius;
+(struct UIEdgeInsets )contentViewInsets;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(CGFloat)_shadowOpacity;
-(CGFloat)_shadowRadius;
-(NSInteger)backgroundStyle;
-(id)_shadowPath;
-(id)_shadowPathForRect:(struct CGRect )arg0 arrowDirection:(NSUInteger)arg1 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(struct CGRect )_backgroundContentViewFrame;
-(struct CGRect )_contentViewFrame;
-(struct CGSize )_shadowOffset;
-(struct UIEdgeInsets )_contentViewInsets;
-(struct UIEdgeInsets )_contentViewInsetsForArrowDirection:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )_shadowInsets;
-(void)_updateChrome;
-(void)_updateShadow;
-(void)layoutSubviews;


@end


#endif