// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWIZARDNAMEPRESENTATIONMANAGER_H
#define WFWIZARDNAMEPRESENTATIONMANAGER_H

@class UINavigationController;

#import <Foundation/Foundation.h>

#import "WFWorkflowWizardNameViewController.h"

@interface WFWizardNamePresentationManager : NSObject

@property (readonly, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly, nonatomic) BOOL presentsModally; // ivar: _presentsModally
@property (readonly, nonatomic) WFWorkflowWizardNameViewController *wizardNameViewController; // ivar: _wizardNameViewController


-(id)initWithNavigationController:(id)arg0 wizardNameViewController:(id)arg1 ;
-(void)dismiss;
-(void)present;
-(void)presentModal;


@end


#endif