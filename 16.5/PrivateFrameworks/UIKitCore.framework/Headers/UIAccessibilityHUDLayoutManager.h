// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYHUDLAYOUTMANAGER_H
#define UIACCESSIBILITYHUDLAYOUTMANAGER_H


#import <Foundation/Foundation.h>


@interface UIAccessibilityHUDLayoutManager : NSObject



-(CGFloat)_imageCenterToTopForHUD:(id)arg0 preferredSizeForLabel:(struct CGSize )arg1 ;
-(NSUInteger)_actualNumberOfLinesForLabelInHUD:(id)arg0 preferredSize:(struct CGSize )arg1 ;
-(id)containerViewForHUD:(id)arg0 ;
-(id)itemContainerViewForHUD:(id)arg0 ;
-(id)labelFontForHUD:(id)arg0 ;
-(struct CGRect )imageViewFrameForHUD:(id)arg0 preferredSizeForLabel:(struct CGSize )arg1 ;
-(struct CGRect )labelFrameForHUD:(id)arg0 preferredSize:(struct CGSize )arg1 ;
-(struct CGRect )layoutBoundsForHUD:(id)arg0 ;
-(struct CGSize )imageViewSizeForHUD:(id)arg0 preferredSizeForLabel:(struct CGSize )arg1 ;
-(struct CGSize )minimumUnscaledSizeForHUD:(id)arg0 preferredLabelSize:(struct CGSize )arg1 ;
-(struct CGSize )preferredSizeForLabelInHUD:(id)arg0 maximumWidth:(CGFloat)arg1 ;
-(struct CGSize )unscaledSizeForHUD:(id)arg0 containingSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )imageInsetsForHUD:(id)arg0 ;
-(void)layoutSubviewsOfHUD:(id)arg0 ;


@end


#endif