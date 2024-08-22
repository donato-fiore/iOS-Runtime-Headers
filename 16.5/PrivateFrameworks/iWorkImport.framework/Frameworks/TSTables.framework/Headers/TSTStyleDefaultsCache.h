// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTSTYLEDEFAULTSCACHE_H
#define TSTSTYLEDEFAULTSCACHE_H

@class TSUIntegerKeyDictionary;

#import <Foundation/Foundation.h>

#import "TSTTableInfo.h"

@interface TSTStyleDefaultsCache : NSObject

@property (retain, nonatomic) TSUIntegerKeyDictionary *cellStyleHandles; // ivar: _cellStyleHandles
@property (nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (retain, nonatomic) TSUIntegerKeyDictionary *textStyleHandles; // ivar: _textStyleHandles


+(id)cacheWithTableInfo:(id)arg0 ;
-(id)cellStyleHandleForKey:(NSUInteger)arg0 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)textStyleHandleForKey:(NSUInteger)arg0 ;


@end


#endif