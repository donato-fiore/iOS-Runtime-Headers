// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPREFERENCEORDEREDSET_H
#define TSPREFERENCEORDEREDSET_H

@class NSMutableArray, NSMutableIndexSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSPReferenceOrderedSet : NSObject <NSCopying, NSMutableCopying>

 {
    NSUInteger _capacity;
    NSMutableArray *_items;
    NSMutableIndexSet *_objectsIndexSet;
    NSMutableIndexSet *_removedObjectsIndexSet;
    NSMutableIndexSet *_lazyReferencesIndexSet;
    NSMutableIndexSet *_removedLazyReferencesIndexSet;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count


-(BOOL)addItem:(id)arg0 ;
-(BOOL)containsItem:(id)arg0 ;
-(BOOL)removeItem:(id)arg0 ;
-(id)allObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif