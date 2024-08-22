// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQREMOTEUIDATALOADER_H
#define ICQREMOTEUIDATALOADER_H

@class NSString, NSURLSession;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface ICQRemoteUIDataLoader : NSObject <NSURLSessionTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)init;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)addHeadersForRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)loadDataFromURL:(id)arg0 completion:(id)arg1 ;


@end


#endif