// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUMETADATACACHEDATAPROVIDER_H
#define TUMETADATACACHEDATAPROVIDER_H

@class NSMutableDictionary;
@protocol TUMetadataCacheDataProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUMetadataCacheDataProvider : NSObject

@property (weak, nonatomic) NSObject<TUMetadataCacheDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSMutableDictionary *providerCache; // ivar: _providerCache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)classIdentifier;
-(id)description;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)metadataForDestinationID:(id)arg0 ;
-(void)refresh;
-(void)setObject:(id)arg0 forDestinationID:(id)arg1 ;
-(void)updateCacheWithDestinationIDs:(id)arg0 withGroup:(id)arg1 ;


@end


#endif