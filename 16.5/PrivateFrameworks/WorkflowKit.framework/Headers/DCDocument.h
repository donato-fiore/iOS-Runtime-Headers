// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCDOCUMENT_H
#define DCDOCUMENT_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface DCDocument : NSObject

@property (readonly, copy, nonatomic) id *annotation; // ivar: _annotation
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL


+(id)documentWithURL:(id)arg0 ;
+(id)documentWithURL:(id)arg0 annotation:(id)arg1 ;
-(id)initWithURL:(id)arg0 annotation:(id)arg1 ;
-(void)openInDefaultAppWithCompletionHandler:(id)arg0 ;
-(void)openWithAppBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif