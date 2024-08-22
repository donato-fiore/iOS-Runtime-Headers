// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREVIEWPRESENTATIONEFFECTVIEW_H
#define _UIPREVIEWPRESENTATIONEFFECTVIEW_H



#import "UIView.h"
#import "UIColor.h"

@interface _UIPreviewPresentationEffectView : UIView

@property (nonatomic) CGFloat blurRadius;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat shadowAlpha;
@property (copy, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) CGFloat shadowRadius;
@property (nonatomic) BOOL shouldRasterizeForTransition; // ivar: _shouldRasterizeForTransition


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif