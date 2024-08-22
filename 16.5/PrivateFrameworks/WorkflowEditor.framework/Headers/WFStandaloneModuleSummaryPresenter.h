// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSTANDALONEMODULESUMMARYPRESENTER_H
#define WFSTANDALONEMODULESUMMARYPRESENTER_H

@class NSString;
@protocol WFModuleSummaryEditorDelegate, WFStandaloneModuleSummaryPresenterDelegate, WFParameterState;

#import <Foundation/Foundation.h>

#import "WFModuleSummaryEditor.h"
#import "WFModalPresentationAnchor.h"
#import "WFSlotIdentifier.h"

@interface WFStandaloneModuleSummaryPresenter : NSObject <WFModuleSummaryEditorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFStandaloneModuleSummaryPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFModuleSummaryEditor *editor; // ivar: _editor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<WFParameterState> *initialState; // ivar: _initialState
@property (retain, nonatomic) WFModalPresentationAnchor *presentationAnchor; // ivar: _presentationAnchor
@property (retain, nonatomic) NSObject<WFStandaloneModuleSummaryPresenterDelegate> *retainedDelegate; // ivar: _retainedDelegate
@property (readonly, nonatomic) WFSlotIdentifier *slotIdentifier; // ivar: _slotIdentifier
@property (readonly) Class superclass;


-(id)initWithParameter:(id)arg0 slotIdentifier:(id)arg1 initialState:(id)arg2 isProcessing:(BOOL)arg3 variableProvider:(id)arg4 variableUIDelegate:(id)arg5 presentationAnchor:(id)arg6 allowsPickingVariables:(BOOL)arg7 ;
-(id)initialStateForSummaryEditor:(id)arg0 ;
-(id)menu;
-(void)dismiss;
-(void)present;
-(void)releaseDelegate;
-(void)retainDelegate;
-(void)summaryEditor:(id)arg0 didCommitParameterState:(id)arg1 ;
-(void)summaryEditor:(id)arg0 didRequestEditingSlotWithIdentifier:(id)arg1 ;
-(void)summaryEditor:(id)arg0 didStageParameterState:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg0 returnToKeyboard:(BOOL)arg1 withTextAttachmentToEdit:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg0 ;


@end


#endif