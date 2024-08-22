// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKDIALOGVIEWCONTROLLER_H
#define WFLINKDIALOGVIEWCONTROLLER_H

@class WFLinkSnippetDialogRequest, UIViewController;


#import "WFCompactDialogViewController.h"

@interface WFLinkDialogViewController : WFCompactDialogViewController

@property (readonly, nonatomic) WFLinkSnippetDialogRequest *request;
@property (retain, nonatomic) UIViewController *snippetViewController; // ivar: _snippetViewController


-(CGFloat)contentHeightForWidth:(CGFloat)arg0 withMaximumVisibleHeight:(CGFloat)arg1 ;
-(id)snippetInteractedResponseWithURL:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif