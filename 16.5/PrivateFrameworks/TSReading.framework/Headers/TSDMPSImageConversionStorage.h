// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMPSIMAGECONVERSIONSTORAGE_H
#define TSDMPSIMAGECONVERSIONSTORAGE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TSDMPSImageConversionStorage : NSObject

@property (readonly, nonatomic) NSMapTable *storage; // ivar: _storage


-(id)init;
-(void)removeAllObjects;


@end


#endif