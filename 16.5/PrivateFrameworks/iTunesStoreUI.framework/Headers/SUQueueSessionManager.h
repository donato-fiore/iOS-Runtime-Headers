// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUQUEUESESSIONMANAGER_H
#define SUQUEUESESSIONMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUQueueSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_downloadManagers;
    NSMutableArray *_preorderManagers;
}




-(id)_queueSessionWithDownloadKinds:(id)arg0 fromArray:(id)arg1 ;
-(id)_queueSessionWithManagerOptions:(id)arg0 fromArray:(id)arg1 ;
-(id)_queueSessionWithQueue:(id)arg0 fromArray:(id)arg1 ;
-(id)beginDownloadManagerSessionForDownloadKind:(id)arg0 ;
-(id)beginDownloadManagerSessionWithDownloadKinds:(id)arg0 ;
-(id)beginDownloadManagerSessionWithManagerOptions:(id)arg0 ;
-(id)beginPreorderManagerSessionWithItemKinds:(id)arg0 ;
-(id)init;
-(void)_endQueueSession:(id)arg0 fromArray:(id)arg1 ;
-(void)dealloc;
-(void)endDownloadManagerSessionForManager:(id)arg0 ;
-(void)endPreorderManagerSessionWithManager:(id)arg0 ;


@end


#endif