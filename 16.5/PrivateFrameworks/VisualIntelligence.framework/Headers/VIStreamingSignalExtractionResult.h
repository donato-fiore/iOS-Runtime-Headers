// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VISTREAMINGSIGNALEXTRACTIONRESULT_H
#define VISTREAMINGSIGNALEXTRACTIONRESULT_H

@class NSData;

#import <Foundation/Foundation.h>

#import "VIImageRegion.h"

@interface VIStreamingSignalExtractionResult : NSObject

@property (readonly, nonatomic) VIImageRegion *imageRegion; // ivar: _imageRegion
@property (readonly, nonatomic) NSData *payload; // ivar: _payload


-(id)initWithImageRegion:(id)arg0 payload:(id)arg1 ;


@end


#endif