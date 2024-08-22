// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIMPLEPRESENTEDWORKFLOWSETTINGSVIEWCONTROLLERDELEGATE_H
#define WFSIMPLEPRESENTEDWORKFLOWSETTINGSVIEWCONTROLLERDELEGATE_H

@class NSString;
@protocol WFWorkflowSettingsViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface WFSimplePresentedWorkflowSettingsViewControllerDelegate : NSObject <WFWorkflowSettingsViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)settingsViewControllerWantsToKnowIfNewShortcutFlow:(id)arg0 ;
-(void)settingsViewControllerWantsWorkflowReload:(id)arg0 ;


@end


#endif