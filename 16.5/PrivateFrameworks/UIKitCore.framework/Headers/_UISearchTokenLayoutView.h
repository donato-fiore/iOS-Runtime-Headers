// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHTOKENLAYOUTVIEW_H
#define _UISEARCHTOKENLAYOUTVIEW_H

@class UIView<_UIAtomTextViewAtomLayout>;


#import "UIView.h"

@interface _UISearchTokenLayoutView : UIView {
    CGFloat _verticalDelegateViewOrigin;
}


@property (retain, nonatomic) UIView<_UIAtomTextViewAtomLayout> *delegateView; // ivar: _delegateView
@property (nonatomic) BOOL isLastSearchToken; // ivar: _isLastSearchToken


-(BOOL)isEnabled;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegateView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)viewForLastBaselineLayout;
-(struct CGRect )boundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 ;
-(struct CGRect )selectionBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )atomInsets;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)updateMaskLayerForAttachmentRect:(struct CGRect )arg0 lineFragment:(struct CGRect )arg1 ;
-(void)updateMaskLayerForVisibleRect:(struct CGRect )arg0 ;


@end


#endif