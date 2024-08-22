// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSDOWNLOADQUEUE_H
#define SSDOWNLOADQUEUE_H

@class NSString, NSSet, NSArray;
@protocol SSDownloadManagerObserverPrivate;

#import <Foundation/Foundation.h>

#import "SSDownloadManager.h"

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate>

 {
    SSDownloadManager *_downloadManager;
    *__CFSet _observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *downloadKinds;
@property (readonly) SSDownloadManager *downloadManager;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *placeholderDownloads;
@property (readonly, nonatomic) NSArray *preorders;
@property (nonatomic) BOOL shouldAutomaticallyFinishDownloads; // ivar: _autoFinishDownloads
@property (readonly) Class superclass;
@property (readonly, getter=isUsingNetwork) BOOL usingNetwork;


+(id)mediaDownloadKinds;
+(id)softwareApplicationDownloadKinds;
-(BOOL)addDownload:(id)arg0 ;
-(BOOL)canCancelDownload:(id)arg0 ;
-(BOOL)cancelDownload:(id)arg0 ;
-(BOOL)reloadFromServer;
-(BOOL)startPreOrderDownload:(id)arg0 ;
-(id)_initWithDownloadManagerOptions:(id)arg0 ;
-(id)downloadForItemIdentifier:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDownloadKinds:(id)arg0 ;
-(id)initWithDownloadManagerOptions:(id)arg0 ;
-(void)_handleDownloadsDidChange:(id)arg0 ;
-(void)_handleDownloadsRemoved:(id)arg0 ;
-(void)_messageObserversWithFunction:(*unk)arg0 context:(*void)arg1 ;
-(void)_sendDownloadStatusChangedAtIndex:(NSInteger)arg0 ;
-(void)_sendQueueChangedWithRemovals:(id)arg0 ;
-(void)_sendQueueNetworkUsageChanged;
-(void)_sendQueuePreOrdersChanged;
-(void)addObserver:(id)arg0 ;
-(void)addPlaceholderDownloads:(id)arg0 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadsDidChange:(id)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg0 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg0 ;
-(void)getDownloadsUsingBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePlaceholderDownload:(id)arg0 ;


@end


#endif