// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAUTOMATIONLISTCELL_H
#define WFAUTOMATIONLISTCELL_H

@class UITableViewCell, WFConfiguredTrigger, UILabel, HFTriggerItem, NSString, WFWorkflow;


#import "WFAutomationSummaryIconsView.h"

@interface WFAutomationListCell : UITableViewCell

@property (retain, nonatomic) WFConfiguredTrigger *configuredTrigger; // ivar: _configuredTrigger
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) HFTriggerItem *homeTrigger; // ivar: _homeTrigger
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) WFAutomationSummaryIconsView *summaryIconsView; // ivar: _summaryIconsView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)prepareForReuse;
-(void)setTitle:(id)arg0 description:(id)arg1 triggerIcon:(id)arg2 triggerTintColor:(id)arg3 triggerCornerRadius:(CGFloat)arg4 actionIcons:(id)arg5 ;
-(void)updateUI;


@end


#endif