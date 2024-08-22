// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSWEBSHEETDOWNLOADMANAGER_H
#define WSWEBSHEETDOWNLOADMANAGER_H

@class NSString;
@protocol _WKDownloadDelegate, _WSWebSheetDownloadDelegate;

#import <Foundation/Foundation.h>


@interface WSWebSheetDownloadManager : NSObject <_WKDownloadDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<_WSWebSheetDownloadDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fileDownloadPath; // ivar: _fileDownloadPath
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)removeFromDisk;
-(void)_download:(id)arg0 decideDestinationWithSuggestedFilename:(id)arg1 completionHandler:(id)arg2 ;
-(void)_download:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_download:(id)arg0 didReceiveData:(NSUInteger)arg1 ;
-(void)_download:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)_downloadDidFinish:(id)arg0 ;
-(void)_downloadDidStart:(id)arg0 ;


@end


#endif