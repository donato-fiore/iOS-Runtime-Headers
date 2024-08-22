// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSDETAILPANE_H
#define TPSDETAILPANE_H

@class NSString, UITableView, UITableViewCell;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "TPSEditingPane.h"

@interface TPSDetailPane : TPSEditingPane <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (readonly, nonatomic) UITableViewCell *tableViewCell; // ivar: _tableViewCell


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferenceValue;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPreferenceValue:(id)arg0 ;


@end


#endif