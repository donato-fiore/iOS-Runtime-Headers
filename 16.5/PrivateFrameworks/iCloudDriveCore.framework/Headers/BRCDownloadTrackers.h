// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDOWNLOADTRACKERS_H
#define BRCDOWNLOADTRACKERS_H

@class NSMutableDictionary, NSMapTable;

#import <Foundation/Foundation.h>

#import "BRCAccountSessionFPFS.h"

@interface BRCDownloadTrackers : NSObject {
    NSMutableDictionary *_trackersByFileObjectID;
    NSMapTable *_fileObjectIDsByTracker;
}


@property (readonly, weak, nonatomic) BRCAccountSessionFPFS *session; // ivar: _session


-(id)initWithSession:(id)arg0 ;
-(id)trackedFileObjectIDs;
-(void)addDownloadTracker:(id)arg0 forFileObjectID:(id)arg1 withEtagIfLoser:(id)arg2 ;
-(void)document:(id)arg0 didCompleteDownloadEtagIfLoser:(id)arg1 withError:(id)arg2 ;
-(void)removeDownloadTracker:(id)arg0 ;


@end


#endif