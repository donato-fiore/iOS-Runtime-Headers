// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIATTRIBUTEDSTRINGVIEW_H
#define SKUIATTRIBUTEDSTRINGVIEW_H

@class UIView, NSLayoutManager, NSTextContainer, NSTextStorage, NSString, NSArray, UIColor;
@protocol SKUIReusableView, SKUILinkHandler;


#import "SKUIAttributedStringLayout.h"

@interface SKUIAttributedStringView : UIView <SKUIReusableView>

 {
    CGFloat _calculatedTopInset;
    NSLayoutManager *_layoutManager;
    BOOL _touchInside;
    _NSRange _trackingRange;
    BOOL _trackingTouch;
    CGRect _textBounds;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
}


@property (nonatomic) NSInteger badgePlacement; // ivar: _badgePlacement
@property (readonly, nonatomic) CGFloat baselineOffset;
@property (nonatomic) BOOL containsLinks; // ivar: _containsLinks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat firstBaselineOffset;
@property (nonatomic) NSInteger firstLineTopInset; // ivar: _firstLineTopInset
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIAttributedStringLayout *layout; // ivar: _layout
@property (weak, nonatomic) NSObject<SKUILinkHandler> *linkDelegate; // ivar: _linkDelegate
@property (copy, nonatomic) NSArray *requiredBadges; // ivar: _requiredBadges
@property (nonatomic) NSInteger stringTreatment; // ivar: _stringTreatment
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) BOOL textColorFollowsTintColor; // ivar: _textColorFollowsTintColor
@property (retain, nonatomic) UIColor *treatmentColor; // ivar: _treatmentColor
@property (readonly, nonatomic) BOOL usesTallCharacterSet;


+(struct CGSize )sizeWithLayout:(id)arg0 treatment:(NSInteger)arg1 ;
-(BOOL)_touchInsideLinkText:(struct CGPoint )arg0 linkTextRange:(struct _NSRange *)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadTopInset;
-(void)_setTouchInside:(BOOL)arg0 ;
-(void)_setTrackingTouch:(BOOL)arg0 ;
-(void)_setupTapLocatorContainer;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)viewWasRecycled;


@end


#endif