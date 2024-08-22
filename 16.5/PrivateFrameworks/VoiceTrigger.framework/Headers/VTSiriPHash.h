// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTSIRIPHASH_H
#define VTSIRIPHASH_H


#import <Foundation/Foundation.h>


@interface VTSiriPHash : NSObject

@property short signalEstimate; // ivar: _signalEstimate
@property unsigned char signalFractional; // ivar: _signalFractional


+(NSUInteger)sampleSizeForSignalEstimate;
+(id)sharedPhash;
-(id)init;
-(unsigned short)pHash:(*float)arg0 length:(int)arg1 ;


@end


#endif