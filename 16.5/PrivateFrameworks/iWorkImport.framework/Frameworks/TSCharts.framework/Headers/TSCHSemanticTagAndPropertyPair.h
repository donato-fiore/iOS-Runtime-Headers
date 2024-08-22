// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHSEMANTICTAGANDPROPERTYPAIR_H
#define TSCHSEMANTICTAGANDPROPERTYPAIR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCHStyleSemanticTag.h"

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying>



@property (readonly, nonatomic) int property; // ivar: _property
@property (readonly, copy, nonatomic) TSCHStyleSemanticTag *semanticTag; // ivar: _semanticTag


+(id)pairWithSemanticTag:(id)arg0 property:(int)arg1 ;
+(id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSemanticTag:(id)arg0 property:(int)arg1 ;


@end


#endif