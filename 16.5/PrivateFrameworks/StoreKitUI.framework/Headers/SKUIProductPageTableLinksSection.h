// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTPAGETABLELINKSSECTION_H
#define SKUIPRODUCTPAGETABLELINKSSECTION_H

@class NSMutableArray;


#import "SKUIProductPageTableSection.h"
#import "SKUIProductPageItem.h"
#import "SKUIColorScheme.h"

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection {
    NSMutableArray *_actions;
    SKUIProductPageItem *_item;
    NSMutableArray *_titles;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)initWithItem:(id)arg0 clientContext:(id)arg1 askPermission:(BOOL)arg2 ;
-(id)selectionActionForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;


@end


#endif