// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITOR31TEXTINPUTPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITOR31TEXTINPUTPARAMETERSUMMARYEDITOR_H

@protocol WFVariableProvider;


#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditor31TextInputParameterSummaryEditor : WFModuleSummaryEditor {
    ? autocompleteDataSource;
    ? textAttachmentToEdit;
    ? isPickingActionOutput;
    ? commitState;
    ? timerSubscription;
    ? autocompleteCoordinator;
}


@property (nonatomic, weak) NSObject<WFVariableProvider> *variableProvider;


+(NSUInteger)variableResultTypeForParameter:(id)arg0 ;
-(id)initWithParameter:(id)arg0 arrayIndex:(NSInteger)arg1 processing:(BOOL)arg2 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)textEntryDidCopyWithOriginalBlock:(id)arg0 ;
-(void)textEntryDidCutWithOriginalBlock:(id)arg0 ;
-(void)textEntryDidFinish;
-(void)textEntryDidPasteWithOriginalBlock:(id)arg0 ;
-(void)textEntryTextDidChange:(id)arg0 ;
-(void)textEntryWillBegin:(id)arg0 allowMultipleLines:(*BOOL)arg1 ;


@end


#endif