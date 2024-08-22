// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTDOWNLOADQUEUE_H
#define SUSCRIPTDOWNLOADQUEUE_H

@class SSPreorderManager, NSString, NSArray;
@protocol SSDownloadManagerObserver, SSPreorderManagerObserver;


#import "SUScriptObject.h"
#import "SUClientInterface.h"
#import "SUDownloadManager.h"

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver>

 {
    SUClientInterface *_clientInterface;
    SUDownloadManager *_downloadManager;
    SSPreorderManager *_preorderManager;
    NSString *_queueType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *downloads;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *queueType;
@property (readonly) Class superclass;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithQueueType:(id)arg0 clientInterface:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)_setupManagersWithClientInterface:(id)arg0 queueType:(id)arg1 ;
-(void)_tearDownQueues;
-(void)checkQueue;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg0 ;
-(void)finalizeForWebScript;
-(void)preorderManagerPreordersDidChange:(id)arg0 ;


@end


#endif