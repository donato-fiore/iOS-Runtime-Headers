// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAGALLERYITEMSELECTION_H
#define TSAGALLERYITEMSELECTION_H

@class TSKSelection, NSOrderedSet;


#import "TSAGalleryItem.h"

@interface TSAGalleryItemSelection : TSKSelection

@property (readonly, nonatomic) TSAGalleryItem *displayedItem; // ivar: _displayedItem
@property (readonly, nonatomic) NSOrderedSet *items; // ivar: _items


+(Class)archivedSelectionClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)UUIDDescription;
-(id)description;
-(id)initWithItems:(id)arg0 displayedItem:(id)arg1 ;


@end


#endif