// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITOR36WFPOSTERPICKERPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITOR36WFPOSTERPICKERPARAMETERSUMMARYEDITOR_H

@protocol PRUIModalControllerDelegate;


#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditor36WFPosterPickerParameterSummaryEditor : WFModuleSummaryEditor <PRUIModalControllerDelegate>

 {
    ? presentedViewController;
    ? controller;
}




-(id)initWithParameter:(id)arg0 arrayIndex:(NSInteger)arg1 processing:(BOOL)arg2 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)modalController:(id)arg0 didDismissSheetWithResponse:(id)arg1 ;


@end


#endif