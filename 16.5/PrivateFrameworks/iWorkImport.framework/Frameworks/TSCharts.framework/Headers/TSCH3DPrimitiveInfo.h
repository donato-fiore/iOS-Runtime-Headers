// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DPRIMITIVEINFO_H
#define TSCH3DPRIMITIVEINFO_H


#import <Foundation/Foundation.h>

#import "TSCH3DResource.h"

@interface TSCH3DPrimitiveInfo : NSObject

@property (readonly, nonatomic) unsigned int count; // ivar: _count
@property (readonly, nonatomic) BOOL hasCount;
@property (readonly, nonatomic) BOOL hasEmptyCount;
@property (readonly, nonatomic) BOOL hasOffset;
@property (readonly, retain, nonatomic) TSCH3DResource *indices; // ivar: _indices
@property (readonly, nonatomic) int offset; // ivar: _offset
@property (readonly, nonatomic) int type; // ivar: _type


+(id)infoWithType:(int)arg0 ;
+(id)infoWithType:(int)arg0 offset:(int)arg1 count:(unsigned int)arg2 indices:(id)arg3 ;
-(id)initWithType:(int)arg0 ;
-(id)initWithType:(int)arg0 offset:(int)arg1 count:(unsigned int)arg2 indices:(id)arg3 ;


@end


#endif