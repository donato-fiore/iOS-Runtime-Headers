// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIALERTCONTROLLERVISUALSTYLEACTIONSHEET_H
#define UIALERTCONTROLLERVISUALSTYLEACTIONSHEET_H



#import "UIAlertControllerVisualStyle.h"

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle



+(NSInteger)interfaceActionPresentationStyle;
+(void)positionContentsOfAlertController:(id)arg0 alertContentView:(id)arg1 availableSpaceView:(id)arg2 visualStyle:(id)arg3 updatableConstraints:(id)arg4 ;
-(BOOL)hideCancelAction:(id)arg0 inAlertController:(id)arg1 ;
-(BOOL)placementAvoidsKeyboard;
-(CGFloat)_spacingBetweenDismissButtonAndContent;
-(CGFloat)marginAboveMessageLabelFirstBaseline;
-(CGFloat)marginAboveTitleLabelFirstBaseline;
-(CGFloat)marginBelowLastLabelLastBaseline;
-(CGFloat)marginBelowMessageLabelLastBaseline;
-(CGFloat)marginBelowTitleLabelLastBaseline;
-(CGFloat)maximumWidth;
-(CGFloat)transitionDurationForPresentation:(BOOL)arg0 ofAlertController:(id)arg1 ;
-(NSInteger)permittedActionLayoutDirection;
-(id)messageLabelColor;
-(id)messageLabelFont;
-(id)titleLabelColor;
-(id)titleLabelFont;
-(id)vibrancyEffectForTitleAndMessageLabel;
-(struct UIEdgeInsets )contentInsetsForContainerView:(id)arg0 ;
-(void)animateAlertControllerView:(id)arg0 ofAlertController:(id)arg1 forPresentation:(BOOL)arg2 inContainerView:(id)arg3 descendantOfContainerView:(id)arg4 duration:(CGFloat)arg5 completionBlock:(id)arg6 ;


@end


#endif