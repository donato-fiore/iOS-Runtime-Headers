// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACTIONSHEETIOSDISMISSACTIONVIEW_H
#define UIACTIONSHEETIOSDISMISSACTIONVIEW_H

@class UIAlertControlleriOSActionSheetCancelBackgroundView, NSString;
@protocol UIActionSheetPresentationControllerDismissActionView;


#import "UIButton.h"

@interface UIActionSheetiOSDismissActionView : UIAlertControlleriOSActionSheetCancelBackgroundView <UIActionSheetPresentationControllerDismissActionView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL usesShortCompactVerticalLayout; // ivar: _usesShortCompactVerticalLayout


-(CGFloat)_heightForTraitCollection:(id)arg0 ;
-(id)initWithContinuousCornerRadius:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupDismissButton;


@end


#endif