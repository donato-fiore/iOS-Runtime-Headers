// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSCACHEUPDATELISTENER_H
#define VSCACHEUPDATELISTENER_H

@class NSLock, NSMutableArray, NSDictionary, NSTimer;

#import <Foundation/Foundation.h>


@interface VSCacheUpdateListener : NSObject {
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    BOOL _isListening;
}




+(id)sharedListener;
+(id)sharedListenerIfExists;
-(id)_initShared;
-(id)init;
-(void)_enqueueRequest:(id)arg0 ;
-(void)_flush;
-(void)_spokenLanguageChanged:(id)arg0 ;
-(void)dealloc;
-(void)performUpdateForModelIdentifier:(id)arg0 classIdentifier:(id)arg1 ;
-(void)startListening;
-(void)stopListening;


@end


#endif