// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBDOWNLOADINTERNAL_H
#define WEBDOWNLOADINTERNAL_H

@class NSString;
@protocol NSURLDownloadDelegate;

#import <Foundation/Foundation.h>


@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate>

 {
    RetainPtr<id> realDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)download:(id)arg0 shouldDecodeSourceDataOfMIMEType:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)download:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(void)dealloc;
-(void)download:(id)arg0 decideDestinationWithSuggestedFilename:(id)arg1 ;
-(void)download:(id)arg0 didCreateDestination:(id)arg1 ;
-(void)download:(id)arg0 didFailWithError:(id)arg1 ;
-(void)download:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 ;
-(void)download:(id)arg0 didReceiveDataOfLength:(NSUInteger)arg1 ;
-(void)download:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)downloadDidBegin:(id)arg0 ;
-(void)downloadDidFinish:(id)arg0 ;
-(void)setRealDelegate:(id)arg0 ;


@end


#endif