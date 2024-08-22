// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKPLAYACTIVITYDECORATEVODOPERATION_H
#define WLKPLAYACTIVITYDECORATEVODOPERATION_H

@class NSString, NSDictionary, NSArray;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation {
    NSString *_compoundId;
}


@property (readonly, copy, nonatomic) NSDictionary *metadataByIdentifier; // ivar: _metadataByIdentifier
@property (readonly, copy, nonatomic) NSArray *playActivityIdentifiers; // ivar: _playActivityIdentifiers


+(id)identifierForPlayActivityID:(id)arg0 channelID:(id)arg1 duration:(id)arg2 ;
-(id)initWithExternalId:(id)arg0 brandId:(id)arg1 hlsAssetDuration:(id)arg2 ;
-(void)processResponse;


@end


#endif