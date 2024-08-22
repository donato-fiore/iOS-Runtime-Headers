// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWITEMPROVIDER_H
#define WFWORKFLOWITEMPROVIDER_H

@class UIActivityItemProvider, WFShortcutExporter, WFWorkflow, NSURL;
@protocol WFUserInterfaceHost;



@interface WFWorkflowItemProvider : UIActivityItemProvider

@property (retain, nonatomic) WFShortcutExporter *shortcutExporter; // ivar: _shortcutExporter
@property (nonatomic) BOOL shouldShowSuccessCheckmark; // ivar: _shouldShowSuccessCheckmark
@property (readonly, nonatomic) NSObject<WFUserInterfaceHost> *userInterface; // ivar: _userInterface
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (retain, nonatomic) NSURL *workflowURL; // ivar: _workflowURL


-(BOOL)hasWorkflowURL;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithWorkflow:(id)arg0 userInterface:(id)arg1 placeholderItem:(id)arg2 ;
-(id)item;
-(id)shareShortcutEventForActivityType:(id)arg0 ;
-(void)generateItemURL;


@end


#endif