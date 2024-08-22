// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPURGEABLEIMAGE_H
#define WFPURGEABLEIMAGE_H

@class NSPurgeableData;

#import <Foundation/Foundation.h>


@interface WFPurgeableImage : NSObject {
    unsigned int _bitmapInfo;
    NSPurgeableData *_bytes;
    *CGColorSpace _colorSpace;
    NSUInteger _bitsPerComponent;
    NSUInteger _bytesPerRow;
    CGSize _size;
}




-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(struct CGImage *)copyImage;
-(void)accessImageContext:(id)arg0 ;
-(void)dealloc;


@end


#endif