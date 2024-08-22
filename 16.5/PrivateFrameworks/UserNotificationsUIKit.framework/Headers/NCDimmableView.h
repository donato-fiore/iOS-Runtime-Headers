// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCDIMMABLEVIEW_H
#define NCDIMMABLEVIEW_H

@class UIView<PLContentSizeManaging><NCNotificationListDimmable>, NSString, UIView;
@protocol PLContentSizeManaging, NCNotificationListDimmable;


#import "NCHitTestTransparentView.h"
#import "NCNotificationListStackDimmingOverlayView.h"
#import "NCNotificationListStackBackgroundDimmingView.h"

@interface NCDimmableView : NCHitTestTransparentView <PLContentSizeManaging, NCNotificationListDimmable>

 {
    NCNotificationListStackDimmingOverlayView *_stackDimmingOverlayView;
    CGAffineTransform _transform;
}


@property (weak, nonatomic) NCNotificationListStackBackgroundDimmingView *backgroundDimmingView; // ivar: _backgroundDimmingView
@property (weak, nonatomic) UIView<PLContentSizeManaging><NCNotificationListDimmable> *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *viewToFadeWhenDimming; // ivar: _viewToFadeWhenDimming


-(id)_effectiveContentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)configureStackDimmingForTransform:(struct CGAffineTransform )arg0 ;


@end


#endif