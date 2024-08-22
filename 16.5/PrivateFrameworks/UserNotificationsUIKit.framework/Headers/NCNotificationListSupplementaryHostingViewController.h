// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONLISTSUPPLEMENTARYHOSTINGVIEWCONTROLLER_H
#define NCNOTIFICATIONLISTSUPPLEMENTARYHOSTINGVIEWCONTROLLER_H

@class UIViewController, NSString, UIColor, PLPlatterView;
@protocol NCNotificationListSupplementaryHostingViewDelegate, BSDescriptionProviding, NCMaterialDisplaying, NCNotificationListDimmable, NCNotificationListPresentable, PLContentSizeCategoryAdjusting, NCNotificationListSupplementaryHostingViewControllerDelegate;


#import "NCNotificationListSupplementaryViewConfiguration.h"

@interface NCNotificationListSupplementaryHostingViewController : UIViewController <NCNotificationListSupplementaryHostingViewDelegate, BSDescriptionProviding, NCMaterialDisplaying, NCNotificationListDimmable, NCNotificationListPresentable, PLContentSizeCategoryAdjusting>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NCNotificationListSupplementaryViewConfiguration *configuration; // ivar: _configuration
@property (nonatomic, getter=isContentVisible) BOOL contentVisible; // ivar: _contentVisible
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListSupplementaryHostingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *hostedViewController; // ivar: _hostedViewController
@property (nonatomic, getter=isHostedViewControllerUserInteractionEnabled) BOOL hostedViewControllerUserInteractionEnabled;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (nonatomic) NSInteger materialRecipe; // ivar: _materialRecipe
@property (copy, nonatomic) UIColor *materialTintColor; // ivar: _materialTintColor
@property (readonly, nonatomic) PLPlatterView *platterView;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


-(BOOL)_canShowWhileLocked;
-(BOOL)_useDefaultLookForColor:(id)arg0 materialRecipe:(NSInteger)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSInteger)overrideUserInterfaceStyle;
-(id)_hostingView;
-(id)_logDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithHostedViewController:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGSize )preferredContentSize;
-(void)_configureAuxiliaryViewAnimated:(BOOL)arg0 ;
-(void)_configureHostingViewAnimated:(BOOL)arg0 ;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)_showAuxiliaryOptionsView:(BOOL)arg0 ;
-(void)configureStackDimmingForTransform:(struct CGAffineTransform )arg0 ;
-(void)loadView;
-(void)supplementaryHostingViewWasTapped:(id)arg0 ;


@end


#endif