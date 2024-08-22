// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTPAGETABLEINAPPPURCHASESSECTION_H
#define SKUIPRODUCTPAGETABLEINAPPPURCHASESSECTION_H

@class NSArray, NSNumberFormatter;


#import "SKUIProductPageTableSection.h"
#import "SKUIClientContext.h"
#import "SKUIProductPageTableExpandableHeaderView.h"
#import "SKUIColorScheme.h"

@interface SKUIProductPageTableInAppPurchasesSection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_inAppPurchases;
    NSNumberFormatter *_numberFormatter;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)headerViewForTableView:(id)arg0 ;
-(id)initWithInAppPurchases:(id)arg0 clientContext:(id)arg1 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)_reloadHeaderView;
-(void)setExpanded:(BOOL)arg0 ;


@end


#endif