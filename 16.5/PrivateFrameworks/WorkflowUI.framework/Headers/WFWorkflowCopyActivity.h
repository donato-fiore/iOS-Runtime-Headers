// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWCOPYACTIVITY_H
#define WFWORKFLOWCOPYACTIVITY_H

@class UIActivity, NSURL;



@interface WFWorkflowCopyActivity : UIActivity

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSURL *excludedURL; // ivar: _excludedURL


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)initWithExcludedURL:(id)arg0 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif