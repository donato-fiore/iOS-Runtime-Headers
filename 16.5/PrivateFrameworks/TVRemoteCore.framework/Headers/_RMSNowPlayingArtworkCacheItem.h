// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RMSNOWPLAYINGARTWORKCACHEITEM_H
#define _RMSNOWPLAYINGARTWORKCACHEITEM_H

@class NSData, NSString;
@protocol NSDiscardableContent;

#import <Foundation/Foundation.h>


@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent>

 {
    BOOL _keepAlive;
}


@property (retain, nonatomic) NSData *artworkData; // ivar: _artworkData
@property (retain, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier


-(BOOL)beginContentAccess;
-(BOOL)isContentDiscarded;
-(void)discardContentIfPossible;
-(void)endContentAccess;


@end


#endif