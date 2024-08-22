// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPARAMETERVALUEPICKERTABLEVIEWCELLCONTENTVIEW_H
#define WFPARAMETERVALUEPICKERTABLEVIEWCELLCONTENTVIEW_H

@class UIView, UIStackView, NSString, UIImageView, WFIconHostingView, UISwitch, UILabel;
@protocol UIContentView;


#import "WFParameterValuePickerTableViewCellConfiguration.h"

@interface WFParameterValuePickerTableViewCellContentView : UIView <UIContentView>



@property (copy, nonatomic) WFParameterValuePickerTableViewCellConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (readonly, nonatomic) WFIconHostingView *iconView; // ivar: _iconView
@property (readonly, nonatomic) UIStackView *labelsStackView; // ivar: _labelsStackView
@property (readonly, nonatomic) UISwitch *selectedSwitch; // ivar: _selectedSwitch
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithConfiguration:(id)arg0 ;
-(void)applyConfiguration:(id)arg0 ;
-(void)selectedSwitchDidToggle:(id)arg0 ;


@end


#endif