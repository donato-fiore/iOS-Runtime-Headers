// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITORP33_88919392127B4CC4A9712067A850793640CONDITIONALSUBJECTPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITORP33_88919392127B4CC4A9712067A850793640CONDITIONALSUBJECTPARAMETERSUMMARYEDITOR_H



#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditorP33_88919392127B4CC4A9712067A850793640ConditionalSubjectParameterSummaryEditor : WFModuleSummaryEditor {
    ? homeServiceModal;
    ? pendingHome;
}




-(BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg0 ;
-(id)clearButtonMenuItemForSlotWithIdentifier:(id)arg0 ;
-(id)customMenuElementsForSlotWithIdentifier:(id)arg0 style:(NSUInteger)arg1 ;
-(id)initWithParameter:(id)arg0 arrayIndex:(NSInteger)arg1 processing:(BOOL)arg2 ;
-(id)stateByReplacingVariableFromCurrentState:(id)arg0 withVariable:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;


@end


#endif