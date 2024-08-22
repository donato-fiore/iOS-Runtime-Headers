// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONLISTCOALESCINGCONTROLSCELL_H
#define NCNOTIFICATIONLISTCOALESCINGCONTROLSCELL_H

@class UIView, NSString;
@protocol NCNotificationListCoalescingControlsViewDelegate, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler, MTMaterialGrouping, NCNotificationListCoalescingControlsHandlerDelegate;


#import "NCNotificationListCoalescingControlsView.h"

@interface NCNotificationListCoalescingControlsCell : UIView <NCNotificationListCoalescingControlsViewDelegate, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler, MTMaterialGrouping>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) NSString *clearAllText; // ivar: _clearAllText
@property (retain, nonatomic) NCNotificationListCoalescingControlsView *coalescingControlsView; // ivar: _coalescingControlsView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<NCNotificationListCoalescingControlsHandlerDelegate> *handlerDelegate; // ivar: _handlerDelegate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL shouldShowCoalescingControls; // ivar: _shouldShowCoalescingControls
@property (readonly) Class superclass;


+(CGFloat)coalescingControlsCellHeightShowingCoalescingControls:(BOOL)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint )arg0 ;
-(id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg0 ;
-(void)_configureCoalescingControlsViewIfNecessary;
-(void)_layoutCoalescingControlsView;
-(void)layoutSubviews;
-(void)notificationListCoalescingControlsView:(id)arg0 didTransitionToClearState:(BOOL)arg1 ;
-(void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg0 ;
-(void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg0 ;
-(void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg0 ;
-(void)notificationListCoalescingControlsViewRequestsClear:(id)arg0 ;
-(void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg0 ;
-(void)notificationListCoalescingControlsViewRequestsRestack:(id)arg0 ;
-(void)resetClearButtonStateAnimated:(BOOL)arg0 ;


@end


#endif