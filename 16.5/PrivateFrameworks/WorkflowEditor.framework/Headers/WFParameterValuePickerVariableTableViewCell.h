// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPARAMETERVALUEPICKERVARIABLETABLEVIEWCELL_H
#define WFPARAMETERVALUEPICKERVARIABLETABLEVIEWCELL_H

@class UITableViewCell, WFIconHostingView, UILabel;



@interface WFParameterValuePickerVariableTableViewCell : UITableViewCell

@property (readonly, nonatomic) WFIconHostingView *iconView; // ivar: _iconView
@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)tintColorDidChange;
-(void)updateWithName:(id)arg0 icon:(id)arg1 ;


@end


#endif