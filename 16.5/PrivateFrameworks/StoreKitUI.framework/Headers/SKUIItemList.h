// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIITEMLIST_H
#define SKUIITEMLIST_H

@class NSMutableDictionary, NSString, NSArray, NSSet;
@protocol SKUICacheCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIItemList : NSObject <SKUICacheCoding, NSCopying>



@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *seeAllTitle; // ivar: _seeAllTitle
@property (copy, nonatomic) NSString *seeAllURLString; // ivar: _seeAllURLString
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSSet *unavailableItemIdentifiers; // ivar: _unavailableItemIdentifiers


-(BOOL)isUnavailableItemIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)removeItemsAtIndexes:(id)arg0 ;


@end


#endif