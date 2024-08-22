// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUILOCKUPITEMTABLEVIEWCELL_H
#define SKUILOCKUPITEMTABLEVIEWCELL_H



#import "SKUIItemTableViewCell.h"
#import "SKUILockupItemCellLayout.h"

@interface SKUILockupItemTableViewCell : SKUIItemTableViewCell

@property (readonly, nonatomic) SKUILockupItemCellLayout *layout; // ivar: _layout


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureForItem:(id)arg0 clientContext:(id)arg1 rowIndex:(NSInteger)arg2 ;


@end


#endif