// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLEVIEWSEPARATORVIEW_H
#define _UITABLEVIEWSEPARATORVIEW_H



#import "UIView.h"
#import "UITableViewCell.h"
#import "UITableView.h"

@interface _UITableViewSeparatorView : UIView {
    UITableViewCell *_tableCell;
    UITableView *_table;
}




-(id)initWithFrame:(struct CGRect )arg0 withTable:(id)arg1 ;
-(id)initWithTableCell:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif