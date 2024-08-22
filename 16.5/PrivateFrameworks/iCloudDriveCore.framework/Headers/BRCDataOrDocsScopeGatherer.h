// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDATAORDOCSSCOPEGATHERER_H
#define BRCDATAORDOCSSCOPEGATHERER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "BRCNotificationPipe.h"
#import "BRCAccountSessionFPFS.h"
#import "BRCItemGlobalID.h"

@interface BRCDataOrDocsScopeGatherer : NSObject {
    BRCNotificationPipe *_pipe;
    id *_gatherReply;
    NSMutableArray *_gatheringAppLibraries;
    NSUInteger _gatheringRankMin;
    NSUInteger _gatheringRankMax;
    NSUInteger _lastSentRank;
    NSString *_gatheringNamePrefix;
    BRCAccountSessionFPFS *_session;
    BOOL _includesDeadItems;
    BOOL _invalidated;
}


@property (retain, nonatomic) BRCItemGlobalID *gatheredChildrenItemGlobalID; // ivar: _gatheredChildrenItemGlobalID


-(id)_popGatherReply:(SEL)arg0 ;
-(id)initWithNotificationPipe:(id)arg0 appLibraries:(id)arg1 startingRank:(NSUInteger)arg2 maxRank:(NSUInteger)arg3 withDeadItems:(BOOL)arg4 gatherReply:(id)arg5 ;
-(void)dealloc;
-(void)done;
-(void)gatherWithBatchSize:(NSInteger)arg0 completion:(id)arg1 ;
-(void)invalidate;


@end


#endif