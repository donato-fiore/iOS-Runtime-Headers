// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPEVIEWCONTROLLER_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPEVIEWCONTROLLER_H

@class UIViewController, NSDate, NSString;
@protocol NCNotificationListBaseComponent, NCSupplementaryViewPrototypeRecipeViewControllerDelegate;


#import "NCNotificationListSupplementaryViewConfiguration.h"

@interface NCSupplementaryViewPrototypeRecipeViewController : UIViewController <NCNotificationListBaseComponent>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic) NCNotificationListSupplementaryViewConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSDate *dateModified; // ivar: _dateModified
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCSupplementaryViewPrototypeRecipeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


+(id)presentableTypes;
+(id)title;
-(BOOL)_canShowWhileLocked;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)_testActionNotImplementedBlock:(SEL)arg0 ;
-(id)init;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)clearAll;
-(void)updateConfiguration:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif