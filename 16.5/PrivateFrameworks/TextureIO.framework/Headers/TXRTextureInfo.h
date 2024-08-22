// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TXRTEXTUREINFO_H
#define TXRTEXTUREINFO_H

@class NSError;

#import <Foundation/Foundation.h>


@interface TXRTextureInfo : NSObject {
    ? _dimensions;
}


@property (nonatomic) NSUInteger alphaInfo; // ivar: _alphaInfo
@property (nonatomic) NSUInteger arrayLength; // ivar: _arrayLength
@property (nonatomic) BOOL cubemap; // ivar: _cubemap
@property ? dimensions;
@property (readonly) NSError *error; // ivar: _error
@property (nonatomic) NSUInteger mipmapLevelCount; // ivar: _mipmapLevelCount
@property (nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat




@end


#endif