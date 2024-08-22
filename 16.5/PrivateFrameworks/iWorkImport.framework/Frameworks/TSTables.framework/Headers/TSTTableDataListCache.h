// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEDATALISTCACHE_H
#define TSTTABLEDATALISTCACHE_H

@class TSULocale, TSUIntegerKeyDictionary;

#import <Foundation/Foundation.h>

#import "TSTTableDataListItemCache.h"
#import "TSTTableDataStore.h"

@interface TSTTableDataListCache : NSObject

@property (retain, nonatomic) TSTTableDataListItemCache *cellStyleHandles; // ivar: _cellStyleHandles
@property (retain, nonatomic) TSTTableDataStore *dataStore; // ivar: _dataStore
@property (retain, nonatomic) TSTTableDataListItemCache *formats; // ivar: _formats
@property (retain, nonatomic) TSULocale *locale; // ivar: _locale
@property (retain, nonatomic) TSUIntegerKeyDictionary *strings; // ivar: _strings
@property (retain, nonatomic) TSTTableDataListItemCache *textStyleHandles; // ivar: _textStyleHandles


+(id)cacheWithDataStore:(id)arg0 ;
-(id)cellStyleHandleForKey:(unsigned int)arg0 ;
-(id)formatForKey:(unsigned int)arg0 ;
-(id)initWithDataStore:(id)arg0 ;
-(id)stringForKey:(unsigned int)arg0 shouldWrap:(*BOOL)arg1 ;
-(id)textStyleHandleForKey:(unsigned int)arg0 ;


@end


#endif