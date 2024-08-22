// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTACTIVITYDOWNLOADOPERATION_H
#define _UIDOCUMENTACTIVITYDOWNLOADOPERATION_H

@class NSOperation, NSURL;


#import "UIWindowScene.h"

@interface _UIDocumentActivityDownloadOperation : NSOperation {
    NSURL *_url;
    UIWindowScene *_weakScene;
}




-(id)initWithURL:(id)arg0 scene:(id)arg1 ;
-(void)main;


@end


#endif