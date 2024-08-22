// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIBLOOMFILTER_H
#define VIBLOOMFILTER_H


#import <Foundation/Foundation.h>

#import "VIBitVector.h"

@interface VIBloomFilter : NSObject {
    VIBitVector *_bits;
}


@property (readonly) unsigned int numberOfAddedItems; // ivar: _numberOfAddedItems
@property (readonly) NSUInteger numberOfBits; // ivar: _numberOfBits
@property (readonly) unsigned int numberOfHashes; // ivar: _numberOfHashes
@property (readonly) unsigned int seed; // ivar: _seed


-(BOOL)containsItem:(id)arg0 ;
-(id)data;
-(id)description;
-(id)initWithData:(id)arg0 numberOfHashes:(unsigned int)arg1 numberOfBits:(unsigned int)arg2 seed:(unsigned int)arg3 error:(*id)arg4 ;
-(id)initWithNumberOfHashes:(unsigned int)arg0 numberOfBits:(NSUInteger)arg1 seed:(unsigned int)arg2 ;
-(void)addItem:(id)arg0 ;


@end


#endif