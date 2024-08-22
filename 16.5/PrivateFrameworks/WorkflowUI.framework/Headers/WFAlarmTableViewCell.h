// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFALARMTABLEVIEWCELL_H
#define WFALARMTABLEVIEWCELL_H

@class UITableViewCell, MTUIAlarmView;



@interface WFAlarmTableViewCell : UITableViewCell

@property (readonly, nonatomic) MTUIAlarmView *alarmView; // ivar: _alarmView
@property (nonatomic) BOOL enabled; // ivar: _enabled


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)refreshUI:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif