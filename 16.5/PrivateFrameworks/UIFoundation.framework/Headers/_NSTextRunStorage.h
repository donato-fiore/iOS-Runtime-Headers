// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSTEXTRUNSTORAGE_H
#define _NSTEXTRUNSTORAGE_H

@class NSMutableRLEArray;
@protocol NSTextLocation, __NSTextRunStorageDataSource;

#import <Foundation/Foundation.h>

#import "NSStorage.h"
#import "NSTextRange.h"

@interface _NSTextRunStorage : NSObject {
    NSMutableRLEArray *_RLEArray;
    NSStorage *_elements;
    NSTextRange *_seedRange;
    NSInteger _seedElementIndex;
    BOOL _isCountable;
    BOOL _hasBaseLocation;
    BOOL _mapsLocationOffset;
    id<NSTextLocation> *_baseLocation;
}


@property (readonly) NSInteger baseIndex;
@property (readonly) NSObject<NSTextLocation> *baseLocation;
@property (readonly) NSObject<__NSTextRunStorageDataSource> *dataSource; // ivar: _dataSource


-(id)description;
-(id)enumerateObjectsFromLocation:(id)arg0 options:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)dealloc;
-(void)invalidateElementsInRange:(id)arg0 delta:(NSInteger)arg1 ;
-(void)setObject:(id)arg0 forRange:(id)arg1 ;


@end


#endif