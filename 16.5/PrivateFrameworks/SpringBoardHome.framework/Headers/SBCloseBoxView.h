// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCLOSEBOXVIEW_H
#define SBCLOSEBOXVIEW_H

@class UITapGestureRecognizer, NSString;
@protocol UIPointerInteractionDelegate, SBCloseBoxViewDelegate, SBIconListLayout;


#import "SBHomeScreenButton.h"

@interface SBCloseBoxView : SBHomeScreenButton <UIPointerInteractionDelegate>



@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer; // ivar: _actionTapGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBCloseBoxViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets hitTestPadding;
@property (retain, nonatomic) NSObject<SBIconListLayout> *listLayout; // ivar: _listLayout
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldTrack;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )backgroundInsets;


@end


#endif