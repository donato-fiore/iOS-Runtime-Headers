// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV14WORKFLOWEDITOR16TAGFIELDHOSTVIEW11COORDINATOR_H
#define _TTCV14WORKFLOWEDITOR16TAGFIELDHOSTVIEW11COORDINATOR_H

@protocol WFVariableUIDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV14WorkflowEditor16TagFieldHostView11Coordinator : NSObject <WFVariableUIDelegate>

 {
    ? hostView;
}




-(id)init;
// -(void)revealAction:(id)arg0 preScrollHandler:(id)arg1 goBackHandler:(unk)arg2 scrolledAwayHandler:(id)arg3  ;
-(void)showActionOutputPickerAllowingShortcutInput:(BOOL)arg0 variableProvider:(id)arg1 completionHandler:(id)arg2 ;
-(void)showParameterEditingHint:(id)arg0 ;


@end


#endif