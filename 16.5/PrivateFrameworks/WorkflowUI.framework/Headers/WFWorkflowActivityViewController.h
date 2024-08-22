// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWACTIVITYVIEWCONTROLLER_H
#define WFWORKFLOWACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSString, WFWorkflow, WFFileRepresentation;
@protocol UIActivityViewControllerObjectManipulationDelegate;


#import "WFWorkflowLinkProvider.h"
#import "WFSignedShortcutFileProvider.h"

@interface WFWorkflowActivityViewController : UIActivityViewController <UIActivityViewControllerObjectManipulationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFWorkflowLinkProvider *linkProvider; // ivar: _linkProvider
@property (nonatomic) NSInteger selectedDestination; // ivar: _selectedDestination
@property (nonatomic) NSInteger selectedMode; // ivar: _selectedMode
@property (retain, nonatomic) WFSignedShortcutFileProvider *signedShortcutFileProvider; // ivar: _signedShortcutFileProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (retain, nonatomic) WFFileRepresentation *workflowFile; // ivar: _workflowFile


-(BOOL)_customizationAvailableForActivityViewController:(id)arg0 ;
-(id)_customizationGroupsForActivityViewController:(id)arg0 ;
-(id)generateSharingDestinationGroup;
-(id)generateSharingModeGroup;
-(id)initWithWorkflow:(id)arg0 applicationActivities:(id)arg1 ;
-(void)_customizationsDidChange;


@end


#endif