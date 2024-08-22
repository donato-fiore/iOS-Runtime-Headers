// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITORP33_460410A17E70035D97A591FA113148C318PRESENTERCONTAINER_H
#define _TTC14WORKFLOWEDITORP33_460410A17E70035D97A591FA113148C318PRESENTERCONTAINER_H

@protocol WFStandaloneModuleSummaryPresenterDelegate, WFVariableUIDelegate;

#import <Foundation/Foundation.h>


@interface _TtC14WorkflowEditorP33_460410A17E70035D97A591FA113148C318PresenterContainer : NSObject <WFStandaloneModuleSummaryPresenterDelegate, WFVariableUIDelegate>

 {
    ? presenter;
    ? coordinator;
    ? onShowActionOutputPicker;
    ? onRevealAction;
    ? onFinish;
    ? parameterEditingHint;
}




-(id)init;
-(void)moduleSummaryPresenter:(id)arg0 didCommitParameterState:(id)arg1 ;
-(void)moduleSummaryPresenter:(id)arg0 didStageParameterState:(id)arg1 ;
-(void)moduleSummaryPresenterDidFinish:(id)arg0 ;
// -(void)revealAction:(id)arg0 preScrollHandler:(id)arg1 goBackHandler:(unk)arg2 scrolledAwayHandler:(id)arg3  ;
-(void)showActionOutputPickerAllowingShortcutInput:(BOOL)arg0 variableProvider:(id)arg1 completionHandler:(id)arg2 ;
-(void)showParameterEditingHint:(id)arg0 ;


@end


#endif