// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWFILEACTIVITY_H
#define WFWORKFLOWFILEACTIVITY_H

@class UIActivity, NSArray, UIBarButtonItem, UIView, WFFileRepresentation;


#import "WFPopoverModel.h"

@interface WFWorkflowFileActivity : UIActivity

@property (copy, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (nonatomic) NSUInteger arrowDirection; // ivar: _arrowDirection
@property (retain, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (retain, nonatomic) WFPopoverModel *popoverModel; // ivar: _popoverModel
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly, nonatomic) WFFileRepresentation *workflowFile; // ivar: _workflowFile


+(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)createViewController;
-(id)initWithPopoverModel:(id)arg0 ;
-(id)initWithSourceView:(id)arg0 sourceRect:(struct CGRect )arg1 barButtonItem:(id)arg2 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif