// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWIDGETCELL_H
#define WFWIDGETCELL_H

@class NSTimer, UIImageView, UITextView, NSProgress, WFWorkflowDescriptor, NSString;
@protocol WFWidgetCellDelegate;


#import "WFFloatingView.h"
#import "WFFloatingViewConfiguration.h"
#import "WFWorkflowProgressView.h"

@interface WFWidgetCell : WFFloatingView

@property (retain, nonatomic) NSTimer *clearCompletedTimer; // ivar: _clearCompletedTimer
@property (nonatomic) BOOL completingSuccessfully; // ivar: _completingSuccessfully
@property (retain, nonatomic) WFFloatingViewConfiguration *currentConfiguration; // ivar: _currentConfiguration
@property (weak, nonatomic) NSObject<WFWidgetCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (nonatomic) CGSize iconViewSize; // ivar: _iconViewSize
@property (readonly, nonatomic) BOOL isRTL;
@property (nonatomic) NSInteger lastKnownWidgetFamily; // ivar: _lastKnownWidgetFamily
@property (retain, nonatomic) UITextView *nameView; // ivar: _nameView
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) WFWorkflowProgressView *progressView; // ivar: _progressView
@property (nonatomic) NSInteger runningState; // ivar: _runningState
@property (readonly, nonatomic) WFWorkflowDescriptor *workflowDescriptor; // ivar: _workflowDescriptor
@property (readonly, copy, nonatomic) NSString *workflowIdentifier; // ivar: _workflowIdentifier


-(BOOL)isMultiline;
-(BOOL)touchIsInView:(id)arg0 event:(id)arg1 ;
-(BOOL)touchesContainNonIndirectTouch:(id)arg0 ;
-(id)description;
-(id)init;
-(void)configureWithWorkflow:(id)arg0 cornerRadius:(CGFloat)arg1 family:(NSInteger)arg2 ;
-(void)dealloc;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetToEmptyState;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif