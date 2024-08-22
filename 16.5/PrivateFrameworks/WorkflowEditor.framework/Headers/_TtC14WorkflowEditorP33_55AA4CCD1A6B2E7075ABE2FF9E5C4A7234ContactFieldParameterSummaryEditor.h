// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITORP33_55AA4CCD1A6B2E7075ABE2FF9E5C4A7234CONTACTFIELDPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITORP33_55AA4CCD1A6B2E7075ABE2FF9E5C4A7234CONTACTFIELDPARAMETERSUMMARYEDITOR_H



#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditorP33_55AA4CCD1A6B2E7075ABE2FF9E5C4A7234ContactFieldParameterSummaryEditor : WFModuleSummaryEditor {
    ? modal;
    ? lastValue;
}




-(id)initWithParameter:(id)arg0 arrayIndex:(NSInteger)arg1 processing:(BOOL)arg2 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;


@end


#endif