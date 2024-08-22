// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWLISTCELLVISUALPROVIDER_H
#define _UICOLLECTIONVIEWLISTCELLVISUALPROVIDER_H


#import <Foundation/Foundation.h>

#import "UICollectionViewListCell.h"
#import "UIView.h"

@interface _UICollectionViewListCellVisualProvider : NSObject {
    UICollectionViewListCell *_cell;
}


@property (readonly, nonatomic) UIView *accessoryManagerContainerView;
@property (readonly, nonatomic) BOOL canFocusProgrammatically;
@property (readonly, nonatomic) NSInteger defaultFocusStyle;


-(id)initWithListCell:(id)arg0 ;
-(void)configureFocusedFloatingContentView:(id)arg0 ;


@end


#endif