// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISELECTORSET_H
#define _UISELECTORSET_H

@class NSHashTable;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UISelectorSet : NSObject <NSCopying>

 {
    NSHashTable *_hash;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)containsSelector:(SEL)arg0 ;
-(BOOL)containsSet:(id)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithHash:(id)arg0 ;
-(id)initWithSelectors:(SEL)arg0 ;
-(void)addSelector:(SEL)arg0 ;
-(void)enumerateSelectorsUsingBlock:(id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)removeSelector:(SEL)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif