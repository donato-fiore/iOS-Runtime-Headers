// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHOMEACCESSORYPICKERPARAMETEREDITINGCONTROLLER_H
#define WFHOMEACCESSORYPICKERPARAMETEREDITINGCONTROLLER_H

@class NSString;
@protocol HUTriggerActionBuilderEditorDelegate, HUTriggerEditorDelegate;


#import "WFUIKitParameterEditingController.h"

@interface WFHomeAccessoryPickerParameterEditingController : WFUIKitParameterEditingController <HUTriggerActionBuilderEditorDelegate, HUTriggerEditorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)actionBuilderEditor:(id)arg0 didFinishWithTriggerActionSetBuilder:(id)arg1 ;
-(void)createViewControllerWithInitialState:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishWithActionSets:(id)arg0 home:(id)arg1 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;


@end


#endif