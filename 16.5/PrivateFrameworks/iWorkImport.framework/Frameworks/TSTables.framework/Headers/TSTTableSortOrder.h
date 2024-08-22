// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLESORTORDER_H
#define TSTTABLESORTORDER_H

@class NSIndexSet, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTTableSortOrder : NSObject <NSCopying>



@property (readonly, nonatomic) NSIndexSet *baseColumnIndices;
@property (retain, nonatomic) NSIndexSet *cachedIndexes; // ivar: _cachedIndexes
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) NSUInteger ruleCount;
@property (readonly, nonatomic) NSArray *rules; // ivar: _rules
@property (readonly, nonatomic) int type; // ivar: _type


+(id)sortOrderWithBaseColumn:(struct TSUModelColumnIndex )arg0 direction:(int)arg1 type:(int)arg2 ;
+(id)sortOrderWithRules:(id)arg0 type:(int)arg1 ;
-(BOOL)containsAnyRulesInBaseColumns:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithRules:(id)arg0 type:(int)arg1 ;
-(id)sortOrderByAddingRule:(id)arg0 ;
-(id)sortOrderByChangingTypeTo:(int)arg0 ;
-(id)sortOrderByRemovingBaseColumnIndices:(id)arg0 ;
-(id)sortOrderByRemovingRuleAtIndex:(NSUInteger)arg0 ;
-(id)sortOrderByReplacingRuleAtIndex:(NSUInteger)arg0 withRule:(id)arg1 ;
-(id)sortOrderByReplacingRulesWithRules:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif