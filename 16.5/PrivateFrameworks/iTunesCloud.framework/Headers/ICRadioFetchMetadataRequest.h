// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICRADIOFETCHMETADATAREQUEST_H
#define ICRADIOFETCHMETADATAREQUEST_H

@class NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICRadioFetchMetadataRequest : NSObject <NSCopying>



@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy, nonatomic) NSArray *storeAdamIDs; // ivar: _storeAdamIDs
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext; // ivar: _storeRequestContext
@property (copy, nonatomic) NSData *timedMetadataData; // ivar: _timedMetadataData


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif