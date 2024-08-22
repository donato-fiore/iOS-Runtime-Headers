// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYIOSMENUCOLLECTIONCONFIGURATION_H
#define VUILIBRARYIOSMENUCOLLECTIONCONFIGURATION_H

@class UICollectionViewCell;


#import "VUICollectionConfiguration.h"

@interface VUILibraryiOSMenuCollectionConfiguration : VUICollectionConfiguration

@property (nonatomic) BOOL isDesignedForIpadEnabled; // ivar: _isDesignedForIpadEnabled
@property (retain, nonatomic) UICollectionViewCell *menuItemSizingCell; // ivar: _menuItemSizingCell


-(CGFloat)minimumLineSpacing;
-(Class)classForCollectionViewCell;
-(id)_layout;
-(id)configureCollectionViewCellForCollectionView:(id)arg0 ForItem:(id)arg1 AtIndexPath:(id)arg2 ;
-(id)configureSizingCellForItem:(id)arg0 AtIndexPath:(id)arg1 ;
-(id)generateCollectionView;
-(id)init;


@end


#endif