// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPACTSTATUSVIEWCONTROLLER_H
#define WFCOMPACTSTATUSVIEWCONTROLLER_H

@class WFDialogAttribution, NSProgress;


#import "WFCompactPlatterViewController.h"
#import "WFCompactStopButton.h"

@interface WFCompactStatusViewController : WFCompactPlatterViewController

@property (retain, nonatomic) WFDialogAttribution *attribution; // ivar: _attribution
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) WFCompactStopButton *stopButton; // ivar: _stopButton


-(void)loadView;
-(void)popCompletedCheckmark;
-(void)transitionToCompleted:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif