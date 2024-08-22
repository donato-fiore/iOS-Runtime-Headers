// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUICLOUDCLIENT_H
#define VUICLOUDCLIENT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VUICloudClient : NSObject

@property (retain, nonatomic) NSMutableDictionary *artworkMap; // ivar: _artworkMap


+(id)sharedInstance;
-(id)init;
-(void)loadArtworkURLsForPurchaseHistoryIDs:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif