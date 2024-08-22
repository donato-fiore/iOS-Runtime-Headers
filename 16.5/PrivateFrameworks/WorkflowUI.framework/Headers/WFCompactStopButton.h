// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPACTSTOPBUTTON_H
#define WFCOMPACTSTOPBUTTON_H

@class UIButton, NSProgress, WFWorkflowProgressView;



@interface WFCompactStopButton : UIButton

@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) WFWorkflowProgressView *progressView; // ivar: _progressView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)handleTouchUpInside;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)popCompletedCheckmark;
-(void)popCompletedCheckmarkWithHaptic:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)transitionToCompleted:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif