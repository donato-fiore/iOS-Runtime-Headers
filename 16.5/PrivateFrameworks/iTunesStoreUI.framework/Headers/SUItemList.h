// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUITEMLIST_H
#define SUITEMLIST_H

@class NSMutableArray, NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUItemList : NSObject <NSCopying>

 {
    NSMutableArray *_groups;
    NSDictionary *_hintText;
}


@property (nonatomic) BOOL ignoresEmptySections; // ivar: _ignoresEmptySections
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;


-(NSInteger)sectionIndexForIndexTitle:(id)arg0 atIndex:(NSInteger)arg1 ;
-(id)_groupAtExternalIndex:(NSInteger)arg0 ;
-(id)copyItems;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hintTextForKey:(id)arg0 ;
-(id)indexPathOfItem:(id)arg0 ;
-(id)indexPathOfItemWithIdentifier:(NSUInteger)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)itemsForSectionAtIndex:(NSInteger)arg0 ;
-(id)sectionItemForSectionAtIndex:(NSInteger)arg0 ;
-(void)_removeHiddenItemsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)insertItems:(id)arg0 atIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg0 ;
-(void)replaceItemAtIndexPath:(id)arg0 withItems:(id)arg1 ;
-(void)setHintText:(id)arg0 ;
-(void)setItems:(id)arg0 ;
-(void)setItemsFromPropertyList:(id)arg0 ;


@end


#endif