// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIITEMROOMTABLEVIEWCELL_H
#define SKUIITEMROOMTABLEVIEWCELL_H



#import "SKUIItemTableViewCell.h"
#import "SKUIItemBrowseCellLayout.h"

@interface SKUIItemRoomTableViewCell : SKUIItemTableViewCell

@property (readonly, nonatomic) SKUIItemBrowseCellLayout *layout; // ivar: _layout


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureForItem:(id)arg0 clientContext:(id)arg1 rowIndex:(NSInteger)arg2 ;


@end


#endif