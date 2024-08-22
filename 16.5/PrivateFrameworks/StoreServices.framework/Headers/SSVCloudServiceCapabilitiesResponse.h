// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVCLOUDSERVICECAPABILITIESRESPONSE_H
#define SSVCLOUDSERVICECAPABILITIESRESPONSE_H

@class NSString;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SSVSubscriptionStatus.h"

@interface SSVCloudServiceCapabilitiesResponse : NSObject <SSXPCCoding, NSCopying>



@property (nonatomic) BOOL canSubscribeToMusicCatalog; // ivar: _canSubscribeToMusicCatalog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus; // ivar: _subscriptionStatus
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAddToCloudMusicLibrary; // ivar: _supportsAddToCloudMusicLibrary
@property (nonatomic) BOOL supportsMusicCatalogPlayback; // ivar: _supportsMusicCatalogPlayback


-(id)_descriptionWithSubscriptionStatusDescriptorBlock:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif