// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIARQLPREVIEWMANAGER_H
#define VUIARQLPREVIEWMANAGER_H

@class NSString, NSURLSession;
@protocol QLPreviewControllerDelegate, NSURLSessionDownloadDelegate;

#import <Foundation/Foundation.h>

#import "VUIARAssetRequest.h"

@interface VUIARQLPreviewManager : NSObject <QLPreviewControllerDelegate, NSURLSessionDownloadDelegate>



@property (retain, nonatomic) VUIARAssetRequest *activeAssetRequest; // ivar: _activeAssetRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat resourceTimeout; // ivar: _resourceTimeout
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_previewControllerWithAssetRequest:(id)arg0 ;
-(id)_quickLookPreviewItemWithFileURL:(id)arg0 shareURL:(id)arg1 ;
-(id)init;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;
-(void)_presentPreviewControllerWithURL:(id)arg0 shareURL:(id)arg1 fileName:(id)arg2 ;
-(void)cancelExistingDownloadsIfAny;
-(void)configureDownloadSession;
-(void)configureUsingDictionary:(id)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)previewWithURL:(id)arg0 shareURL:(id)arg1 ;


@end


#endif