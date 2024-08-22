// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIALERTCONTROLLERVISUALSTYLEACTIONSHEETINLINE_H
#define UIALERTCONTROLLERVISUALSTYLEACTIONSHEETINLINE_H



#import "UIAlertControllerVisualStyleActionSheet.h"
#import "UIView.h"
#import "UIVisualEffectView.h"
#import "_UIPreviewPresentationEffectView.h"

@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet

@property (nonatomic) BOOL actionsReversed; // ivar: _actionsReversed
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIVisualEffectView *revealEffectView; // ivar: _revealEffectView
@property (retain, nonatomic) _UIPreviewPresentationEffectView *sourceViewSnapshot; // ivar: _sourceViewSnapshot


+(NSInteger)interfaceActionPresentationStyle;
+(void)positionContentsOfAlertController:(id)arg0 alertContentView:(id)arg1 availableSpaceView:(id)arg2 visualStyle:(id)arg3 updatableConstraints:(id)arg4 ;
-(BOOL)_shouldReverseActions;
-(BOOL)hideCancelAction:(id)arg0 inAlertController:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)placementAvoidsKeyboard;
-(BOOL)shouldOccludeDuringPresentation;
-(BOOL)shouldPreserveRespondersAcrossWindows;
-(BOOL)transitionOfType:(NSInteger)arg0 shouldBeInteractiveForAlertController:(id)arg1 ;
-(CGFloat)_actionDescriptiveTextFontSize;
-(CGFloat)minimumWidth;
-(CGFloat)transitionDurationForPresentation:(BOOL)arg0 ofAlertController:(id)arg1 ;
-(NSInteger)permittedActionLayoutDirection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dimmingViewForAlertController:(id)arg0 ;
-(id)interactionProgressForTransitionOfType:(NSInteger)arg0 forAlertController:(id)arg1 ;
-(id)tintColorForAlertController:(id)arg0 ;
-(struct CGRect )_sourceRectForAlertController:(id)arg0 inContainerView:(id)arg1 ;
-(void)animateAlertControllerView:(id)arg0 ofAlertController:(id)arg1 forPresentation:(BOOL)arg2 inContainerView:(id)arg3 descendantOfContainerView:(id)arg4 duration:(CGFloat)arg5 completionBlock:(id)arg6 ;
-(void)animateRevealOfAlertControllerView:(id)arg0 alertController:(id)arg1 inContainerView:(id)arg2 duration:(CGFloat)arg3 completionBlock:(id)arg4 ;


@end


#endif