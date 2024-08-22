// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTHOTFIXMANAGER_H
#define _LTHOTFIXMANAGER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LTHotfixManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSURL *hotfixURL; // ivar: _hotfixURL


+(void)initialize;
-(id)_CDNURL:(id)arg0 ;
-(id)init;
-(void)_decompressArchive:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(void)_downloadHotfix:(id)arg0 completion:(id)arg1 ;
-(void)_downloadMappingPlist:(id)arg0 ;
-(void)_downloadWithURL:(id)arg0 completion:(id)arg1 ;
-(void)deleteHotfix:(id)arg0 ;
-(void)updateHotfix:(id)arg0 ;


@end


#endif