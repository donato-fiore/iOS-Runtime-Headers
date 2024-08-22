// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13TEAFOUNDATION34NETWORKOPERATIONURLSESSIONDELEGATE_H
#define _TTC13TEAFOUNDATION34NETWORKOPERATIONURLSESSIONDELEGATE_H

@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate;

#import <Foundation/Foundation.h>


@interface _TtC13TeaFoundation34NetworkOperationURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>

 {
    ? taskLock;
    ? runningTasks;
    ? observerLock;
    ? sessionDidFinishObservers;
}




-(id)init;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;


@end


#endif