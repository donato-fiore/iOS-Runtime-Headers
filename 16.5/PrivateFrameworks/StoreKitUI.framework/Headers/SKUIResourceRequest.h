// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIRESOURCEREQUEST_H
#define SKUIRESOURCEREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIResourceRequest : NSObject <NSCopying>



@property (retain, nonatomic) id *cacheKey; // ivar: _cacheKey
@property (readonly, nonatomic) BOOL cachesInMemory;
@property (nonatomic) NSUInteger requestIdentifier; // ivar: _requestID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initSKUIResourceRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)newLoadOperation;
-(void)finishWithResource:(id)arg0 ;


@end


#endif