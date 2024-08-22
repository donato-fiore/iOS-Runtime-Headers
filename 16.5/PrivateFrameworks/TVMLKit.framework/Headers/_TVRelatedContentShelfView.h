// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVRELATEDCONTENTSHELFVIEW_H
#define _TVRELATEDCONTENTSHELFVIEW_H

@class UIView;


#import "_TVRelatedWrappingView.h"

@interface _TVRelatedContentShelfView : UIView {
    UIView *_lastFocusedView;
    _TVRelatedWrappingView *_relatedWrappingView;
}


@property (nonatomic) CGFloat relatedHeight; // ivar: _relatedHeight
@property (retain, nonatomic) UIView *relatedView; // ivar: _relatedView
@property (weak, nonatomic) UIView *shelfView; // ivar: _shelfView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutRelatedView;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif