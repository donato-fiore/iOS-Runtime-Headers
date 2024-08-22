// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGESPACE_H
#define STSTORAGESPACE_H


#import <Foundation/Foundation.h>


@interface STStorageSpace : NSObject

@property (readonly) NSInteger availableBytes; // ivar: _availableBytes
@property (readonly) NSInteger freeBytes; // ivar: _freeBytes
@property (readonly) BOOL isLowSpace; // ivar: _isLowSpace
@property (readonly) BOOL isVeryLowSpace; // ivar: _isVeryLowSpace
@property (readonly) NSInteger purgeableBytes; // ivar: _purgeableBytes
@property (readonly) NSInteger totalBytes; // ivar: _totalBytes
@property (readonly) NSInteger usedBytes; // ivar: _usedBytes


-(id)initWithTotal:(NSInteger)arg0 free:(NSInteger)arg1 purgeable:(NSInteger)arg2 ;


@end


#endif