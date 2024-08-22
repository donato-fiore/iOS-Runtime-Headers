// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDEBUGGINGIVARTABLEVIEWCELL_H
#define UIDEBUGGINGIVARTABLEVIEWCELL_H



#import "UITableViewCell.h"
#import "UIDebuggingIvar.h"
#import "UILabel.h"

@interface UIDebuggingIvarTableViewCell : UITableViewCell

@property (retain, nonatomic) UIDebuggingIvar *ivar; // ivar: _ivar
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *typeLabel; // ivar: _typeLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_prepareConstraints;
-(void)prepareForReuse;


@end


#endif