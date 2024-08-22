// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIBROWSEHEADERCOLLECTIONVIEWCELL_H
#define SKUIBROWSEHEADERCOLLECTIONVIEWCELL_H

@class NSString;


#import "SKUICollectionViewCell.h"
#import "SKUIGroupedHeaderView.h"

@interface SKUIBrowseHeaderCollectionViewCell : SKUICollectionViewCell {
    SKUIGroupedHeaderView *_headerView;
}


@property (retain, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif