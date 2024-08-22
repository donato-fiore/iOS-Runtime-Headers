// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TXRIMAGE_H
#define TXRIMAGE_H

@class NSError;
@protocol NSCopying, TXRDataSourceProvider, TXRBuffer;

#import <Foundation/Foundation.h>


@interface TXRImage : NSObject <NSCopying>

 {
    NSUInteger _bytesPerImage;
    NSUInteger _bytesPerRow;
    NSInteger _face;
    NSUInteger _element;
    NSUInteger _level;
    id<TXRDataSourceProvider> *_dataSourceProvider;
}


@property (readonly) NSObject<TXRBuffer> *buffer; // ivar: _buffer
@property (readonly) NSUInteger bytesPerImage;
@property (readonly) NSUInteger bytesPerRow;
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSUInteger offset; // ivar: _offset


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initAsLevel:(NSUInteger)arg0 element:(NSUInteger)arg1 face:(NSUInteger)arg2 dataSourceProvider:(id)arg3 ;
-(id)initWithBytesPerRow:(NSUInteger)arg0 bytesPerImage:(NSUInteger)arg1 buffer:(id)arg2 offset:(NSUInteger)arg3 ;
-(void)deferredProvide;


@end


#endif